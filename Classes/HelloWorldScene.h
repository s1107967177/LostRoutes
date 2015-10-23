#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "SystemHeader.h"
#include "HomeScene.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
	virtual void onExit();

    CREATE_FUNC(HelloWorld);

private:
	std::thread *_loadingAudioThread;
	void loadingAudio();
	void delayCall(float dt);
	void loadingTextureCallBack(cocos2d::Texture2D *texture);
	int m_nNumberOfLoaded;
};

#endif // __HELLOWORLD_SCENE_H__
