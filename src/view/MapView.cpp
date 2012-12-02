#include <view/View.hpp>
#include <view/MapView.hpp>
#include <game/object/LevelDescription.hpp>
#include <game/object/Character.hpp>

#include <util/Location.hpp>

namespace view {

void MapView::generateLevel(game::LevelDescription& levelDescription) {
	generateMapModel(levelDescription);
}

void MapView::moveCharacter(game::Character& ch, util::Location::Vector vector) {
	// getPositionOf() jest generyczna - mozna tam podac np. referencje do danego kafeleku rzeki
//	util::Location::Position position = mapModel.getPositionOf(ch);
//
//	mapModel.remove(position, ch);

	// tutaj sobie przeladujemy '+' w position, zeby zwrocil nam nowa pozycje przesunieta o dany wektor w stosunku
	// do starej
//	mapModel.put(ch, position + vector);
}


bool canMoveCharacter(util::Location::Vector vector) {
	// MapView gra role MapHandlera
	// sprawdzam w tablicy z mapa czy jest taka mozliwosc
}


void MapView::generateMapModel(game::LevelDescription& levelDescription) {
	// tworze drogi, rzeki, postacie, itd
	// wszystko w MapViewModel

	// x, y kafelek - tam umieszczam Enemy

	/*
	 Character dostaje referencje do tego widoku, zeby mogl sie poruszac
		kozystajac z metod canMoveCharacter() i moveCharacter()
	 */


//	mapModel.add(x, y, new Enemy(this))
}

}