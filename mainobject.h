#ifndef MAIN_OBJECT_H_
#define MAIN_OBJECT_H_
#include "Commonfunc.h"
#include "BaseObject.h"

class mainobject : public BaseObject
{
public:
	mainobject();
	~mainobject();

	enum WalkType {
		Walk_Right = 0,
		Walk_Left = 1,

	};
	bool Load_img(string path, SDL_Renderer* screen);
	void Show(SDL_Renderer* des);
	void HandelInputAction(SDL_Event events, SDL_Renderer* screen);

private:
	float x_val_, y_val_;

	float x_pos_, y_pos_;
	int width_frame_;
	int height_frame_;
	SDL_Rect frame_clip_[8];
	Input input_type_;
	int frame_;
	int status_;


};









#endif