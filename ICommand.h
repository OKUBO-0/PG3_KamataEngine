#ifndef COMMAND_H
#define COMMAND_H

// GameObject クラスの前方宣言
class GameObject;

// コマンドの抽象クラス
class Command {
public:
	virtual ~Command() = default;
	virtual void Execute(GameObject& object) = 0; // オブジェクトに対する操作
};

// 左移動コマンド
class MoveLeftCommand : public Command {
public:
	void Execute(GameObject& object) override;
};

// 右移動コマンド
class MoveRightCommand : public Command {
public:
	void Execute(GameObject& object) override;
};

#endif // COMMAND_H