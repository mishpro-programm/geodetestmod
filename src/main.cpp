#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer){
	virtual bool init(){
		if(!MenuLayer::init()){
			return false;
		}
		auto menu = CCMenu::create();
		auto sprite = ButtonSprite::create("Reward");
		auto btn = CCMenuItemSpriteExtra::create(sprite, this, nullptr);
		auto winSize = CCDirector::get()->getWinSize();
		btn->setPosition(winSize.width * 0.8, winSize.height / 2);
		menu->addChild(btn);
		this->addChild(menu);
		return true;
	}
};
