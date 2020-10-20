#ifndef UNICODE
#define UNICODE
#endif 

#include <windows.h>

// swsprintf
#include <stdio.h>

// add winmm.lib to linker
// Win32 API
// for UINT type
//#include <iostream>
#include <wtypes.h>
#include <mmeapi.h>

// WinRT
// https://docs.microsoft.com/en-us/windows/uwp/cpp-and-winrt-apis/get-started
#include "pch.h"
using namespace winrt;
using namespace Windows::Devices::Midi;
using namespace Windows::Devices::Enumeration;

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR pCmdLine, int nCmdShow);

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

void win32Test();
//void enumerationCompleted(DeviceWatcher^ sender, Object^ e);

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR pCmdLine, int nCmdShow)
{

    // Register the window class.
    const wchar_t CLASS_NAME[]  = L"Sample Window Class";
    
    WNDCLASS wc = { };

    wc.lpfnWndProc   = WindowProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    // Create the window.

    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles.
        CLASS_NAME,                     // Window class
        L"Learn to Program Windows",    // Window text
        WS_OVERLAPPEDWINDOW,            // Window style

        // Size and position
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

        NULL,       // Parent window    
        NULL,       // Menu
        hInstance,  // Instance handle
        NULL        // Additional application data
        );

    if (hwnd == NULL)
    {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    // Show all MIDI devices accessable with Win32 libs.
    win32Test();

    // Set up DeviceWatcher
    hstring devices = MidiOutPort::GetDeviceSelector();
    DeviceWatcher deviceWatcher = DeviceInformation::CreateWatcher(devices);
    //deviceWatcher->EnumerationCompleted += ref new TypedEventHandler<DeviceWatcher^, Object^>(this, &Watcher_EnumerationCompleted);

    //deviceWatcher.EnumerationCompleted =   
    //deviceWatcher.Start();

    // Run the message loop.
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);

            // All painting occurs here, between BeginPaint and EndPaint.
            FillRect(hdc, &ps.rcPaint, (HBRUSH) (COLOR_WINDOW+1));
            EndPaint(hwnd, &ps);
        }
        return 0;
    }

    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void win32Test() {
    // Win32 API
    UINT test = midiInGetNumDevs();

    //std::cout << "Win32 API test.\n" << test << " inputs.\n";

    wchar_t buf[100];
    swprintf(buf, 100, L"Win32 API test.\n%d inputs.\n", test);
    OutputDebugString(buf);

    for (UINT i = 0; i < test; i++) {
        MIDIINCAPS caps;
        midiInGetDevCaps(i, &caps, sizeof(caps));

        //std::cout << caps.szPname;
        //printf("%ls\n", caps.szPname);
        swprintf(buf, 100, L"%s\n", caps.szPname);
        OutputDebugString(buf);
    }

    test = midiOutGetNumDevs();
    //std::cout << test << " outputs.\n";
    swprintf(buf, 100, L"%d outputs.\n", test);
    OutputDebugString(buf);

    for (UINT i = 0; i < test; i++) {
        MIDIOUTCAPS caps;
        midiOutGetDevCaps(i, &caps, sizeof(caps));
        //std::cout << caps.szPname;
        //printf("%ls\n", caps.szPname);
        swprintf(buf, 100, L"%s\n", caps.szPname);
        OutputDebugString(buf);
    }
}


void Watcher_EnumerationCompleted(DeviceWatcher^ sender, Object^ o) {
    // do nothing
}