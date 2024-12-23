#pragma once

class SceneManager;

class Scene {
public:
    virtual ~Scene() = default;
    virtual void Update(SceneManager* manager) = 0; // シーンの更新
    virtual void Draw() = 0; // シーンの描画
};