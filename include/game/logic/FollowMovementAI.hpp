#ifndef FOLLOW_MOVEMENT_AI_HPP_
#define FOLLOW_MOVEMENT_AI_HPP_

#include <util/Location.hpp>

namespace game {
    
class FollowMovementAI {
public:
    util::Location::Vector* getDirectionsToCharacter(util::Location::Position characterPosition, 
        util::Location::Position startPosition);
};

}

#endif

