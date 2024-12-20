#include "ICommand.h"
#include "IGameObject.h"

// 左移動コマンド
void MoveLeftCommand::Execute(GameObject& object) {
	object.x -= object.speed;
}

// 右移動コマンド
void MoveRightCommand::Execute(GameObject& object) {
	object.x += object.speed;
}