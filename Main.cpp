/* 
 * File:   Main
 * Author: nokotan
 *
 * Created on 2020/01/30, 0:57
 * 
 * DxLibToHTML5雛形ファイル
 */

#include "DxLib.h"

#ifdef _WIN32
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
#else
int main () {
#endif
	SetGraphMode(640, 480, 32);

    if (DxLib_Init() == -1) {
		return -1;
    }

    ChangeFont("07LogoTypeGothic7.ttf");
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0) {
		ClearDrawScreen();

		{
			int MouseX, MouseY;
			int CircleColor = (GetMouseInput() & MOUSE_INPUT_LEFT) ? GetColor(255, 255, 0) : GetColor(255, 0, 0);

			GetMousePoint(&MouseX, &MouseY);
			DrawCircle(MouseX, MouseY, 64, CircleColor);
		}

		{
			int StringColor = CheckHitKey(KEY_INPUT_SPACE) ? GetColor(0, 255, 0) : GetColor(255, 255, 255);
			DrawString(3, 3, "Hello DxLib on HTML5!", StringColor);
		}

		ScreenFlip();
	}
    
    DxLib_End();

    return 0;
}