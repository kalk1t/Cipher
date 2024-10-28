#include "funct.h"


void main() {



	WNDCLASSA wc = { 0 };


	wc.hbrBackground = CreateSolidBrush(RGB(21, 21, 21));
	wc.lpszClassName = "Cipher";
	wc.lpfnWndProc = control_main_win;

	if (!RegisterClassA(&wc)) {
		return;
	}


	DWORD style = WS_VISIBLE
		| WS_OVERLAPPED
		| WS_CAPTION
		| WS_SYSMENU
		| WS_THICKFRAME
		| WS_MAXIMIZEBOX
		| WS_MINIMIZEBOX
		;



	X = 350;
	Y = 100;
	W = 500;
	H = 550;

	HWND main = CreateWindowA(wc.lpszClassName, "Cipher", style, X, Y, W, H, 0, 0, 0, 0);


	MSG msg;
	while (GetMessage(&msg, 0, 0, 0)) {
		DispatchMessage(&msg);
		TranslateMessage(&msg);
	}

}

