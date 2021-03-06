//
//  TitleScene.hpp
//  TestGame-mobile
//
//  Created by 戸軽隆二 on 2020/02/23.
//

#ifndef __TITLE_SCENE_H__
#define __TITLE_SCENE_H__

#include "cocos2d.h"

class TitleScene : cocos2d::Scene{
    public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(TitleScene);

};

#endif /* TitleScene_hpp */
