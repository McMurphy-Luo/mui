#include <iostream>
#include "Windows.h"

using std::cout;
using std::endl;

int CALLBACK wWinMain(HINSTANCE h_instance, HINSTANCE h_preview_instance, LPWSTR cmd_string, int cmd_show) {
    OutputDebugStringW(L"MUI");
}