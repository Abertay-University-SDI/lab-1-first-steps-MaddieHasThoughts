#pragma once

#include "Framework/BaseLevel.h"

class Level : BaseLevel{
public:
	Level(sf::RenderWindow& window, Input& input);
	~Level() override = default;

	void handleInput(float dt) override;
	void update(float dt);
	void render();

private:

	sf::CircleShape m_snake;

	// Default functions for rendering to the screen.

	// Default variables for level class.
	
};

