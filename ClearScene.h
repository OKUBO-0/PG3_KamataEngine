#pragma once
#include "Scene.h"

class ClearScene : public Scene {
public:
    void Update(SceneManager* manager) override; // クリアシーンの更新
    void Draw() override; // クリアシーンの描画
};