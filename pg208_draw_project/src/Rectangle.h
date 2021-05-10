#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>

#include "./Image/CImage.h"
#include "Ligne.h"




#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class rectangle {


protected :

float x;
float y;
float h;
float l;
CImage *img;
ligne *l1;
ligne *l2;
ligne *l3;
ligne *l4;


public :

rectangle(CImage *_img,float _x, float _y, float _h,float _l);

void creation_rectangle();

};

#endif
