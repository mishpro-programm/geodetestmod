#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer){
	void onRobTop(CCObject*){
		auto scene = CCScene::create();
		auto layer = MyLayer::create();
		scene->addChild(layer);
		auto transition = CCTransitionFade::create(0.5f, scene);
		auto director = CCDirector::sharedDirector();
		director->replaceScene(transition);
	}
};
class MyLayer : CCLayer {
	bool init(){
		if(!CCLayer::init()) return false;
		auto menu = CCMenu::create();
		auto sprite = ButtonSprite::create("Button");
		auto btn = CCMenuItemSpriteExtra::create(sprite, this, nullptr);
		btn->setPosition(100.0f, 100.0f);
		menu->addChild(btn);
		this->addChild(menu);
		return true;
	}
}
