/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
/**
 * Required to modify the MenuLayer class
 */
#include <Geode/modify/CreatorLayer.hpp>

/**
 * Brings cocos2d and all Geode namespaces 
 * to the current scope.
 */
using namespace geode::prelude;

/**
 * `$modify` lets you extend and modify GD's 
 * classes; to hook a function in Geode, 
 * simply $modify the class and write a new 
 * function definition with the signature of 
 * the one you want to hook.
 */
class $modify(CreatorLayer) {
	/**
	 * MenuLayer::onMoreGames is a GD function, 
	 * so we hook it by simply writing its name 
	 * inside a $modified MenuLayer class.
	 * 
	 * Note that for all hooks, your signature 
	 * has to match exactly - `bool onMoreGames` 
	 * would not place a hook!
	 */
	void onDailyLevel() {
		FLAlertLayer::create(":skullemoji:", "bro can't wait for 2.21 :skullemoji:", ":skullemoji:")->show();
		
	} 
};
