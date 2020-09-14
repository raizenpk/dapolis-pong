#ifndef DAPOLIS_PONG_SCENE_H
#define DAPOLIS_PONG_SCENE_H

#include <Ess3D/2d/Scene2D.h>
#include "../models/Ball.h"

class Scene : public Ess3D::Scene2D {
  public:
    Scene();

    virtual ~Scene();

    void render(Ess3D::Renderer2D *renderer) override;
    void update(float deltaTime) override;

    void interpolate(float timestepAccumulatorRatio) override;
    void resetInterpolation() override;

    Ball* getBall();

  protected:
    Ball* _ball{};

};

#endif
