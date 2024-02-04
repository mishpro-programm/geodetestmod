#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer){
	virtual bool init(){
		if(!MenuLayer::init()){
			return false;
		}
		auto menu = CCMenu::create();
		auto sprite = ButtonSprite::create("Test");
		auto btn = CCMenuItemSpriteExtra::create(sprite, this, nullptr);
		menu->addChild(btn);
		this->addChild(menu);
		return true;
	}
};
