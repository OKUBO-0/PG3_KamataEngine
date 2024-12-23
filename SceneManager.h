#pragma once
#include "Scene.h"

class SceneManager {
private:
    Scene* currentScene; // 現在のシーン
public:
    SceneManager(Scene* initialScene); // 初期シーンを受け取る
    ~SceneManager();
    void Update(); // 現在のシーンを更新
    void Draw(); // 現在のシーンを描画
    void ChangeScene(Scene* newScene); // シーンを切り替える
};