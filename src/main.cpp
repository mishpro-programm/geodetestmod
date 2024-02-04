#include <Geode/Geode.hpp>
#include <Geode/modify/ChallengesPage.hpp>

using namespace geode::prelude;

class $modify(ChallengesPage){
	virtual bool init(){
		if(!ChallengesPage::init()){
			return false;
		}
		auto menu = CCMenu::create();
		auto sprite = ButtonSprite::create("Reward");
		auto btn = CCMenuItemSpriteExtra::create(sprite, this, nullptr);
		menu->addChild(btn);
		this->addChild(btn);
		return true;
	}
};
