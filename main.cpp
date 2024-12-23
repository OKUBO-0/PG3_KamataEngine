#include <Novice.h>
#include "SceneManager.h"
#include "TitleScene.h"

const char kWindowTitle[] = "LE2C_04_オオクボ_タク";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// 初期シーンをタイトルシーンに設定
	SceneManager sceneManager(new TitleScene());

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		// シーンの更新
		sceneManager.Update();

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		// シーンの描画
		sceneManager.Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}

// 以下の内容をコードに追加する
// 課題内容
//ステートパターンを用いてシーン切り替えを行うこと
//
//[条件]
// ■ シューティングゲームで敵を倒す& シーン切り画えの内容をステートバターンを用いて実装すること
// 
// ■ シーンは「タイトル」「ステージ」「クリア」の3つを用意すること
// 
// ■ シューティングゲーム部分のコードはできる限り簡潔にすること
// 
// ■ インプットマネジャクラスを追加で用意することが望ましい