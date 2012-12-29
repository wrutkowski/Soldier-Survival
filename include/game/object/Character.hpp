#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <util/Location.hpp>

#include <game/object/MapObject.hpp>

namespace game {
    
class Character : public MapObject {
public:
    // trzymam pozycję na mapie, żeby przyspieszyć poruszanie się postaci
    // majac postac, wiem gdzie sie znajduje na mapie - nie musze jej ciagle przeszukiwac
    void setPosition(util::Location::Position pos);
    util::Location::Position getPosition();
    
protected:
    util::Location::Position position;
};
    
}

#endif