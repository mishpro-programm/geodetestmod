#include <Geode/Geode.h>
#include <Geode/modify/MenuLayer.h>

using namespace geode::prelude;

class $modify(MenuLayer){
	void onMoreGames(CCObject*){
		FLAlertLayer::create("More Games", "Bro just type in Play Market \"Geometry Dash\"", "OK")->show();
	}
}
