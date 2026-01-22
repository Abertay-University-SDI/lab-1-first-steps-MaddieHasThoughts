#include "Level.h"

Level::Level(sf::RenderWindow& hwnd, Input& in) :
	BaseLevel(hwnd, in)
{
	// initialise game objects

	m_snake.setPosition({ 50.0f, 50.0f });
	m_snake.setRadius(20.0f);
	m_snake.setFillColor(sf::Color::Magenta);

}

// handle user input
void Level::handleInput(float dt)
{
	if (m_input.isLeftMousePressed())
	{
		std::cout << "left mouse pressed" << std::endl;
	}

}

// Update game objects
void Level::update(float dt)
{
}

// Render level
void Level::render()
{
	beginDraw();
	m_window.draw(m_snake);
	endDraw();
}

