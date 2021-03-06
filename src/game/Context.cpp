#include <view/window/Window.hpp>
#include <game/Context.hpp>

namespace game {

 
void Context::setActiveWindow(view::Window* window) {
	activeWindow = window;
}


view::Window* Context::getActiveWindow() {
	return activeWindow;
}

util::Resource* Context::getResourceManager() {
    return util::Resource::getResourceManagerFor(view::View::MAIN_MENU_WINDOW);
}


}
