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

void Bird     (long xBird, long yBird, int ras, double sizeBird);
void Boy      (long x, long y, double size, double tol, int mah, int go);
void Snowman  (long xSnowman, long ySnowman, int nac, double stick, double sizeSnowman);
void Kolobok  (long xKolobok, long yKolobok, int rot, int rad, double sizeKolobok);
void KolobokS (long xKolobokStandart, long yKolobokStandart, int radStandart, double sizeKolobokStandart);
void Zanoza   (long xZanoza,  long yZanoza, double sizeZanoza);

void Tree1    (long xTree1, long yTree1);
void Tree2    (long xTree2, long yTree2);
void Snowdrift(long xSnowdrift, long ySnowdrift, double sizeSnowdrift);

void BoyMove ();
void SnowmanMove();
void BirdMove();
void KolobokMove();

void Scene_1();
void Scene_2();

int main ()
    {
     txCreateWindow (1600,900);
     txSetFillColor (TX_WHITE);
     txRectangle    (0, 0, 1600, 900);

     Scene_1();
     Scene_2();

     return 0;
    }
    /*
    First and working coordination
    Boy     ( 800, 300,   1,  5);
    Bird    (1000, 500, -10,  1);
    Snowman ( 400, 500,  10,  3, 2  );
    Kolobok ( 200, 400,   5, 10, 1.5);
    */

void Scene_1()
{
//=====================Scene_1===============================

//--------Coordination

    long xKolobokStandart = 1600;
    long yKolobokStandart = 600;
    int radStandart = 10;
    double sizeKolobokStandart = 1.5;

    long xZanoza = 900;
    long yZanoza = 700;
    double sizeZanoza = 1;

    long xKolobok = 900;
    long yKolobok = 600;
    int rad = 15;
    double sizeKolobok = 1.5;
    int rot = 2;

    long xTree1 = 1400;
    long yTree1 = 300;

    long xTree2 = 150;
    long yTree2 = 700;


//--------Title

    txSetFillColor (RGB(255, 255, 255));

    txSetColor(RGB(0, 0, 0));
    txSelectFont("Comic Sans MS", 60);
    txTextOut(500, 350, "Gingerbread man. Other story");

    txSleep(2000);

    txSetFillColor (RGB(255, 255, 255));
    txClear ();

//--------Action 1

    for(int zk = 0; zk<=17; zk++)
        {
        Zanoza   (xZanoza, yZanoza, sizeZanoza);
        KolobokS (xKolobokStandart, yKolobokStandart, radStandart, sizeKolobokStandart);

        Tree1 (xTree1, yTree1);
        Tree2 (xTree2, yTree2);
        Tree1 (162, 200);
        Tree1 (1300, 250);
        Tree2 (1500, 650);
        Tree2 (750, 250);

        xKolobokStandart = xKolobokStandart - 5*zk;

        txSleep(100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

//--------Phrase

    txSetFillColor (RGB(255, 255, 255));

    txSetColor(RGB(0, 0, 0));
    txSelectFont("Comic Sans MS", 50);
    txTextOut(100, 300, "Oh, how can that be. I will not be able to remove the splinter, there are no pens!");

    txSleep(2000);

    txSetFillColor (RGB(255, 255, 255));
    txClear();

//--------Action 2

     for(int zk1 = 0; zk1 <= 20; zk1++)
         {
          Kolobok (xKolobok, yKolobok, rot, rad, sizeKolobok);

          Tree1 (xTree1, yTree1);
          Tree2 (xTree2, yTree2);
          Tree1 (162, 200);
          Tree1 (1300, 250);
          Tree2 (1500, 650);
          Tree2 (750, 250);

          xKolobok = xKolobok - 5*zk1;

          txSleep(100);

          txSetFillColor (RGB(119, 221, 119));
          txClear();
         }

}

void Scene_2()
{
//=====================Scene_2===============================

//--------Coordination

    long xKolobok = 1600;
    long yKolobok = 600;
    int rad = 10;
    double sizeKolobok = 1.5;
    int rot = 2;

    long xSnowman = 800;
    long ySnowman = 500;
    int nac = 0;
    double stick = 1;
    double sizeSnowman = 1.5;

//--------Action 1

    for (int i=0; i<=15; i++)
        {
         Snowman (xSnowman, ySnowman, nac, stick, sizeSnowman);
         Kolobok (xKolobok, yKolobok, rot, rad, sizeKolobok);

         Snowdrift(200, 200, 1);
         Snowdrift(1350, 200, 0.5);
         Snowdrift(150, 900, 1.2);
         Snowdrift(1400, 900, 1);

         xKolobok = xKolobok - 3*i;

         txSleep(100);

         txSetFillColor(RGB(224, 255, 255));
         txClear();
        }

//--------Phrase 1

    txSetColor(RGB(0, 0, 0));
    txSelectFont("Comic Sans MS", 50);
    txTextOut(500, 300, "-Snowman, be a friend, help, eh!");
    txTextOut(500, 400, "-Let's try");

    txSleep(3000);

    txSetFillColor (RGB(255, 255, 255));
    txClear();

//--------Action 2


    for (int countmove = 0; countmove <= 20; countmove++)
        {
         Snowman (xSnowman, ySnowman, nac, stick, sizeSnowman);
         Kolobok (xKolobok, yKolobok, rot, rad, sizeKolobok);

         Snowdrift(200, 200, 1);
         Snowdrift(1350, 200, 0.5);
         Snowdrift(150, 900, 1.2);
         Snowdrift(1400, 900, 1);


         if (countmove <= 10)
             {
              Snowman (xSnowman, ySnowman, nac, stick, sizeSnowman);
              nac = nac + 10;
             }
         else
             {
              nac = nac - countmove;
             }

         txSleep(100);

         txSetFillColor(RGB(224, 255, 255));
         txClear();
        }

//--------Phrase 2

    txSetColor(RGB(0, 0, 0));
    txSelectFont("Comic Sans MS", 50);
    txTextOut(300, 300, "-I can't get in. I can't move. I'm just a snowman!");
    txTextOut(300, 400, "-Eh, okay. Thanks anyway for trying");

    txSleep(3000);

    txSetFillColor (RGB(255, 255, 255));
    txClear();

//--------Action 3

    for (int z = 0; z <= 13; z++)
        {
         Snowman (xSnowman, ySnowman, nac, stick, sizeSnowman);
         Kolobok (xKolobok, yKolobok, rot, rad, sizeKolobok);

         Snowdrift(200, 200, 1);
         Snowdrift(1350, 200, 0.5);
         Snowdrift(150, 900, 1.2);
         Snowdrift(1400, 900, 1);

         xKolobok = xKolobok - 10*z;

         txSleep(100);

         txSetFillColor(RGB(224, 255, 255));
         txClear();
        }

    for (int zk = 0; zk <= 8; zk++)
        {
         Snowman (xSnowman, ySnowman, nac, stick, sizeSnowman);
         Kolobok (xKolobok, yKolobok, rot, rad, sizeKolobok);

         Snowdrift(200, 200, 1);
         Snowdrift(1350, 200, 0.5);
         Snowdrift(150, 900, 1.2);
         Snowdrift(1400, 900, 1);


         sizeKolobok = sizeKolobok - 0.05*zk;
         xKolobok = xKolobok - 10*zk;

         txSleep(100);

         txSetFillColor(RGB(224, 255, 255));
         txClear();
        }
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

void Bird (long xBird, long yBird, int ras, double sizeBird)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT body [4] {{ROUND(xBird), ROUND(yBird)            }, {ROUND(xBird + 100*sizeBird), ROUND(yBird - 50*sizeBird)},
                    {ROUND(xBird), ROUND(yBird + 100*sizeBird)}, {ROUND(xBird)            , ROUND(yBird)           }};
    txPolygon      (body, 4);

    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_BROWN);
    POINT krilo1 [4] {{ROUND(xBird), ROUND(yBird)            }, {ROUND(xBird - 100*sizeBird),  ROUND(yBird -  50*sizeBird)},
                      {ROUND(xBird), ROUND(yBird + 100*sizeBird)}, {ROUND(xBird)            ,  ROUND(yBird)            }};
    txPolygon        (krilo1, 4);

    txSetColor       (TX_BLACK);
    txSetFillColor   (RGB(82, 92, 65));
    POINT krilo2 [4] {{ROUND(xBird - 20*sizeBird), ROUND(yBird)            }, {ROUND(xBird + 20*sizeBird), ROUND(yBird)            },
                      {ROUND(xBird - 40*sizeBird), ROUND(yBird + 100*sizeBird)}, {ROUND(xBird + 40*sizeBird), ROUND(yBird + 100*sizeBird)}};
    txPolygon        (krilo2, 4);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(82, 92, 65));
    txCircle       (xBird, yBird - 25*sizeBird, 25*sizeBird);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xBird + 15*sizeBird, yBird - 25*sizeBird, 5*sizeBird);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    POINT kluv [6] {{ROUND(xBird - 10*sizeBird), ROUND(yBird - 50*sizeBird)}, {ROUND(xBird -  5*sizeBird - ras), ROUND(yBird - 75*sizeBird)},
                    {ROUND(xBird)           , ROUND(yBird - 55*sizeBird)}, {ROUND(xBird +  5*sizeBird + ras), ROUND(yBird - 75*sizeBird)},
                    {ROUND(xBird + 10*sizeBird), ROUND(yBird - 50*sizeBird)}, {ROUND(xBird - 10*sizeBird),       ROUND(yBird - 50*sizeBird)}};
    txPolygon      (kluv, 6);
    }

//----------------------------------------------------------

void Snowman (long xSnowman, long ySnowman, int nac,  double stick, double sizeSnowman)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xSnowman , ySnowman + 100*sizeSnowman, 100*sizeSnowman);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xSnowman, ySnowman - 50*sizeSnowman, 50*sizeSnowman);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xSnowman + 75*sizeSnowman, ySnowman + 25*sizeSnowman, 25*sizeSnowman);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (xSnowman - 75*sizeSnowman, ySnowman + 25*sizeSnowman, 25*sizeSnowman);

    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_ORANGE);
    POINT carrot [4] {{ROUND(xSnowman), ROUND(ySnowman - 60*sizeSnowman)}, {ROUND(xSnowman + 30*sizeSnowman), ROUND(ySnowman - 50*sizeSnowman)},
                      {ROUND(xSnowman), ROUND(ySnowman - 40*sizeSnowman)}, {ROUND(xSnowman)           , ROUND(ySnowman - 60*sizeSnowman)}};
    txPolygon        (carrot, 4);

    txSetColor   (TX_BROWN, stick);
    txLine       (xSnowman + 75*sizeSnowman + nac, ySnowman - 100*sizeSnowman,
                  xSnowman + 75*sizeSnowman - nac, ySnowman + 200*sizeSnowman);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(78, 102, 175));
    txCircle       (xSnowman + 75*sizeSnowman + nac, ySnowman - 98*sizeSnowman, 5*sizeSnowman);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(78, 102, 190));
    txCircle       (xSnowman + 74*sizeSnowman + nac, ySnowman - 99*sizeSnowman, 5*sizeSnowman);
    txCircle       (xSnowman + 75*sizeSnowman + nac, ySnowman - 98*sizeSnowman, 5*sizeSnowman);
    txCircle       (xSnowman + 76*sizeSnowman + nac, ySnowman - 99*sizeSnowman, 5*sizeSnowman);

    txSetColor       (TX_BLACK);
    txSetFillColor   (RGB(106, 106, 130));
    POINT bucket [6] {{ROUND(xSnowman - 50*sizeSnowman), ROUND(ySnowman -  90*sizeSnowman)}, {ROUND(xSnowman - 40*sizeSnowman), ROUND(ySnowman - 180*sizeSnowman)},
                      {ROUND(xSnowman + 40*sizeSnowman), ROUND(ySnowman - 180*sizeSnowman)}, {ROUND(xSnowman + 50*sizeSnowman), ROUND(ySnowman -  90*sizeSnowman)},
                      {ROUND(xSnowman + 50*sizeSnowman), ROUND(ySnowman -  90*sizeSnowman)}, {ROUND(xSnowman - 50*sizeSnowman), ROUND(ySnowman -  90*sizeSnowman)}};
    txPolygon        (bucket, 6);
    }

//---------------------------------------------
void KolobokS (long xKolobokStandart, long yKolobokStandart, int radStandart, double sizeKolobokStandart)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle       (xKolobokStandart, yKolobokStandart, 100*sizeKolobokStandart);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT nos [4]  {{ROUND(xKolobokStandart)           ,  ROUND(yKolobokStandart)           },   {ROUND(xKolobokStandart - 20*sizeKolobokStandart), ROUND(yKolobokStandart + 20*sizeKolobokStandart)},
                    {ROUND(xKolobokStandart + 20*sizeKolobokStandart), ROUND(yKolobokStandart + 20*sizeKolobokStandart)},  {ROUND(xKolobokStandart)           ,  ROUND(yKolobokStandart)           }};
    txPolygon      (nos, 4);


    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xKolobokStandart - 25*sizeKolobokStandart, yKolobokStandart - 25*sizeKolobokStandart, radStandart*sizeKolobokStandart);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xKolobokStandart + 25*sizeKolobokStandart, yKolobokStandart - 25*sizeKolobokStandart, radStandart*sizeKolobokStandart);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txEllipse      (xKolobokStandart - 40*sizeKolobokStandart, yKolobokStandart + 60*sizeKolobokStandart,
                    xKolobokStandart + 50*sizeKolobokStandart, yKolobokStandart + 75*sizeKolobokStandart);

    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txEllipse      (xKolobokStandart - 40*sizeKolobokStandart, yKolobokStandart + 55*sizeKolobokStandart,
                    xKolobokStandart + 50*sizeKolobokStandart, yKolobokStandart + 65*sizeKolobokStandart);
    }

//---------------------------------------------

void Kolobok (long xKolobok, long yKolobok, int rot, int rad, double sizeKolobok)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle       (xKolobok, yKolobok, 100*sizeKolobok);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT nos [4]  {{ROUND(xKolobok)           , ROUND(yKolobok)           }, {ROUND(xKolobok - 20*sizeKolobok), ROUND(yKolobok + 20*sizeKolobok)},
                    {ROUND(xKolobok + 20*sizeKolobok), ROUND(yKolobok + 20*sizeKolobok)}, {ROUND(xKolobok)           , ROUND(yKolobok)           }};
    txPolygon      (nos, 4);


    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xKolobok - 25*sizeKolobok, yKolobok - 25*sizeKolobok, rad*sizeKolobok);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (xKolobok + 25*sizeKolobok, yKolobok - 25*sizeKolobok, rad*sizeKolobok);

    txSetColor (TX_BLACK, rot);
    txLine     (xKolobok - 60*sizeKolobok, yKolobok + 70*sizeKolobok, xKolobok - 50*sizeKolobok, yKolobok + 70*sizeKolobok);
    txLine     (xKolobok - 50*sizeKolobok, yKolobok + 70*sizeKolobok, xKolobok - 40*sizeKolobok, yKolobok + 60*sizeKolobok);
    txLine     (xKolobok - 40*sizeKolobok, yKolobok + 60*sizeKolobok, xKolobok - 30*sizeKolobok, yKolobok + 60*sizeKolobok);
    txLine     (xKolobok - 30*sizeKolobok, yKolobok + 60*sizeKolobok, xKolobok - 20*sizeKolobok, yKolobok + 70*sizeKolobok);
    txLine     (xKolobok - 20*sizeKolobok, yKolobok + 70*sizeKolobok, xKolobok - 10*sizeKolobok, yKolobok + 70*sizeKolobok);
    txLine     (xKolobok - 10*sizeKolobok, yKolobok + 70*sizeKolobok, xKolobok                 , yKolobok + 60*sizeKolobok);
    txLine     (xKolobok                 , yKolobok + 60*sizeKolobok, xKolobok + 10*sizeKolobok, yKolobok + 70*sizeKolobok);
    txLine     (xKolobok + 10*sizeKolobok, yKolobok + 70*sizeKolobok, xKolobok + 20*sizeKolobok, yKolobok + 70*sizeKolobok);
    txLine     (xKolobok + 20*sizeKolobok, yKolobok + 70*sizeKolobok, xKolobok + 30*sizeKolobok, yKolobok + 60*sizeKolobok);
    txLine     (xKolobok + 30*sizeKolobok, yKolobok + 60*sizeKolobok, xKolobok + 40*sizeKolobok, yKolobok + 60*sizeKolobok);
    txLine     (xKolobok + 40*sizeKolobok, yKolobok + 60*sizeKolobok, xKolobok + 50*sizeKolobok, yKolobok + 70*sizeKolobok);
    txLine     (xKolobok + 50*sizeKolobok, yKolobok + 70*sizeKolobok, xKolobok + 60*sizeKolobok, yKolobok + 70*sizeKolobok);

    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_BROWN);
    POINT sanosa [5] {{ROUND(xKolobok - 100*sizeKolobok), ROUND(yKolobok)           }, {ROUND(xKolobok - 110*sizeKolobok), ROUND(yKolobok - 30*sizeKolobok)},
                      {ROUND(xKolobok - 110*sizeKolobok), ROUND(yKolobok - 30*sizeKolobok)}, {ROUND(xKolobok - 115*sizeKolobok), ROUND(yKolobok - 20*sizeKolobok)},
                      {ROUND(xKolobok - 115*sizeKolobok), ROUND(yKolobok - 20*sizeKolobok)}};
    txPolygon        (sanosa, 5);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(61, 166, 201));
    POINT GG [5]   {{ROUND(xKolobok - 15*sizeKolobok), ROUND(yKolobok - 15*sizeKolobok)}, {ROUND(xKolobok - 10*sizeKolobok), ROUND(yKolobok - 10*sizeKolobok)},
                    {ROUND(xKolobok - 13*sizeKolobok), ROUND(yKolobok -  7*sizeKolobok)}, {ROUND(xKolobok - 18*sizeKolobok), ROUND(yKolobok - 12*sizeKolobok)},
                    {ROUND(xKolobok - 15*sizeKolobok), ROUND(yKolobok - 15*sizeKolobok)}};
    txPolygon      (GG, 5);
    }
//--------------------------------------------------------
void Zanoza (long xZanoza, long yZanoza, double sizeZanoza)
    {
    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_BROWN);
    POINT sanosa [5] {{ROUND(xZanoza - 100*sizeZanoza), ROUND(yZanoza)           }, {ROUND(xZanoza - 110*sizeZanoza), ROUND(yZanoza - 30*sizeZanoza)},
                      {ROUND(xZanoza - 110*sizeZanoza), ROUND(yZanoza - 30*sizeZanoza)}, {ROUND(xZanoza - 115*sizeZanoza), ROUND(yZanoza - 20*sizeZanoza)},
                      {ROUND(xZanoza - 115*sizeZanoza), ROUND(yZanoza - 20*sizeZanoza)}};
    txPolygon        (sanosa, 5);
    }

void Tree1 (long xTree1, long yTree1)
    {
     txSetColor     (TX_BLACK);
     txSetFillColor (TX_BROWN);
     txRectangle    (xTree1 - 10, yTree1,
                     xTree1 - 50, yTree1 + 100);

     txSetColor     (TX_BLACK);
     txSetFillColor (TX_GREEN);
     txCircle       (xTree1 - 80, yTree1 - 150, 60);

     txSetColor     (TX_BLACK);
     txSetFillColor (TX_GREEN);
     txCircle       (xTree1 + 40, yTree1 - 150, 60);

     txSetColor     (TX_BLACK);
     txSetFillColor (TX_GREEN);
     txCircle       (xTree1 - 30, yTree1 - 200, 60);

     txSetColor     (TX_GREEN);
     txSetFillColor (TX_GREEN);
     txEllipse      (xTree1 - 100,  yTree1 +  20,
                     xTree1 +  40,  yTree1 - 200);

     txSetColor     (TX_BLACK);
     txSetFillColor (RGB(178, 34, 34));
     txCircle       (xTree1 - 30, yTree1 - 200, 20);

     txSetColor     (TX_BLACK);
     txSetFillColor (RGB(255, 160, 122));
     txCircle       (xTree1 + 40, yTree1 - 150, 15);

     txSetColor     (TX_BLACK);
     txSetFillColor (RGB(139, 0, 0));
     txCircle       (xTree1 - 80, yTree1 - 150, 22);
    }

void Tree2 (long xTree2, long yTree2)
    {
     txSetColor     (TX_BLACK);
     txSetFillColor (TX_BROWN);
     txRectangle    (xTree2 - 10, yTree2,
                     xTree2 - 50, yTree2 + 100);

     txSetColor     (TX_BLACK);
     txSetFillColor (RGB(173, 255, 47));
     txCircle       (xTree2 - 80, yTree2 - 150, 60);

     txSetColor     (TX_BLACK);
     txSetFillColor (RGB(173, 255, 47));
     txCircle       (xTree2 + 40, yTree2 - 150, 60);

     txSetColor     (TX_BLACK);
     txSetFillColor (RGB(173, 255, 47));
     txCircle       (xTree2 - 30, yTree2 - 200, 60);

     txSetColor     (RGB(173, 255, 47));
     txSetFillColor (RGB(173, 255, 47));
     txEllipse      (xTree2 - 100,  yTree2 +  20,
                     xTree2 +  40,  yTree2 - 200);
    }

void Snowdrift(long xSnowdrift, long ySnowdrift, double sizeSnowdrift)
    {
     txSetColor     (TX_BLACK);
     txSetFillColor (TX_WHITE);
     txEllipse      (ROUND(xSnowdrift),                     ROUND(ySnowdrift),
                     ROUND(xSnowdrift + 400*sizeSnowdrift), ROUND(ySnowdrift - 150*sizeSnowdrift));

     txSetColor     (RGB(224, 255, 255));
     txSetFillColor (RGB(224, 255, 255));
     txRectangle    (ROUND(xSnowdrift - 20*sizeSnowdrift),  ROUND(ySnowdrift + 20*sizeSnowdrift),
                     ROUND(xSnowdrift + 420*sizeSnowdrift), ROUND(ySnowdrift - 75*sizeSnowdrift));
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
    double sizeSnowman = 1;

    for (int countmove = 0; countmove <= 10; countmove++)
        {
        Snowman (800, 500, nac, 3, sizeSnowman);

        if (countmove <= 5)
            {
            Snowman (800, 500, nac, 3, sizeSnowman);
            nac = nac + 10;
            }
        else
            {
            nac = nac - countmove;
            }

        txSleep (100);
        txSetFillColor (TX_WHITE);
        txClear ();
        //sizeSnowman = sizeSnowman + 1,5*countmove;
        }

    }

//-------------------Actor Bird
void BirdMove()
    {
    int ras = 0;
    double sizeBird = 1;
    int xBird = 1000;
    int yBird = 500;

    for(int zb = 0; zb<=10; zb++)
        {
        Bird(xBird, yBird, ras, sizeBird);

        if (zb <= 5)
            {
            for(int zb1 = 0; zb1 <=2; zb1++)
                {
                Bird(xBird, yBird, ras, sizeBird);
                ras = ras + zb;

                txSleep(100);
                txSetFillColor (TX_WHITE);
                txClear();
                }
            }
        ras = ras - zb;
        //sizeBird = sizeBird + 1.5*zb;
        //xBird = xBird + 10*zb;
        yBird = yBird - 2*zb;

        txSleep(100);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    }

//-------------------Actor Kolobok
void KolobokMove()
    {
    int rad = 10;
    double sizeKolobok = 1.5;
    int xKolobok = 1000;
    int yKolobok = 500;
    int rot = 5;

    for(int zk = 0; zk<=10; zk++)
        {
        Kolobok(xKolobok, yKolobok, rot, rad, sizeKolobok);

        if (zk <= 5)
            {
            for(int zk1 = 0; zk1 <= 1; zk1++)
                {
                Kolobok(xKolobok, yKolobok, rot, rad, sizeKolobok);

                rot = rot + zk1;
                rad = rad + zk1;

                txSleep(100);

                txSetFillColor (TX_WHITE);
                txClear();
                }
            }
        if (zk >= 9)
            {
            for(int zk3 = 0; zk3 <= 10; zk3++)
                {
                Kolobok(xKolobok, yKolobok, rot, rad, sizeKolobok);
                xKolobok = xKolobok + 5*zk3;
                sizeKolobok = sizeKolobok + 1,5*zk3;

                txSleep(100);

                txSetFillColor (TX_WHITE);
                txClear();
                }
            }
        }

    }
