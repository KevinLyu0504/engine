#include <iostream>
#include "RigidBody.h"

int main() {
    // 创建一个刚体111111
    RigidBody body(Vector2D(0, 0), Vector2D(1, 0), Vector2D(0, -9.8), 1.0f);  // 初始位置(0,0)，速度(1,0)，加速度(0,-9.8)，质量1.0

    float deltaTime = 0.016f; // 假设每帧的时间步长为16毫秒 (60 FPS)

    // 简单模拟10秒
    for (int i = 0; i < 600; ++i) {
        body.update(deltaTime); // 更新物体状态
        std::cout << "Time: " << i * deltaTime << "s, Position: (" << body.position.x << ", " << body.position.y << ")\n";
    }

    return 0;
}
