#include "InputHandle.h"
#include <Novice.h>

// コンストラクタ
InputHandler::InputHandler(Command* left, Command* right)
	: leftCommand_(left), rightCommand_(right) {
}

// 入力処理
Command* InputHandler::HandleInput(const char* keys) {
	if (keys[DIK_A]) {
		return leftCommand_; // Aキーで左移動
	}
	else if (keys[DIK_D]) {
		return rightCommand_; // Dキーで右移動
	}
	return nullptr; // 入力がなければ何もしない
}