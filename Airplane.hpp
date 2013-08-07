#ifndef AIRPLANE_HPP
#define AIRPLANE_HPP

#include <SFML\Graphics.hpp>
#include "Entity.hpp"
#include "ResourceIdentifiers.hpp"

class Airplane : public Entity
{
public:
	enum Type
	{
		Eagle,
		Raptor,
	};

public:
	explicit					Airplane(Type type, const TextureHolder& textures);
	virtual void				drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;


private:
	Type						mType;
	sf::Sprite					mSprite;

};

#endif // AIRPLANE_HPP