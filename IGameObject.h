#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <Novice.h>

// ゲームオブジェクトを表すクラス
class GameObject {
public:
	float x, y;   // 位置
	float speed;  // 移動速度

	GameObject(float x, float y, float speed);
	void Draw() const; // オブジェクトの描画
};

#endif // GAMEOBJECT_H