#include "game.hpp"
#include "ResourceHolder.hpp"

#include <SFML/Graphics.hpp>
#include <stdexcept>
#include <iostream>
#include <MapLoader.h>

/*int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "Resources");
	window.setFramerateLimit(20);

	// Try to load resources
	ResourceHolder<sf::Texture, Textures::ID> textures;
	try
	{
		textures.load(Textures::Landscape, "Media/Textures/Desert.png");
		textures.load(Textures::Airplane, "Media/Textures/Eagle.png");
	}
	catch (std::runtime_error& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
		return 1;
	}

	// Access resources
	sf::Sprite landscape(textures.get(Textures::Landscape));
	sf::Sprite airplane(textures.get(Textures::Airplane));
	airplane.setPosition(200.f, 200.f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed || event.type == sf::Event::Closed)
				return 0;
		}

		window.clear();
		window.draw(landscape);
		window.draw(airplane);
		window.display();
	}
}*/

int main()
{
	try
	{
		Game game;
		game.run();
	}
	catch(std::exception& e)
	{
		std::cout << "\nEXCEPTION: " << e.what() << std::endl;
	}
}

/*int main()
{
	sf::RenderWindow renderWindow(sf::VideoMode(800u, 600u), "TMX Loader");

	//create map loader and load map
	tmx::MapLoader ml("Media/maps/");
	ml.Load("desert.tmx");

	//-----------------------------------//

	while(renderWindow.isOpen())
	{
		//poll input
		sf::Event event;
		while(renderWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				renderWindow.close();
        }

		//draw
		renderWindow.clear();
		ml.Draw(renderWindow); 
		ml.Draw(renderWindow, tmx::MapLayer::Debug);//draw with debug information shown
		renderWindow.display();
	}

	return 0;
}*/