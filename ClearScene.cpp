#include "ClearScene.h"
#include "SceneManager.h"
#include "TitleScene.h"
#include <Novice.h>

void ClearScene::Update(SceneManager* manager) {
    // タイトルシーンに戻る
    if (Novice::IsPressKey(DIK_SPACE)) {
        manager->ChangeScene(new TitleScene());
    }
}

void ClearScene::Draw() {
    Novice::ScreenPrintf(100, 100, "Clear Scene: Press SPACE to Return to Title", 0xFFFFFF);
}