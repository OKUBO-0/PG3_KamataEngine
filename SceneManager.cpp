#include "SceneManager.h"

SceneManager::SceneManager(Scene* initialScene) : currentScene(initialScene) {}

SceneManager::~SceneManager() {
    delete currentScene;
}

void SceneManager::Update() {
    if (currentScene) {
        currentScene->Update(this);
    }
}

void SceneManager::Draw() {
    if (currentScene) {
        currentScene->Draw();
    }
}

void SceneManager::ChangeScene(Scene* newScene) {
    delete currentScene; // 現在のシーンを削除
    currentScene = newScene; // 新しいシーンに切り替え
}