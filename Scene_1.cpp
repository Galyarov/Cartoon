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

void Bird     (long xb,  long yb,  int    ras,  double sizeb                      );
void Boy      (long x,   long y,   double size, double tol,   int mah     , int go);
void Snowman  (long xs,  long ys,  int    nac,  double stick, double sizes        );
void Kolobok  (long xk,  long yk,  int    rot,  int    rad,   double sizek        );
void KolobokS (long xkS, long ykS, int radS,    double sizekS);

void BoyMove ();
void SnowmanMove();
void BirdMove();
void KolobokMove();

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

    long xkS = 1600;
    long ykS = 600;
    int radS = 10;
    double sizekS = 1.5;
    long xz = 900;
    long yz = 600;

    for(double zk = 0; zk<=5; zk++)
        {
        Zanoza(long xz, long yz)
        KolobokS(xkS, ykS, radS, sizekS);
        xkS = xkS - 5*zk;
        txSleep(100);

        txSetFillColor (TX_WHITE);
        txClear();
        }



     for(double zk1 = 0; zk1 <= 2; zk1++)
         {
          txTextOut(400, 400, "ќх, как же так. я не смогу убрать занозу, ручек то нет!");
          txSleep(100);

          txSetFillColor (TX_WHITE);
          txClear();
         }


     for(double zk1 = 0; zk1 <= 2; zk1++)
         {
          Kolobok (xk, yk, rot, rad, sizek)
          xk = xk + 5*zk1
          txSleep(100);

          txSetFillColor (TX_WHITE);
          txClear();
         }
    return 0;
    }

void Boy (long x, long y, double size, double tol, int mah, int go)
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
    txLine     (x, y + 190*size, x - 50*size + go*size, y + 290*size);

    txSetColor (TX_BLACK, tol);
    txLine     (x, y + 190*size, x + 50*size - go*size, y + 290*size);

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

//---------------------------------------------
void KolobokS (long xkS, long ykS, int radS, double sizekS)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle       (xkS, ykS, 100*sizekS);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT nos [4]  {{ROUND(xkS)           , ROUND(ykS)           },   {ROUND(xkS - 20*sizekS), ROUND(ykS + 20*sizekS)},
                    {ROUND(xkS + 20*sizekS), ROUND(ykS + 20*sizekS)}, {ROUND(xkS)           , ROUND(ykS)           }};
    txPolygon      (nos, 4);


    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xkS - 25*sizekS, ykS - 25*sizekS, radS*sizekS);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xkS + 25*sizekS, ykS - 25*sizekS, radS*sizekS);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txArc          (xkS - 60*sizekS, ykS + 70*sizekS,
                    xkS + 60*sizekS, ykS + 70*sizekS,
                    15, 10);
    }

//---------------------------------------------

void Kolobok (long xk, long yk, int rot, int rad, double sizek)
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

void Zanosa (long xz, long yz)
    {
    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_BROWN);
    POINT sanosa [5] {{ROUND(xk - 100*sizek), ROUND(yk)           }, {ROUND(xk - 110*sizek), ROUND(yk - 30*sizek)},
                      {ROUND(xk - 110*sizek), ROUND(yk - 30*sizek)}, {ROUND(xk - 115*sizek), ROUND(yk - 20*sizek)},
                      {ROUND(xk - 115*sizek), ROUND(yk - 20*sizek)}};
    txPolygon        (sanosa, 5);
    }
//#====================================================

//-------------------Actor Boy
void BoyMove()
    {
    int x = 500;
    int y = 500;
    double size = 1;
    int mah = 0;
    int go = 0;

    for(int z = 0; z<=20; z++)
        {
        Boy(x, y, size, 5, mah, go);

        if (z <= 7)
            {
            //Raises hands
            for(int a = 0; a<=5; a++)
                {
                Boy(x, y, size, 5, mah, go);
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
                Boy(x, y, size, 5, mah, go);

                mah = mah + 1;

                txSleep(100);
                txSetFillColor (TX_WHITE);
                txClear();

                if (z == 20)
                    {
                    for(int a2 = 0; a2<=15; a2++)//Is leaving
                        {
                        Boy(x, y, size, 5, mah, go);

                        x = x + 2*a2;
                        go = go + 25 - 50*(a2 % 2);

                        //size = size + 1,5*a2;
                        txSleep(100);
                        txSetFillColor (TX_WHITE);
                        txClear();
                        }
                    }
                }
            }
        }
    }

//-------------------Actor Snowman
void SnowmanMove()
    {
    int nac = 0;
    double sizes = 1;

    for (int countmove = 0; countmove <= 10; countmove++)
        {
        Snowman (800, 500, nac, 3, sizes);

        if (countmove <= 5)
            {
            Snowman (800, 500, nac, 3, sizes);
            nac = nac + 10;
            }
        else
            {
            nac = nac - countmove;
            }

        txSleep (100);
        txSetFillColor (TX_WHITE);
        txClear ();
        //sizes = sizes + 1,5*countmove;
        }

    }

//-------------------Actor Bird
void BirdMove()
    {
    int ras = 0;
    double sizeb = 1;
    int xb = 1000;
    int yb = 500;

    for(int zb = 0; zb<=10; zb++)
        {
        Bird(xb, yb, ras, sizeb);

        if (zb <= 5)
            {
            for(int zb1 = 0; zb1 <=2; zb1++)
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
    }

//-------------------Actor Kolobok
void KolobokMove()
    {
    int rad = 10;
    double sizek = 1.5;
    int xk = 1000;
    int yk = 500;
    int rot = 5;

    for(double zk = 0; zk<=10; zk++)
        {
        Kolobok(xk, yk, rot, rad, sizek);

        if (zk <= 5)
            {
            for(int zk1 = 0; zk1 <= 1; zk1++)
                {
                Kolobok(xk, yk, rot, rad, sizek);

                rot = rot + zk1;
                rad = rad + zk1;

                txSleep(100);

                txSetFillColor (TX_WHITE);
                txClear();
                }
            }
        if (zk >= 9)
            {
            for(double zk3 = 0; zk3 <= 10; zk3++)
                {
                Kolobok(xk, yk, rot, rad, sizek);
                xk = xk + 5*zk3;
                sizek = sizek + 1,5*zk3;

                txSleep(100);

                txSetFillColor (TX_WHITE);
                txClear();
                }
            }
        }

    }
