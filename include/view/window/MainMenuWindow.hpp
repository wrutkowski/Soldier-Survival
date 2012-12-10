#ifndef MAIN_MENU_WINDOW_HPP_
#define MAIN_MENU_WINDOW_HPP_

#include <iostream>
#include <list>

#include <view/View.hpp>
#include <view/window/Window.hpp>
#include <view/SelectionView.hpp>
#include <util/Key.hpp>

namespace view {

class MainMenuWindow : public Window {
public:
	MainMenuWindow();
	void initUI();

	virtual void onArrowPressed(util::Key::Arrow arrow);
	virtual void onEnterPressed() ;
    virtual void onEscPressed();

	virtual Type getType();


private:
	SelectionViewModel* selectionViewModel;
	SelectionView* selectionView;

};

}
#endif
