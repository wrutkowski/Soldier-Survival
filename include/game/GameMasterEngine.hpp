#ifndef GAME_MASTER_ENGINE_HPP_
#define GAME_MASTER_ENGINE_HPP_

#include <graphic/SFMLAbstractGraphicEngine.hpp>
#include <game/object/LevelDescription.hpp>
#include <game/Context.hpp>

namespace game {

class GameMasterEngine {
public:
	void setGraphicEngine(graphic::SFMLAbstractGraphicEngine& graphicEngine);
	void run();
	void runLevelSelection();
	void runGamePlay(LevelDescription* levelDescription);
	void pauseGame();
	void resumeGame();
	void onLeftArrowPressed();
    void exitGame();
    
private:
	void returnToGame();

};

}

#endif














