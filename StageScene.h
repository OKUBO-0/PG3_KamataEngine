#pragma once
#include "Scene.h"

class StageScene : public Scene {
private:
    int enemyHp; // 敵のHP
    bool isEnemyAlive; // 敵の生存フラグ

public:
    StageScene(); // コンストラクタ
    void Update(SceneManager* manager) override; // ステージシーンの更新
    void Draw() override; // ステージシーンの描画
};