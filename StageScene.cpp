#include "StageScene.h"
#include "SceneManager.h"
#include "ClearScene.h"
#include <Novice.h>
#include <string>

StageScene::StageScene() : enemyHp(3), isEnemyAlive(true) {}

void StageScene::Update(SceneManager* manager) {
    if (isEnemyAlive) {
        // 敵への攻撃処理
        if (Novice::IsPressKey(DIK_SPACE)) {
            enemyHp--;
            if (enemyHp <= 0) {
                isEnemyAlive = false;
            }
        }
    }
    else {
        // 敵が倒れたらクリアシーンに切り替え
        manager->ChangeScene(new ClearScene());
    }
}

void StageScene::Draw() {
    if (isEnemyAlive) {
        Novice::ScreenPrintf(100, 100, "Stage Scene: Press SPACE to Attack", 0xFFFFFF);
        Novice::ScreenPrintf(100, 120, ("Enemy HP: " + std::to_string(enemyHp)).c_str(), 0xFF0000);
    }
    else {
        Novice::ScreenPrintf(100, 100, "Enemy Defeated!", 0x00FF00);
    }
}