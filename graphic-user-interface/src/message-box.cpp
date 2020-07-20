#include <Windows.h>
#pragma comment(lib,"user32.lib")  // for linking user32 library

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow){
    
    MessageBox(NULL, "HELLO", "MY first GUI", MB_OK);
    return 0;
}