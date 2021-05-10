#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

#include "./Format/CBitmap.h"
#include "Ligne.h"
#include "Rectangle.h"
#include "Cercle.h"







int main(int argc, char * argv[]) {
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;

    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = "Sortie.bmp";

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(200, 200);

   /*float x1 = 0,y1 = 10;
    float x2 = 199, y2 = 199;

    x1 = atof(argv[1]);
    y1 = atof(argv[2]);
    x2 = atof(argv[3]);
    y2 = atof(argv[4]);

    ligne *l;
    l = new ligne(img,x1,y1,x2,y2);
    l->construction_ligne();
*/





    float x,y,h,l;
    x = atof(argv[1]);
    y = atof(argv[2]);
    h = atof(argv[3]);
    l = atof(argv[4]);

//rectangle *r;
//r = new rectangle(img,x,y,h,l);
//r->creation_rectangle();

cercle *c;
c = new cercle(img,x,y,h,l);
c->creation_cercle();


    image->setImage( img );
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);

    ifstream fichier("/net/e/dalexandre/Desktop/pg208_draw_project/vec_samples/51.vec");  //On ouvre le fichier


     if(fichier)
     {
        //L'ouverture s'est bien passée, on peut donc lire

        string ligne; //Une variable pour stocker les lignes lues



        while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
        {

          if(ligne[0] != '#' && ligne[0]!=13){
            int a;
            a=ligne[0];

            //string forme;
    /*       int i=2;
            while(ligne[i]!=':')
            {
              cout << ligne[i] << endl;
            //  forme+=ligne[i];
              i++;
            }*/
                      cout << ligne << endl;
                       //cout << forme << endl;

         }
           //Et on l'affiche dans la console
           //Ou alors on fait quelque chose avec cette ligne
           //À vous de voir
        }
     }
     else
     {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
     }
    return 0;


}
