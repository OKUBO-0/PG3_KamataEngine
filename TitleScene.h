#pragma once
#include "Scene.h"

class TitleScene : public Scene {
public:
    void Update(SceneManager* manager) override; // タイトルシーンの更新
    void Draw() override; // タイトルシーンの描画
};