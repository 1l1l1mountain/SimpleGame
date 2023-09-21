#include "SFML/Graphics.hpp"
#include <iostream>
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"
class Game
{
public:
	Game();
	~Game();
	
	const bool isOpen();
	
	void Update();
	void Render();
	
private:
	sf::RenderWindow* Window;
	sf::VideoMode VideoMode;
	sf::Event Event;
	void InitVariable();
	void InitWindow();
	void ExecEvent();
};
