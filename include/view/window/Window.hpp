#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include <view/View.hpp>
#include <util/DeviceManager.hpp>
#include <vector>
#include <iostream>
#include <util/Key.hpp>

namespace view {

class Window : public view::View {
public:
    Window(int xStart, int yStart, int xEnd, int yEnd);
    

	bool hasSubWindow();
	void setSubWindow(Window* window);
    Window* getSubWindow();
    
	virtual Type getType() = 0;
	virtual void onArrowPressed(util::Key::Arrow arrow) = 0;
	virtual void onEnterPressed() = 0;
    virtual void onEscPressed();
    
    

protected:
//	WindowModel model;
	Window* subWindow;

};

}
#endif
