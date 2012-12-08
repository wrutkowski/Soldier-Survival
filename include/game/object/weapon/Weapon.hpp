#ifndef WEAPON_HPP_
#define WEAPON_HPP_

namespace game {
    
class Weapon {
public:
    enum Type {
        KNIFE
    };
    
    Weapon(Type type);
    
    Type getType();

private:
    Type type;
};
    
}

#endif