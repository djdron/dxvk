#include <windows.h>

WINUSERAPI WINBOOL WINAPI EnumDisplayMonitors(HDC hdc,LPCRECT lprcClip,MONITORENUMPROC lpfnEnum,LPARAM dwData)
{
    return FALSE;
}
WINBASEAPI WINBOOL WINAPI SetEvent (HANDLE hEvent)
{
    return FALSE;
}
WINUSERAPI WINBOOL WINAPI GetMonitorInfoW(HMONITOR hMonitor,LPMONITORINFO lpmi)
{
    return FALSE;
}
WINUSERAPI WINBOOL WINAPI IsWindow(HWND hWnd)
{
    return FALSE;
}
WINUSERAPI WINBOOL WINAPI GetWindowRect(HWND hWnd,LPRECT lpRect)
{
    return FALSE;
}
WINUSERAPI HMONITOR WINAPI MonitorFromPoint(POINT pt,DWORD dwFlags)
{
    return NULL;
}
WINBASEAPI WINBOOL WINAPI QueryPerformanceCounter (LARGE_INTEGER *lpPerformanceCount)
{
    return FALSE;
}
WINBASEAPI WINBOOL WINAPI QueryPerformanceFrequency (LARGE_INTEGER *lpFrequency)
{
    return FALSE;    
}
WINUSERAPI WINBOOL WINAPI SetRect(LPRECT lprc,int xLeft,int yTop,int xRight,int yBottom)
{
    return FALSE;
}
WINUSERAPI LONG WINAPI GetWindowLongA(HWND hWnd,int nIndex)
{
    return 0;
}
WINUSERAPI LONG WINAPI GetWindowLongW(HWND hWnd,int nIndex)
{
    return 0;
}
WINUSERAPI LONG WINAPI SetWindowLongW(HWND hWnd,int nIndex,LONG dwNewLong)
{
    return 0;
}
WINUSERAPI WINBOOL WINAPI AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,WINBOOL bMenu,DWORD dwExStyle)
{
    return FALSE;
}
WINUSERAPI WINBOOL WINAPI OffsetRect(LPRECT lprc,int dx,int dy)
{
    return FALSE;
}
WINUSERAPI WINBOOL WINAPI MoveWindow (HWND hWnd, int X, int Y, int nWidth, int nHeight, WINBOOL bRepaint)
{
    return FALSE;
}
WINUSERAPI WINBOOL WINAPI SetWindowPos (HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags)
{
    return FALSE;
}
WINADVAPI LONG WINAPI RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)
{
    return 0;
}
WINADVAPI LONG WINAPI RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData)
{
    return 0;
}
WINADVAPI LONG WINAPI RegCloseKey(HKEY hKey)
{
    return 0;
}
WINBASEAPI HANDLE WINAPI CreateEventA (LPSECURITY_ATTRIBUTES lpEventAttributes, WINBOOL bManualReset, WINBOOL bInitialState, LPCSTR lpName)
{
    return NULL;
}
WINADVAPI LONG WINAPI RegNotifyChangeKeyValue(HKEY hKey,WINBOOL bWatchSubtree,DWORD dwNotifyFilter,HANDLE hEvent,WINBOOL fAsynchronous)
{
    return 0;
}
WINBASEAPI DWORD WINAPI WaitForSingleObject (HANDLE hHandle, DWORD dwMilliseconds)
{
    return 0;
}
WINBASEAPI HMODULE WINAPI GetModuleHandleA (LPCSTR lpModuleName)
{
    return NULL;
}
WINBASEAPI HMODULE WINAPI GetModuleHandleW (LPCWSTR lpModuleName)
{
    return NULL;
}
WINBASEAPI WINBOOL WINAPI CloseHandle (HANDLE hObject)
{
    return FALSE;
}
WINBASEAPI HMODULE WINAPI LoadLibraryA(LPCSTR lpLibFileName)
{
    return NULL;
}
WINBASEAPI WINBOOL WINAPI FreeLibrary (HMODULE hLibModule)
{
    return FALSE;
}
WINBASEAPI FARPROC WINAPI GetProcAddress (HMODULE hModule, LPCSTR lpProcName)
{
    return NULL;
}
WINBASEAPI int WINAPI WideCharToMultiByte (UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar)
{
    return 0;
}
WINBASEAPI int WINAPI MultiByteToWideChar (UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
{
    return 0;
}
WINADVAPI WINBOOL WINAPI AllocateLocallyUniqueId (PLUID Luid)
{
    return FALSE;
}
WINUSERAPI LONG WINAPI ChangeDisplaySettingsExW(LPCWSTR lpszDeviceName,LPDEVMODEW lpDevMode,HWND hwnd,DWORD dwflags,LPVOID lParam)
{
    return 0;
}
WINUSERAPI WINBOOL WINAPI EnumDisplaySettingsW(LPCWSTR lpszDeviceName,DWORD iModeNum,LPDEVMODEW lpDevMode)
{
    return FALSE;
}
WINUSERAPI WINBOOL WINAPI GetClientRect(HWND hWnd,LPRECT lpRect)
{
    return FALSE;
}
WINGDIAPI HDC WINAPI CreateCompatibleDC(HDC hdc)
{
    return NULL;
}
WINBASEAPI WINBOOL WINAPI ReleaseSemaphore (HANDLE hSemaphore, LONG lReleaseCount, LPLONG lpPreviousCount)
{
    return FALSE;
}
WINBASEAPI HANDLE WINAPI CreateSemaphoreA (LPSECURITY_ATTRIBUTES lpSemaphoreAttributes, LONG lInitialCount, LONG lMaximumCount, LPCSTR lpName)
{
    return NULL;
}
WINBASEAPI HANDLE WINAPI CreateFileA (LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
{
    return NULL;
}
WINBASEAPI WINBOOL WINAPI DeviceIoControl (HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped)
{
    return FALSE;
}
