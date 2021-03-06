#include <game/Application.hpp>
#include <view/window/Window.hpp>
#include <view/View.hpp>
#include <list>

namespace view {

Window::Window(int xStart, int yStart, int xEnd, int yEnd) : View(xStart, yStart, xEnd, yEnd) {
    subWindow = NULL;
    game::Application::getInstance().getContext()->setActiveWindow(this);
}

Window::~Window() {
    delete subWindow;
}
    
bool Window::hasSubWindow() {
	if (subWindow != NULL)
		return true;
	else
		return false;
}

void Window::setSubWindow(Window* window) {
	subWindow = window;
}

Window* Window::getSubWindow() {
	return subWindow;
}

void Window::onEscPressed() {
}

void Window::onCharacterPressed(char c) {
    
}

void Window::onSpacePressed() {
    
}

void Window::addUnusedView(view::View* unusedView) {
    unusedViews.push_back(unusedView);
}

bool Window::hasUnusedViews() {
    if (unusedViews.size() > 0)
        return true;
    else
        return false;
}

void Window::clearUnusedViews() {
    unusedViews.clear();
}

std::vector<view::View*> Window::getUnusedViews() {
    return unusedViews;
}


}
