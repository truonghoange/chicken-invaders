#ifndef MAP_OF_GAME_H
#define MAP_OF_GAME_H

#include "BaseObject.h"
#include "Commonfunc.h"
#define MAX_TILES 20

class TileMat: public BaseObject{
public:
	TileMat() {;}
	~TileMat() {;}
};
class GameMap 
{
public:
	GameMap() {;}
	~GameMap() {;}

	void LoadMap(char* name);
	void LoadTiles(SDL_Renderer* screen);
	void DrawMap(SDL_Renderer* screen);
private:
	MAP game_map_;
	TileMat tile_mat[MAX_TILES];
};




#endif	