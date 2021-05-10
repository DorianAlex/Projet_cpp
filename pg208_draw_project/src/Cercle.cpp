#include "Rectangle.h"
#include "Ligne.h"
#include "Cercle.h"
#include <math.h>






cercle::cercle(CImage *_img,float _x, float _y, float _r,float _l){

  img = _img;
  x =_x;
  y =_y;
  r = _r;
  l =_l;


}

void cercle::creation_cercle(){




     for(int i=0; i<360; i++){
       if((ceil(r*cos(i))+x)<0 || (ceil(r*sin(i))+y)<0)
       {

       }
       else{
          CPixel *p = img->getPixel(abs(ceil(r*cos(i))+x),abs(ceil(r*sin(i))+y));
         p->RGB(255,255,255);
       }
     }




  }
