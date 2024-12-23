#include "TitleScene.h"
#include "SceneManager.h"
#include "StageScene.h"
#include <Novice.h>

void TitleScene::Update(SceneManager* manager) {
    // スペースキーでステージシーンに切り替え
    if (Novice::IsPressKey(DIK_SPACE)) {
        manager->ChangeScene(new StageScene());
    }
}

void TitleScene::Draw() {
    Novice::ScreenPrintf(100, 100, "Title Scene: Press SPACE to Start", 0xFFFFFF);
}