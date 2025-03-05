#include "stdafx.h"
#include "mainobject.h"

mainobject::mainobject()
{
	frame_ = 0;
	x_pos_ = 0;
	y_pos_ = 0;
	x_val_ = 0;
	y_val_ = 0;
	width_frame_ = 0;
	height_frame_ = 0;
	status_ = -1;

}

mainobject::~mainobject(){

}
bool mainobject::Load_img(string path, SDL_Renderer* screen){
	bool ret = BaseObject::Load_img(path, screen);
	if(ret == true) {
		width_frame_ = rect_.w/ 8;
		height_frame_ = rect_.h;

	}


}
