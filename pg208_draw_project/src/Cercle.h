#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>

#include "./Image/CImage.h"
#include "Ligne.h"




#ifndef CERCLE_H_
#define CERCLE_H_

class cercle {


protected :

float x;
float y;
float r;
float l;
CImage *img;
ligne *l1;
ligne *l2;
ligne *l3;
ligne *l4;


public :

cercle(CImage *_img,float _x, float _y, float _r,float _l);

void creation_cercle();

};

#endif
