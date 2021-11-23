#include "TXLib.h"
/*
x, y = положение тела
tol = размеры толщины линий у Boy
rot = толщина рта  Kolobok
nac = наклон палочки у Snowman
rad = радиус глаз у Kolobok
ras = размер клюва
stick = размер палки у снеговика
*/

void Bird    (long xb, long yb, int    ras,  double sizeb              );
void Boy     (long x,  long y,  double size, double tol,     int mah     );
void Snowman (long xs, long ys, int    nac,  double stick,   double sizes);
void Kolobok (long xk, long yk, int    rot,  int    rad,   double sizek);

int main ()
    {
    txCreateWindow (1600,900);
    txSetFillColor (TX_WHITE);
    txRectangle    (0, 0, 1600, 900);

    /*
    Boy     ( 800, 300,   1,  5);
    Bird    (1000, 500, -10,  1);
    Snowman ( 400, 500,  10,  3, 2  );
    Kolobok ( 200, 400,   5, 10, 1.5);
    */

//-------------------Персонаж Boy
    /*
    int x = 500;
    int y = 500;
    double size = 1;
    int mah = 0;
    for(double z = 0; z<=20; z++)
        {
        Boy(x, y, size, 5, mah);

        //x = x + 25*z;
        //size = size + 1,5*z;
        if (z <= 7)
        {
         for(double a = 0; a<=7; a++)
         {
          Boy(x, y, size, 5, mah);
          mah = mah - a;
          txSleep(100);

          txSetFillColor (TX_WHITE);
          txClear();
         }
        }

        mah = mah + 10;

        txSleep(100);

        txSetFillColor (TX_WHITE);
        txClear();

        }
       */

//-------------------Персонаж Snowman
    /*

    int nac = 0;
    double sizes = 1;
    for(double zs = 0; zs<=10; zs++)
        {
        Snowman(400, 500, nac, 3, sizes);

        if (zs <= 5)
        {
         Snowman(400, 500, nac, 3, sizes);
         for(double f = 0; f<=5; f++)
         {
         nac = nac + f;
         txSleep(10);

         txSetFillColor (TX_WHITE);
         txClear();
         }
        }
        else
        {
        nac = nac - zs;
        //sizes = sizes + 1,5*zs;

        txSleep(10);

        txSetFillColor (TX_WHITE);
        txClear();
        }

        }

       */
//-------------------Персонаж Bird
    /*
    int ras = 0;
    double sizeb = 1;
    int xb = 1000;
    int yb = 500;
    for(double zb = 0; zb<=10; zb++)
        {
        Bird(xb, yb, ras, size);

        //ras = ras + zb;
        //sizeb = sizeb + 1.5*zb;
        //xb = xb + 10*zb;
        //yb = yb + 10*zb;

        txSleep(100);

        txSetFillColor (TX_WHITE);
        txClear();

        }
    */

//-------------------Персонаж Kolobok
    /*
    int rad = 10;
    double sizek = 1.5;
    int xk = 1000;
    int yk = 500;
    int rot = 5;
    for(double zk = 0; zk<=10; zk++)
        {
        Kolobok(1000, 500, rot, rad, 1.5);

        rot = rot + zk;
        rad = rad + zk;
        //size = sizek + 1,5*zk;
        //xk = xk + 10*zk;
        //yk = yk+ 10*zk;

        txSleep(100);

        txSetFillColor (TX_WHITE);
        txClear();

        }
        */
    return 0;
    }

void Boy (long x, long y, double size, double tol, int mah)
    {
    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_BLACK);
    POINT body[4]   {{x - 100*size, y           }, {x + 100*size, y},
                     {x,            y + 190*size}, {x - 100*size, y}};
    txPolygon       (body, 4);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(255, 206, 241));
    txCircle       (x, y - 40*size, 40*size);

    txSetColor (TX_BLACK, tol);
    txLine     (x - 100*size, y, x - 100*size + mah*size, y + 200*size + mah*size );

    txSetColor (TX_BLACK, tol);
    txLine     (x + 100*size, y, x + 100*size - mah*size, y + 200*size + mah*size );

    txSetColor (TX_BLACK, tol);
    txLine     (x, y + 190*size, x - 50*size, y +  290*size);

    txSetColor (TX_BLACK, tol);
    txLine     (x, y + 190*size, x + 50*size, y + 290*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_GRAY);
    txRectangle    (x - 10*size, y - 90*size, x + 40*size, y - 85*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle    (x - 20*size, y - 85*size, x + 20*size, y - 100*size);

    txSetColor         (TX_BLACK);
    txSetFillColor     (TX_RED);
    POINT babochka [7] {{x          , y + 20*size}, {x + 15*size, y + 10*size},
                        {x + 15*size, y + 35*size}, {x          , y + 30*size},
                        {x - 15*size, y + 35*size}, {x - 15*size, y + 10*size},
                        {x          , y + 20*size}};
    txPolygon (babochka, 7);
    }

//-----------------------------------------------------------------------------

void Bird (long xb, long yb, int ras, double sizeb)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT body [4] {{xb, yb           },  {xb + 100*sizeb, xb - 50*sizeb},
                    {xb, yb + 100*sizeb}, {xb           , xb     }};
    txPolygon      (body, 4);

    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_BROWN);
    POINT krilo1 [4] {{xb, yb           },  {xb - 100*sizeb,  yb -  50*sizeb},
                      {xb, yb + 100*sizeb}, {xb           ,  yb      }};
    txPolygon        (krilo1, 4);
    txPolygon        (krilo1, 4);

    txSetColor       (TX_BLACK);
    txSetFillColor   (RGB(82, 92, 65));
    POINT krilo2 [4] {{xb - 20*sizeb, yb           },  {xb + 20*sizeb, yb           },
                      {xb - 40*sizeb, yb + 100*sizeb}, {xb + 40*sizeb, y + 100*sizeb}};
    txPolygon        (krilo2, 4);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(82, 92, 65));
    txCircle       (xb, yb - 25*sizeb, 25*sizeb);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xb + 15*sizeb, yb - 25*sizeb, 5*sizeb);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    POINT kluv [6] {{xb - 10*sizeb, yb - 50*sizeb}, {xb -  5*sizeb - ras, yb - 75*sizeb},
                    {xb           , yb - 55*sizeb}, {xb +  5*sizeb + ras, yb - 75*sizeb},
                    {xb + 10*sizeb, yb - 50*sizeb}, {xb - 10*sizeb,       yb - 50*sizeb}};
    txPolygon      (kluv, 6);
    }

//----------------------------------------------------------
void Snowman(long xs, long ys, int nac,  double stick, double sizes)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xs , ys + 100*size, 100*sizes);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xs, ys - 50*size, 50*sizes);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xs + 75*size, ys + 25*size, 25*sizes);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xs - 75*sizes, ys + 25*sizes, 25*sizes);

    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_ORANGE);
    POINT carrot [4] {{xs, ys - 60*sizes}, {xs + 30*size, ys - 50*sizes},
                      {xs, ys - 40*sizes}, {xs          , ys - 60*sizes}};
    txPolygon        (carrot, 4);

    txSetColor   (TX_BROWN, stick);
    txLine       (xs + 75*sizes + nac, ys - 100*sizes,
                  xs + 75*sizes - nac, ys + 200*sizes);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(78, 102, 175));
    txCircle       (xs + 75*sizes + nac, ys - 98*sizes, 5*sizes);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(78, 102, 190));
    txCircle       (xs + 74*sizes + nac, ys - 99*sizes, 5*sizes);
    txCircle       (xs + 75*sizes + nac, ys - 98*sizes, 5*sizes);
    txCircle       (xs + 76*sizes + nac, ys - 99*sizes, 5*sizes);

    txSetColor       (TX_BLACK);
    txSetFillColor   (RGB(106, 106, 130));
    POINT bucket [6] {{xs - 50*sizes, ys -  90*sizes}, {xs - 40*sizes, ys - 180*sizes},
                      {xs + 40*sizes, ys - 180*sizes}, {xs + 50*sizes, ys -  90*sizes},
                      {xs + 50*sizes, ys -  90*sizes}, {xs - 50*sizes, ys -  90*sizes}};
    txPolygon        (bucket, 6);
    }

//#---------------------------------------------
void Kolobok (long xk, long yk, int    rot,  int    rad,   double sizek)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle       (xk, yk, 100*sizek);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT nos [4]  {{xk          ,  yk           }, {xk - 20*sizek, y + 20*sizek},
                    {xk + 20*sizek, yk + 20*sizek}, {xk          ,  yk          }};
    txPolygon      (nos, 4);


    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xk - 25*sizek, yk - 25*sizek, rad*sizek);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xk + 25*sizek, yk - 25*sizek, rad*sizek);

    txSetColor (TX_BLACK, rot);
    txLine     (xk - 60*sizek, yk + 70*sizek, xk - 50*sizek, yk + 70*sizek);
    txLine     (xk - 50*sizek, yk + 70*sizek, xk - 40*sizek, yk + 60*sizek);
    txLine     (xk - 40*sizek, yk + 60*sizek, xk - 30*sizek, yk + 60*sizek);
    txLine     (xk - 30*sizek, yk + 60*sizek, xk - 20*sizek, yk + 70*sizek);
    txLine     (xk - 20*sizek, yk + 70*sizek, xk - 10*sizek, yk + 70*sizek);
    txLine     (xk - 10*sizek, yk + 70*sizek, xk          ,  yk + 60*sizek);
    txLine     (xk          ,  yk + 60*sizek, xk + 10*sizek, yk + 70*sizek);
    txLine     (xk + 10*sizek, yk + 70*sizek, xk + 20*sizek, yk + 70*sizek);
    txLine     (xk + 20*sizek, yk + 70*sizek, xk + 30*sizek, yk + 60*sizek);
    txLine     (xk + 30*sizek, yk + 60*sizek, xk + 40*sizek, yk + 60*sizek);
    txLine     (xk + 40*sizek, yk + 60*sizek, xk + 50*sizek, yk + 70*sizek);
    txLine     (xk + 50*sizek, yk + 70*sizek, xk + 60*sizek, yk + 70*sizek);

    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_BROWN);
    POINT sanosa [5] {{xk - 100*sizek, yk           }, {xk - 110*sizek, yk - 30*sizek},
                      {xk - 110*sizek, yk - 30*sizek}, {xk - 115*sizek, yk - 20*sizek},
                      {xk - 115*sizek, yk - 20*sizek}};
    txPolygon        (sanosa, 5);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(61, 166, 201));
    POINT GG [5]   {{xk - 15*sizek, yk - 15*sizek}, {xk - 10*size, yk - 10*sizek},
                    {xk - 13*sizek, yk -  7*sizek}, {xk - 18*size, yk - 12*sizek},
                    {xk - 15*sizek, yk - 15*sizek}};
    txPolygon      (GG, 5);
    }

//#====================================================
