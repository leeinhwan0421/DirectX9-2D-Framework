#pragma once

class GameScene : public Scene
{
public:

	GameScene(int _stage);
	virtual void OnActiveScene() override;
	virtual void OnUpdate(float _deltaTime) override;
	virtual void OnFixedUpdate(float _fixedDeltaTime) override;
	virtual void OnRender() override;
	virtual void OnUiRender() override;
};
