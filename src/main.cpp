#include <Geode/Geode.hpp>
#include <Geode/modify/DailyLevelPage.hpp>

using namespace geode::prelude;

class $modify(DailyLevelPage){
	bool init(GJTimedLevelType p0){
		if(!DailyLevelPage::init(p0)){
			return false;
		}
		auto menu = CCMenu::create();
		auto sprite = ButtonSprite::create("Reward");
		auto btn = CCMenuItemSpriteExtra::create(sprite, this, nullptr);
		auto winSize = CCDirector::get()->getWinSizeInPixels();
		btn->setPosition(winSize.width - 125, winSize.height / 2);
		menu->addChild(btn);
		this->addChild(menu);
		return true;
	}
};
