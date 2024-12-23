#pragma once
#include <Novice.h>
#include <cstring>

class InputManager {
private:
    char keys[256]; // 現在のキー状態
    char preKeys[256]; // 前フレームのキー状態

public:
    InputManager(); // コンストラクタ
    void Update(); // 入力状態の更新
    bool IsPressKey(int key) const; // 指定キーが押されたか判定
};