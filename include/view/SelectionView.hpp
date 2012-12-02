#ifndef SELECTION_VIEW_HPP_
#define SELECTION_VIEW_HPP_

#include <view/View.hpp>
#include <view/model/SelectionViewModel.hpp>
#include <iostream>
#include <list>


namespace view {

class SelectionView : public View {
public:
    SelectionView() {}
	void selectNextElement();
	bool hasNextElement();
	SelectionViewModel::SelectableElement* getSelectedElement();
    void setSelectionModel(SelectionViewModel* selectionViewModel);
    virtual Type getType();
    SelectionViewModel* getModel();
    
    void addElement(SelectionViewModel::SelectableElement* element);
    
    

private:
	SelectionViewModel* selectionModel;
	int positionOfSelectedElement;
    
	
};

}
#endif