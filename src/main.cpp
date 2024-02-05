#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer){
	void onMoreGames(CCObject*){
		FLAlertLayer::create("Fact:", "Mat sdoxla ot geroina papa ushel da i huy s nim", "zhiza")->show();
	}
};
