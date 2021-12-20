#include "stdafx.h"
#include "MainStage.h"

void MainStage::createMapBlock(int x, int y, int type, Vec2& pos)
{
	//auto cache = Director::getInstance()->getTextureCache();
	//mapspr->create("res/dungeon_tiles.png", Rect(0,0,(int)pos.x, (int)pos.y));
	//mapspr->setScale(4);
	//mapspr->setPosition((int)pos.x, (int)pos.y);
	//batch->addChild(mapspr);
	//setMapBlockData(x, y, type);
	//setMapBlockSprite(x, y, mapspr);
}

void MainStage::setMapBlockData(int x, int y, int type)
{
}

int MainStage::getMapBlockData(int x, int y)
{
	return 0;
}

void MainStage::setMapBlockSprite(int x, int y, Sprite * type)
{
}

Sprite * MainStage::getMapBlockSprite(int x, int y)
{
	return nullptr;
}

MainStage * MainStage::create()
{
	auto ret = new MainStage();
	if (ret && ret->init()) ret->autorelease();
	else CC_SAFE_DELETE(ret);
	return ret;
}

bool MainStage::init()
{
	if (!Scene::init()) return false;
	SpriteBatchNode* batch = SpriteBatchNode::create("frametexture.png");
	this->addChild(batch);
	Sprite* mapspr = Sprite::create("res/dungeon_tiles.png",Rect(0,0,50,50));
	mapspr->setScale(4);
	this->addChild(mapspr);
	//mapspr->setPosition((int)pos.x, (int)pos.y);
	batch->addChild(mapspr);
	int x = 1680 / 2;
	int y = 1050 / 2;
	Vec2 position;
	/*for (int i = 0; i < MAP_VERTICAL; i++) {
		for (int j = 0; j < MAP_HORIZON; j++) {
			position.x = x;
			position.y = y;
			createMapBlock(i, j, 1,position);
			x = x + 40;
		}
		y = y - 40;
		x = 1680 / 2;
	}*/

	return true;
}

void MainStage::onEnter()
{
	Scene::onEnter();
	//init();
}
