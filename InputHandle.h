#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "ICommand.h"

// 入力処理を管理するクラス
class InputHandler {
private:
	Command* leftCommand_;
	Command* rightCommand_;

public:
	InputHandler(Command* left, Command* right);
	Command* HandleInput(const char* keys); // 入力に応じてコマンドを取得
};

#endif // INPUTHANDLER_H