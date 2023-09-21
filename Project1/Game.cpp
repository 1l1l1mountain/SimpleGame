#include "Game.h"
#include "SFML/Graphics.hpp"
#include <iostream>
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"
Game::Game()
{
	this->InitVariable();
	this->InitWindow();

}
Game::~Game()
{
}

const bool Game::isOpen()
{
	return this->Window->isOpen();
}

void Game::Update()
{
}

void Game::Render()
{

}

void Game::InitVariable()
{

	this->Window = nullptr;
	//nullptr : 주소값이 없는 상태 
}

void Game::InitWindow()
{
	this->VideoMode.width = 1024;
	this->VideoMode.height = 768;
	
	this->Window = new sf::RenderWindow(this->VideoMode,
		"Simple Game", sf::Style::Titlebar | sf::Style::Close);

}

void Game::ExecEvent()
{

    while (this->Window->isOpen())
    {

        while (this->Window->pollEvent(Event))
        {
            switch (Event.type)
            {
            case sf::Event::Closed:
                this->Window->close();
                break;
            case sf::Event::KeyPressed:
                if (Event.key.code == sf::Keyboard::Escape)
                {
                    Window->close();
                }
            }
        }

    }

}

