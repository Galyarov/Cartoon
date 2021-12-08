#include "TXLib.h"
/*
x, y = geolocation actors
tol = width line Boy
rot = how big mooth Kolobok
nac = stick Snowman
rad = how big eyes Kolobok
ras = how big Beak
stick = width stick Snowman
*/

void Bird    (long xb, long yb, int    ras,   double sizeb              );
void Boy     (long x,  long y,  double size,  double tol,   int mah     );
void Snowman (long xs, long ys, int    nac,   double stick, double sizes);
void Kolobok (long xk, long yk, int    rot,   int    rad,   double sizek);

int main ()
    {
    txCreateWindow (1600,900);
    txSetFillColor (TX_WHITE);
    txRectangle    (0, 0, 1600, 900);

    /*
    First and working coordination
    Boy     ( 800, 300,   1,  5);
    Bird    (1000, 500, -10,  1);
    Snowman ( 400, 500,  10,  3, 2  );
    Kolobok ( 200, 400,   5, 10, 1.5);
    */

//-------------------Actor Boy

    int x = 500;
    int y = 500;
    double size = 1;
    int mah = 0;
    for(int z = 0; z<=20; z++)
        {
         Boy(x, y, size, 5, mah);
         if (z <= 7)
          {
           for(int a = 0; a<=5; a++)//Raises hands
            {
             Boy(x, y, size, 5, mah);
             mah = mah - a;
             txSleep(100);
             txSetFillColor (TX_WHITE);
             txClear();
            }
          }
         if (z >= 8)
          {
           for(int a1 = 0; a1<=5; a1++)//lowers his hands
            {
             Boy(x, y, size, 5, mah);
             mah = mah + 1;
             txSleep(100);
             txSetFillColor (TX_WHITE);
             txClear();
             if (z == 20)
              {
               for(int a2 = 0; a2<=15; a2++)//Is leaving
                {
                 Boy(x, y, size, 5, mah);
                 x = x + 2*a2;
                 //size = size + 1,5*a2;
                 txSleep(100);
                 txSetFillColor (TX_WHITE);
                 txClear();
                }
              }
            }
          }
        }


//-------------------Actor Snowman

    int nac = 0;
    double sizes = 1;
    for(int zs = 0; zs<=10; zs++)
        {
         Snowman(800, 500, nac, 3, sizes);
         if (zs <= 5)
          {
           Snowman(800, 500, nac, 3, sizes);
           for(int f = 0; f<=5; f++)
            {
             nac = nac + f;
            }
          }
         else
          {
           nac = nac - zs;
          }
         txSleep(100);
         txSetFillColor (TX_WHITE);
         txClear();
         //sizes = sizes + 1,5*zs;
        }


//-------------------Actor Bird

    int ras = 0;
    double sizeb = 1;
    int xb = 1000;
    int yb = 500;
    for(double zb = 0; zb<=10; zb++)
        {
         Bird(xb, yb, ras, sizeb);
          if (zb <= 5)
          {
           for(double zb1 = 0; zb1 <=2; zb1++)
            {
             Bird(xb, yb, ras, sizeb);
             ras = ras + zb;
             txSleep(100);
             txSetFillColor (TX_WHITE);
             txClear();
            }
           }
          ras = ras - zb;
          //sizeb = sizeb + 1.5*zb;
          //xb = xb + 10*zb;
          yb = yb - 2*zb;
          txSleep(100);
          txSetFillColor (TX_WHITE);
          txClear();
         }

//-------------------Actor Kolobok
    /*
    int rad = 10;
    double sizek = 1.5;
    int xk = 1000;
    int yk = 500;
    int rot = 5;
    for(double zk = 0; zk<=10; zk++)
        {
         Kolobok(1000, 500, rot, rad, 1.5);
         if (zk <= 5)
          {
           for(int zk1 = 0; zk1 <= 3; zk1++)
            {
             Kolobok(1000, 500, rot, rad, 1.5);
             rot = rot + zk1;
             rad = rad + zk1;

             txSleep(100);

             txSetFillColor (TX_WHITE);
             txClear();
            }
         }
         if (zk >= 5)
          {
           for(int zk2 = 0; zk2 <= 3; zk2++)
            {
             Kolobok(1000, 500, rot, rad, 1.5);
             rot = rot - zk2;
             rad = rad - zk2;
             if (zk >= 9)
              {
               for(int zk3 = 0; zk3 <= 10; zk3++)
                {
                 Kolobok(1000, 500, rot, rad, 1.5);
                 xk = xk + 10*zk3;
                 txSleep(100);

                 txSetFillColor (TX_WHITE);
                 txClear();
                }
              }

             txSleep(100);

             txSetFillColor (TX_WHITE);
             txClear();
            }
          }

         }
         //size = sizek + 1,5*zk;
         //xk = xk + 10*zk;
         //yk = yk+ 10*zk;

         txSleep(100);

         txSetFillColor (TX_WHITE);
         txClear();
    */

    return 0;
    }

void Boy (long x, long y, double size, double tol, int mah)
    {
    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_BLACK);
    POINT body[4]   {{ROUND(x - 100*size), ROUND(y)           }, {ROUND(x + 100*size), ROUND(y)},
                     {ROUND(x),            ROUND(y + 190*size)}, {ROUND(x - 100*size), ROUND(y)}};
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
    POINT babochka [7] {{ROUND(x)          , ROUND(y + 20*size)}, {ROUND(x + 15*size), ROUND(y + 10*size)},
                        {ROUND(x + 15*size), ROUND(y + 35*size)}, {ROUND(x)          , ROUND(y + 30*size)},
                        {ROUND(x - 15*size), ROUND(y + 35*size)}, {ROUND(x - 15*size), ROUND(y + 10*size)},
                        {ROUND(x)          , ROUND(y + 20*size)}};
    txPolygon (babochka, 7);
    }

//-----------------------------------------------------------------------------

void Bird (long xb, long yb, int ras, double sizeb)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT body [4] {{ROUND(xb), ROUND(yb)            }, {ROUND(xb + 100*sizeb), ROUND(yb - 50*sizeb)},
                    {ROUND(xb), ROUND(yb + 100*sizeb)}, {ROUND(xb)            , ROUND(yb)           }};
    txPolygon      (body, 4);

    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_BROWN);
    POINT krilo1 [4] {{ROUND(xb), ROUND(yb)            }, {ROUND(xb - 100*sizeb),  ROUND(yb -  50*sizeb)},
                      {ROUND(xb), ROUND(yb + 100*sizeb)}, {ROUND(xb)            ,  ROUND(yb)            }};
    txPolygon        (krilo1, 4);

    txSetColor       (TX_BLACK);
    txSetFillColor   (RGB(82, 92, 65));
    POINT krilo2 [4] {{ROUND(xb - 20*sizeb), ROUND(yb)            }, {ROUND(xb + 20*sizeb), ROUND(yb)            },
                      {ROUND(xb - 40*sizeb), ROUND(yb + 100*sizeb)}, {ROUND(xb + 40*sizeb), ROUND(yb + 100*sizeb)}};
    txPolygon        (krilo2, 4);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(82, 92, 65));
    txCircle       (xb, yb - 25*sizeb, 25*sizeb);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xb + 15*sizeb, yb - 25*sizeb, 5*sizeb);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    POINT kluv [6] {{ROUND(xb - 10*sizeb), ROUND(yb - 50*sizeb)}, {ROUND(xb -  5*sizeb - ras), ROUND(yb - 75*sizeb)},
                    {ROUND(xb)           , ROUND(yb - 55*sizeb)}, {ROUND(xb +  5*sizeb + ras), ROUND(yb - 75*sizeb)},
                    {ROUND(xb + 10*sizeb), ROUND(yb - 50*sizeb)}, {ROUND(xb - 10*sizeb),       ROUND(yb - 50*sizeb)}};
    txPolygon      (kluv, 6);
    }

//----------------------------------------------------------
void Snowman(long xs, long ys, int nac,  double stick, double sizes)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xs , ys + 100*sizes, 100*sizes);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xs, ys - 50*sizes, 50*sizes);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xs + 75*sizes, ys + 25*sizes, 25*sizes);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xs - 75*sizes, ys + 25*sizes, 25*sizes);

    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_ORANGE);
    POINT carrot [4] {{ROUND(xs), ROUND(ys - 60*sizes)}, {ROUND(xs + 30*sizes), ROUND(ys - 50*sizes)},
                      {ROUND(xs), ROUND(ys - 40*sizes)}, {ROUND(xs)           , ROUND(ys - 60*sizes)}};
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
    POINT bucket [6] {{ROUND(xs - 50*sizes), ROUND(ys -  90*sizes)}, {ROUND(xs - 40*sizes), ROUND(ys - 180*sizes)},
                      {ROUND(xs + 40*sizes), ROUND(ys - 180*sizes)}, {ROUND(xs + 50*sizes), ROUND(ys -  90*sizes)},
                      {ROUND(xs + 50*sizes), ROUND(ys -  90*sizes)}, {ROUND(xs - 50*sizes), ROUND(ys -  90*sizes)}};
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
    POINT nos [4]  {{ROUND(xk)           , ROUND(yk)           }, {ROUND(xk - 20*sizek), ROUND(yk + 20*sizek)},
                    {ROUND(xk + 20*sizek), ROUND(yk + 20*sizek)}, {ROUND(xk)           , ROUND(yk)           }};
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
    txLine     (xk - 10*sizek, yk + 70*sizek, xk           , yk + 60*sizek);
    txLine     (xk           , yk + 60*sizek, xk + 10*sizek, yk + 70*sizek);
    txLine     (xk + 10*sizek, yk + 70*sizek, xk + 20*sizek, yk + 70*sizek);
    txLine     (xk + 20*sizek, yk + 70*sizek, xk + 30*sizek, yk + 60*sizek);
    txLine     (xk + 30*sizek, yk + 60*sizek, xk + 40*sizek, yk + 60*sizek);
    txLine     (xk + 40*sizek, yk + 60*sizek, xk + 50*sizek, yk + 70*sizek);
    txLine     (xk + 50*sizek, yk + 70*sizek, xk + 60*sizek, yk + 70*sizek);

    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_BROWN);
    POINT sanosa [5] {{ROUND(xk - 100*sizek), ROUND(yk)           }, {ROUND(xk - 110*sizek), ROUND(yk - 30*sizek)},
                      {ROUND(xk - 110*sizek), ROUND(yk - 30*sizek)}, {ROUND(xk - 115*sizek), ROUND(yk - 20*sizek)},
                      {ROUND(xk - 115*sizek), ROUND(yk - 20*sizek)}};
    txPolygon        (sanosa, 5);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(61, 166, 201));
    POINT GG [5]   {{ROUND(xk - 15*sizek), ROUND(yk - 15*sizek)}, {ROUND(xk - 10*sizek), ROUND(yk - 10*sizek)},
                    {ROUND(xk - 13*sizek), ROUND(yk -  7*sizek)}, {ROUND(xk - 18*sizek), ROUND(yk - 12*sizek)},
                    {ROUND(xk - 15*sizek), ROUND(yk - 15*sizek)}};
    txPolygon      (GG, 5);
    }

//#====================================================
