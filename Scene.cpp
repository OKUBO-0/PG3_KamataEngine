#include "Scene.h"

// コンストラクタ
Scene::Scene() {
	// ゲームオブジェクトの初期化
	player_ = new GameObject(640.0f, 360.0f, 5.0f);

	// コマンドの初期化
	moveLeft_ = new MoveLeftCommand();
	moveRight_ = new MoveRightCommand();

	// 入力ハンドラーの初期化
	inputHandler_ = new InputHandler(moveLeft_, moveRight_);
}

// デストラクタ
Scene::~Scene() {
	delete player_;
	delete moveLeft_;
	delete moveRight_;
	delete inputHandler_;
}

// 更新処理
void Scene::Update(const char* keys) {
	// 入力に応じたコマンドを取得
	Command* command = inputHandler_->HandleInput(keys);
	if (command) {
		command->Execute(*player_); // コマンドを実行してオブジェクトを更新
	}
}

// 描画処理
void Scene::Draw() const {
	player_->Draw(); // プレイヤーオブジェクトを描画
}