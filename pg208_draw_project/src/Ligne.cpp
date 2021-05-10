#include "Ligne.h"





ligne::ligne(CImage *_img,float x_1, float y_1, float x_2,float y_2){

  img = _img;
  x1 =x_1;
  y1 =y_1;
  x2 = x_2;
  y2 =y_2;
}


void ligne::construction_ligne(){



 if(x2 < x1){
    float a;
    a = x1;
    x1 = x2;
    x2 = a;
    a = y1;
    y1 = y2;
    y2 = a;
  }
  float min=x1,max=x2;
  float div = (x2-x1)/(y2-y1);

  cout << x1 <<" "<<" "<<y1 << endl;
  cout << x2 <<" "<<" "<<y2 << endl;

  if((x2-x1) < (y2-y1)){
    min = y1;
    max = y2;
    div = (y2-y1)/(x2-x1);
  //  cout << y1 <<" "<<div<<" "<<y2 << endl;
    for(int i=0; i<max-min; i++){
        cout << i << " "<<x1+(i/div) << endl;
        CPixel *p = img->getPixel(x1+(i/div), i+min);
        p->RGB(255,255,255);
    }
  }else{


    for(int i=0; i<max-min; i++){
        cout << i << " "<<y1+(i/div) << endl;
        CPixel *p = img->getPixel(i+min, y1+(i/div));
        p->RGB(255,255,255);
    }
  }

}
