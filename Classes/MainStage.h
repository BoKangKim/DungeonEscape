#ifndef __MAINSTAGE_H__
#define __MAINSTAGE_H__

#include "stdafx.h"

class MainStage : public Scene {
private:
	int blockData[MAP_VERTICAL][MAP_HORIZON];
	Sprite* blockSprite[MAP_VERTICAL][MAP_HORIZON];
	//SpriteBatchNode* batch;
	//Sprite* mapspr;

	void createMapBlock(int x, int y, int type,Vec2& pos);
	void setMapBlockData(int x, int y, int type);
	int getMapBlockData(int x, int y);
	void setMapBlockSprite(int x,int y, Sprite* type);
	Sprite* getMapBlockSprite(int x, int y);

public:
	static MainStage* create();
	virtual bool init() override;
	virtual void onEnter() override;
};

#endif // !__MAINSTAGE_H__
