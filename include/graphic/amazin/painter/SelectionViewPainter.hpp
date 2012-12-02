#ifndef SELECTION_VIEW_PAINTER_HPP_
#define SELECTION_VIEW_PAINTER_HPP_

#include <view/View.hpp>
#include <view/model/SelectionViewModel.hpp>
#include <graphic/painter/SFMLAbstractViewPainter.hpp>
#include <map>



namespace graphic {
namespace amazin {

class SelectionViewPainter : public SFMLAbstractViewPainter {
public:
	SelectionViewPainter(view::SelectionViewModel* model, view::View::Type parentViewType);
    
    void initSelectableSprite(view::SelectionViewModel::SelectableElement& selectableElement);
    void updateSelectableSprite(view::SelectionViewModel::SelectableElement* selectableElement); 

	virtual void init();
	virtual void update();
    
    virtual std::vector<sf::Sprite*> getSprites();

private:
	view::SelectionViewModel* selectionModel;
    std::vector<view::SelectionViewModel::SelectableElement*> selectableElements;
    
    std::map<view::SelectionViewModel::SelectableElement*, sf::Sprite*> selectableSpritesMap;

};

}
}


#endif