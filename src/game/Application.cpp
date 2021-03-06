#include <game/Application.hpp>
#include <game/IEventHandler.hpp>

#include <SFML/Graphics.hpp>

namespace game {

Application* Application::instance;


Application* Application::create(int width, int height) {
	Application::instance = new Application(width, height);

	return Application::instance;
}

Application& Application::getInstance() {
	if (!Application::instance) {
		// TODO: rzuc wyjatek, ze nie zostala stworzona
	}

	return *Application::instance;
}

Application::Application(int width, int height)  {
	this->width = width;
	this->height = height;

    this->context = new Context();
	this->renderWindow = new sf::RenderWindow(sf::VideoMode(width, height, 32), "Soldier: Survival");
    
    this->deviceManager = new util::DeviceManager();
    this->deviceManager->setScreenWidth(width);
    this->deviceManager->setScreenHeight(height);
}

//void Application::initResourceManager() {
//	resourceManager = new ResourceManager.createFor(graphicEngine);
//}

sf::RenderWindow* Application::getRenderWinow() {
    return renderWindow;
}

void Application::setEventHandler(SFMLEventHandler* eventHandler) {
	eventHandler->setEventInput(renderWindow);

	this->eventHandler = eventHandler;
}

void Application::setGraphicEngine(graphic::SFMLAbstractGraphicEngine* graphicEngine) {
	graphicEngine->setRenderWindow(renderWindow);

	this->graphicEngine = graphicEngine;
}

void Application::setGameEngine(GameMasterEngine* gameEngine) {
    this->gameEngine = gameEngine;
}

GameMasterEngine* Application::getGameEngine() {
    return gameEngine;
}


void Application::processEvent() {
	this->eventHandler->processEvent();
}

Context* Application::getContext() {
    return context;
}

void Application::run() {
    running = true;
    
    gameEngine->run();
}

void Application::exit() {
    renderWindow->Close();
    
    std::exit(0);
}

void Application::display() {
    graphicEngine->display();
}

bool Application::isRunning() {
    return running;
}

util::DeviceManager* Application::getDeviceManager() {
    return deviceManager;
}

}