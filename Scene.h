#ifndef SCENE_H
#define SCENE_H

#include "IGameObject.h"
#include "ICommand.h"
#include "InputHandle.h"

// シーンを管理するクラス
class Scene {
public:
	Scene();       // コンストラクタ
	~Scene();      // デストラクタ

	void Update(const char* keys); // 更新処理
	void Draw() const;             // 描画処理

private:
	GameObject* player_;           // プレイヤーオブジェクト
	MoveLeftCommand* moveLeft_;    // 左移動コマンド
	MoveRightCommand* moveRight_;  // 右移動コマンド
	InputHandler* inputHandler_;   // 入力ハンドラー
};

#endif // SCENE_H