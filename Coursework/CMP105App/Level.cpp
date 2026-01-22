#include "Level.h"

Level::Level(sf::RenderWindow& hwnd, Input& in) :
	BaseLevel(hwnd, in)
{
	// initialise game objects

	m_snake.setPosition({ 350.0f, 350.0f });
	m_snake.setRadius(20.0f);
	m_snake.setFillColor(sf::Color::Cyan);

	m_food.setRadius(10.0f);
	m_food.setFillColor(sf::Color::Red);
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

	float currentPosX = m_snake.getPosition().x;
	float currentPosY = m_snake.getPosition().y;

	if (m_snake.getPosition().x > m_window.getSize().x or m_snake.getPosition().x < 0)
	{
		m_snake.setPosition({350.0f, currentPosY});
	}

	if (m_snake.getPosition().y > m_window.getSize().y or m_snake.getPosition().y < 0)
	{
		m_snake.setPosition({currentPosX, 350.0f});
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

	spawnFood();

	endDraw();

}

void Level::spawnFood()
{
		static_cast<float>(rand() );
		static_cast<float>(rand() );

	m_window.draw(m_food);

}

