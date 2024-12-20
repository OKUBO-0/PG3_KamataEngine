#include "IGameObject.h"

// コンストラクタ
GameObject::GameObject(float x, float y, float speed) : x(x), y(y), speed(speed) {}

// オブジェクトの描画
void GameObject::Draw() const {
	Novice::DrawBox(static_cast<int>(x) - 25, static_cast<int>(y) - 25, 50, 50, 0.0f, 0xFFFFFFFF, kFillModeSolid);
}