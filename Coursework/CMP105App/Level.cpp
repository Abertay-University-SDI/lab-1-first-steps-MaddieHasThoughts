#include "Level.h"

Level::Level(sf::RenderWindow& hwnd, Input& in) :
	BaseLevel(hwnd, in)
{
	// initialise game objects

	m_snake.setPosition({ 350.0f, 350.0f });
	m_snake.setRadius(20.0f);
	m_snake.setFillColor(sf::Color::Cyan);

}

// handle user input
void Level::handleInput(float dt)
{
	if (m_input.isLeftMousePressed())
	{
		std::cout << "left mouse pressed" << std::endl;
	}

	if (m_input.isKeyDown(sf::Keyboard::Scancode::D))
	{
		m_snake.move({ m_speed * dt, 0.f });

	}

	if (m_input.isKeyDown(sf::Keyboard::Scancode::A))
	{
		
		m_snake.move({ -m_speed * dt, 0.f });

	}

	if (m_input.isKeyDown(sf::Keyboard::Scancode::W))
	{

		m_snake.move({ 0.f, -m_speed * dt });

	}

	if (m_input.isKeyDown(sf::Keyboard::Scancode::S))
	{

		m_snake.move({ 0.f, m_speed * dt });

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

