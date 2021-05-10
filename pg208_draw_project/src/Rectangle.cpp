#include "Rectangle.h"
#include "Ligne.h"






rectangle::rectangle(CImage *_img,float _x, float _y, float _h,float _l){

  img = _img;
  x =_x;
  y =_y;
  h = _h;
  l =_l;

}

void rectangle::creation_rectangle(){

  l1 = new ligne(img,x,y,x+l,y);
  l1->construction_ligne();

  l2 = new ligne(img,x,y,x,y+h);
  l2->construction_ligne();

  l3 = new ligne(img,x,y+h,x+l,y+h);
  l3->construction_ligne();

  l4 = new ligne(img,x+l,y,x+l,y+h);
  l4->construction_ligne();



}
