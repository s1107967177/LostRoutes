#ifndef __SETTING_SCENE_H__
#define __SETTING_SCENE_H__

#include "cocos2d.h"
#include "SystemHeader.h"
#include "MyUtility.h"
#include "BaseLayer.h"

class SettingLayer : public BaseLayer {
public:
	static cocos2d::Scene *createScene();
	
	virtual bool init();

	void menuSoundToggleCallback(cocos2d::Ref *pSender);
	void menuMusicToggleCallback(cocos2d::Ref *pSender);

	CREATE_FUNC(SettingLayer);
};

#endif // __SETTING_SCENE_H__