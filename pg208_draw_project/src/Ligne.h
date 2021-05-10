#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>

#include "./Image/CImage.h"


#ifndef LIGNE_H_
#define LIGNE_H_


class ligne {

  protected :

  float x1;
  float y1;
  float x2;
  float y2;
  CImage *img;

public:

ligne(CImage *_img,float x_1, float y_1, float x_2,float y_2);
void construction_ligne();


};

#endif /*LIGNE_H_*/
