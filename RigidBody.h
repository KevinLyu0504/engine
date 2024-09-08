#pragma once
#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#include "Vector2D.h"

class RigidBody {
public:
    Vector2D position;
    Vector2D velocity;
    Vector2D acceleration;
    float mass;

    RigidBody(Vector2D pos, Vector2D vel, Vector2D acc, float m)
        : position(pos), velocity(vel), acceleration(acc), mass(m) {}

    // ���������λ�ú��ٶ�
    void update(float deltaTime) {
        velocity = velocity + acceleration * deltaTime;  // v = v0 + at
        position = position + velocity * deltaTime;      // x = x0 + vt
    }
};

#endif // RIGIDBODY_H
