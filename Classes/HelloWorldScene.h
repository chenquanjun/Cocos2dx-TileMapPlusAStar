#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "MapInfo.h"
#include "WalkTo.h"
#include "TestSprite.h"
#include "EaseWalkTo.h"

class HelloWorld : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
private:
    //触摸事件
    void setTouchEvent();
    
    //精灵自动寻路结束
    void actionDone(Node *pSender);
    
    //地图自动调整
    void adjustMapLayer(bool isAnim);
    
    //创建测试精灵工厂
    TestSprite* createTestSpriteWithFormat(std::string fileName);
    
private:
    
    MapInfo *_mapInfo;
    
    Layer *_mapLayer;
    
    bool _bIsMove;
};

#endif // __HELLOWORLD_SCENE_H__
