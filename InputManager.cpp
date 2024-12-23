#include "InputManager.h"

InputManager::InputManager() {
    std::memset(keys, 0, 256);
    std::memset(preKeys, 0, 256);
}

void InputManager::Update() {
    std::memcpy(preKeys, keys, 256);
    Novice::GetHitKeyStateAll(keys);
}

bool InputManager::IsPressKey(int key) const {
    return preKeys[key] == 0 && keys[key] != 0;
}