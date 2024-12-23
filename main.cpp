#include <Novice.h>
#include <GameManager.h>

const char kWindowTitle[] = "LE2C_04_オオクボ_タク";

// Windowsアプリでのmain関数
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	//GameManagerクラスのインスタンスを作成する
	GameManager* gameManager = new GameManager();

	//GameManagerクラスからメンバ関数Runを呼び出す
	gameManager->Run();

	// ライブラリの終了
	Novice::Finalize();

	//GameManagerを解放
	delete gameManager;

	return 0;
}