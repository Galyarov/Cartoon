#include "TXLib.h"
/*
x, y = geolocation actors
tol = width line Boy
rot = how big mooth Kolobok
naclon = stick Snowman
rad = how big eyes Kolobok
ras = how big Beak
stick = width stick Snowman
*/


void Bird     (long xBird, long yBird, int ras, double sizeBird);
void Boy      (long x, long y, double size, double tol, int mah, int go);
void Snowman  (long xSnowman, long ySnowman, int naclon, double stick, double sizeSnowman);
void Kolobok  (long xKolobok, long yKolobok, int rot, int rad, double sizeKolobok);
void KolobokS (long xKolobokStandart, long yKolobokStandart, int radStandart, double sizeKolobokStandart);
void Zanoza   (long xZanoza,  long yZanoza, double sizeZanoza);

void Tree1     (long xTree1, long yTree1);
void Tree2     (long xTree2, long yTree2);
void Snowdrift (long xSnowdrift, long ySnowdrift, double sizeSnowdrift);
void TreeBird  (long xTreeBird, long yTreeBird);
void Penek     (long xPenek, long yPenek, double sizePenek);

void Scene_1 ();
void Scene_2 ();
void Scene_3 ();
void Scene_4 ();

void Text (long x, long y, long x1, long y1, long x2, long y2, const char text[], const char text1[], const char text2[], long sleep, long R, long G, long B);

int main ()
    {
     txCreateWindow (1600,900);
     txSetFillColor (TX_WHITE);
     txRectangle    (0, 0, 1600, 900);

     Scene_1 ();
     Scene_2 ();
     Scene_3 ();
     Scene_4 ();

     return 0;
    }


void Scene_1 ()
{
//=====================Scene_1===============================

//--------Title

    Text(500, 350, 0, 0, 0, 0, "Gingerbread man. Other story", "", "", 2000, 255, 255, 255);

//--------Action 1

    int dx = 0;

    while (1600-35*dx > 900)
        {
        Zanoza   (900, 700, 1);
        KolobokS (1600 - 35*dx, 600, 10, 1.5);

        Tree1 (1400, 300);
        Tree2 ( 150, 700);
        Tree1 ( 162, 200);
        Tree1 (1300, 250);
        Tree2 (1500, 650);
        Tree2 ( 750, 250);

        dx ++;

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

//--------Phrase

    Text(100, 300, 0, 0, 0, 0, "- Oh, how can that be. I will not be able to remove the splinter, there are no pens!", "", "", 2000, 255, 255, 255);

//--------Action 2

    dx = 0;

    while (900 - 30*dx > -100)
        {
        Kolobok (900 - 30*dx, 600, 2, 15, 1.5);

        Tree1 (1400, 300);
        Tree2 ( 150, 700);
        Tree1 ( 162, 200);
        Tree1 (1300, 250);
        Tree2 (1500, 650);
        Tree2 ( 750, 250);

        dx ++;

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

}

void Scene_2()
{
//=====================Scene_2===============================

//--------Action 1

    int dx = 0;

    while (1600 - 30*dx > 1200)
        {
        Snowman (800, 500, 0, 1, 1.5);
        Kolobok (1600 - 30*dx, 600, 2, 15, 1.5);

        Snowdrift ( 200, 200, 1);
        Snowdrift (1350, 200, 0.5);
        Snowdrift ( 150, 900, 1.2);
        Snowdrift (1400, 900, 1);

        dx ++;

        txSleep (100);

        txSetFillColor (RGB(224, 255, 255));
        txClear ();
        }

//---------Phrase 1

    Text(500, 300, 500, 400, 0, 0, "- Snowman, be a friend, help, eh!", "- Let's try", "", 3000, 255, 255, 255);

//--------Action 2

    int naclon = 0;

    for (int countmove = 0; countmove <= 20; countmove++)
        {
        Snowman (800, 500, naclon, 1, 1.5);
        Kolobok (1200, 600, 2, 15, 1.5);

        Snowdrift ( 200, 200, 1);
        Snowdrift (1350, 200, 0.5);
        Snowdrift ( 150, 900, 1.2);
        Snowdrift (1400, 900, 1);

        if (countmove <= 10)
            {
            Snowman (800, 500, naclon, 1, 1.5);
            naclon = naclon + 10;
            }
        else
            {
            naclon = naclon - countmove;
            }

        txSleep (100);

        txSetFillColor (RGB(224, 255, 255));
        txClear ();
        }

//--------Phrase 2

    Text(300, 300, 300, 400, 0, 0, "- I can't get in. I can't move. I'm just a snowman!", "- Eh, okay. Thanks anyway for trying", "", 3000, 255, 255, 255);

//--------Action 3

    dx = 0;

    while (1200 - 30*dx > 400)
        {
        Snowman (800, 500, 0, 1, 1.5);
        Kolobok (1200 - 30*dx, 600, 2, 15, 1.5);

        Snowdrift ( 200, 200, 1);
        Snowdrift (1350, 200, 0.5);
        Snowdrift ( 150, 900, 1.2);
        Snowdrift (1400, 900, 1);

        dx ++;

        txSleep (100);

        txSetFillColor (RGB(224, 255, 255));
        txClear ();
        }

    int dxsize = 0;

    while (400 - 30*dxsize > -100)
        {
        Snowman (800, 500, 0, 1, 1.5);
        Kolobok (400 - 30*dxsize, 600, 2, 15, 1.5 - 0.05*dxsize);

        Snowdrift ( 200, 200, 1);
        Snowdrift (1350, 200, 0.5);
        Snowdrift ( 150, 900, 1.2);
        Snowdrift (1400, 900, 1);

        dxsize ++;

        txSleep (100);

        txSetFillColor (RGB(224, 255, 255));
        txClear ();
        }
}

void Scene_3()
{
//=====================Scene_3===============================

//-------Action 1

    int dx = 0;

    while (1700 - 30*dx > 1000)
        {
        Kolobok  (1700 - 30*dx, 600, 2, 15, 1);
        TreeBird (700, 400);
        Bird     (565, 340, 0, 0.5);

        Tree1 ( 100, 100);
        Tree2 (  50, 250);
        Tree1 (  90, 300);
        Tree1 ( 110, 390);
        Tree2 (  60, 500);
        Tree1 ( 120, 760);
        Tree1 (1300, 220);
        Tree2 (1500, 450);
        Tree2 (1450, 650);

        dx ++;

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

//--------Phrase 1

    Text(500, 300, 500, 400, 500, 500, "- Kolobok, Kolobok! you're a slob.", "- Get off the flyer!", "- Oh oh oh. How angry, don't become a hedgehog.", 5000, 255, 255, 255);

//--------Action 2

    int dxy = 0;

    while (1000 - 30*dxy < -100)
        {
        Kolobok  (1000 - 30*dxy, 600, 2, 15, 1);
        TreeBird (700, 400);
        Bird     (565, 340 - 40*dxy, 0, 0.5);

        Tree1 ( 100, 100);
        Tree2 (  50, 250);
        Tree1 (  90, 300);
        Tree1 ( 110, 390);
        Tree2 (  60, 500);
        Tree1 ( 120, 760);
        Tree1 (1300, 220);
        Tree2 (1500, 450);
        Tree2 (1450, 650);

        dxy ++;

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }
}

void Scene_4()
{
//=====================Scene_4===============================

//--------Action 1

    int dx = 0;

    while (1700 - 30*dx > 1100)
        {
        Tree1    ( 110, 250);
        Tree2    ( 230, 260);
        Tree1    ( 350, 255);
        Tree2    ( 440, 253);
        Tree2    ( 590, 251);
        Tree1    ( 680, 259);
        Tree2    ( 760, 254);
        Tree1    ( 850, 253);
        Tree2    ( 970, 257);
        Tree1    (1000, 251);
        Tree2    (1140, 250);
        Tree2    (1240, 254);
        Tree1    (1380, 253);
        Tree2    (1480, 256);
        Tree2    (1540, 258);
        Tree2    (1640, 251);

        Kolobok  (1700 - 30*dx, 600, 2, 15, 1);
        Penek    (800, 550, 2);

        dx ++;

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

    for (int dxy = 0; dxy <= 10; dxy++)
        {
        Tree1    ( 110, 250);
        Tree2    ( 230, 260);
        Tree1    ( 350, 255);
        Tree2    ( 440, 253);
        Tree2    ( 590, 251);
        Tree1    ( 680, 259);
        Tree2    ( 760, 254);
        Tree1    ( 850, 253);
        Tree2    ( 970, 257);
        Tree1    (1000, 251);
        Tree2    (1140, 250);
        Tree2    (1240, 254);
        Tree1    (1380, 253);
        Tree2    (1480, 256);
        Tree2    (1540, 258);
        Tree2    (1640, 251);

        Kolobok  (1100 - 15*dxy, 600 - 15*dxy, 2, 15, 1);
        Penek    (800, 550, 2);

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

    dx = 0;

    while (950 - 10*dx > 800)
        {
        Tree1    ( 110, 250);
        Tree2    ( 230, 260);
        Tree1    ( 350, 255);
        Tree2    ( 440, 253);
        Tree2    ( 590, 251);
        Tree1    ( 680, 259);
        Tree2    ( 760, 254);
        Tree1    ( 850, 253);
        Tree2    ( 970, 257);
        Tree1    (1000, 251);
        Tree2    (1140, 250);
        Tree2    (1240, 254);
        Tree1    (1380, 253);
        Tree2    (1480, 256);
        Tree2    (1540, 258);
        Tree2    (1640, 251);

        Kolobok  (950 - 10*dx, 450, 2, 15, 1);
        Penek    (800, 550, 2);

        dx ++;

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

//------Phrase 1

    Text(500, 300, 0, 0, 0, 0, "- Oh, who will help me.", "", "", 2000, 255, 255, 255);


//-------Action 2

    for (int dxgo = 0; dxgo <= 17; dxgo++)
        {
        Tree1    ( 110, 250);
        Tree2    ( 230, 260);
        Tree1    ( 350, 255);
        Tree2    ( 440, 253);
        Tree2    ( 590, 251);
        Tree1    ( 680, 259);
        Tree2    ( 760, 254);
        Tree1    ( 850, 253);
        Tree2    ( 970, 257);
        Tree1    (1000, 251);
        Tree2    (1140, 250);
        Tree2    (1240, 254);
        Tree1    (1380, 253);
        Tree2    (1480, 256);
        Tree2    (1540, 258);
        Tree2    (1640, 251);

        Boy     (-100 + 35*dxgo, 400, 1, 5, 0, 0 + 25 - 25*(dxgo % 2));
        Kolobok (800, 450, 2, 15, 1);
        Penek   (800, 550, 2);

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

//------Phrase 2

    Text(300, 300, 300, 400, 300, 500, "- Kolobok, why are you sad?", "- Yes, here's a splinter, but I can't get it", "- Let me help you", 5000, 255, 255, 255);

//-------Action 3

    for (int dmah = 0; dmah <= 8; dmah++)
        {
        Tree1    ( 110, 250);
        Tree2    ( 230, 260);
        Tree1    ( 350, 255);
        Tree2    ( 440, 253);
        Tree2    ( 590, 251);
        Tree1    ( 680, 259);
        Tree2    ( 760, 254);
        Tree1    ( 850, 253);
        Tree2    ( 970, 257);
        Tree1    (1000, 251);
        Tree2    (1140, 250);
        Tree2    (1240, 254);
        Tree1    (1380, 253);
        Tree2    (1480, 256);
        Tree2    (1540, 258);
        Tree2    (1640, 251);

        Boy (495, 400, 1, 5, 0 + 15*dmah, 0);
        Kolobok (800, 450, 2, 15, 1);
        Penek (800, 550, 2);

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

//-------Action 4

    int dy = 0;

    while (450 + 40*dy < 850)
        {
        Tree1    ( 110, 250);
        Tree2    ( 230, 260);
        Tree1    ( 350, 255);
        Tree2    ( 440, 253);
        Tree2    ( 590, 251);
        Tree1    ( 680, 259);
        Tree2    ( 760, 254);
        Tree1    ( 850, 253);
        Tree2    ( 970, 257);
        Tree1    (1000, 251);
        Tree2    (1140, 250);
        Tree2    (1240, 254);
        Tree1    (1380, 253);
        Tree2    (1480, 256);
        Tree2    (1540, 258);
        Tree2    (1640, 251);

        Boy      (495, 400, 1, 5, 0, 0);
        Penek    (800, 550, 2);
        KolobokS (800, 450, 15, 1);
        Zanoza   (800, 450 + 40*dy, 1);

        dy ++;

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

//------Phrase 3

    Text(300, 300, 0, 0, 0, 0, "- Here's a thank you man", "", "", 2000, 255, 255, 255);

//-------Action 5

    for (int d = 0; d <= 5; d++)
        {
        Tree1    ( 110, 250);
        Tree2    ( 230, 260);
        Tree1    ( 350, 255);
        Tree2    ( 440, 253);
        Tree2    ( 590, 251);
        Tree1    ( 680, 259);
        Tree2    ( 760, 254);
        Tree1    ( 850, 253);
        Tree2    ( 970, 257);
        Tree1    (1000, 251);
        Tree2    (1140, 250);
        Tree2    (1240, 254);
        Tree1    (1380, 253);
        Tree2    (1480, 256);
        Tree2    (1540, 258);
        Tree2    (1640, 251);

        Boy      (495, 400, 1, 5, 0, 0);
        Penek    (800, 550, 2);
        KolobokS (800, 450, 15, 1);
        Zanoza   (800, 850, 1);

        txSleep (100);

        txSetFillColor (RGB(119, 221, 119));
        txClear ();
        }

//------Phrase 4

    Text(600, 350, 0, 0, 0, 0, "THE END", "", "", 5000, 255, 255, 255);

}

//========================================================================================
//========================================================================================
//========================================================================================

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
    txLine     (x - 100*size, y, x - 100*size, y + 200*size);

    txSetColor (TX_BLACK, tol);
    txLine     (x + 100*size, y, x + 100*size + mah*size, y + 200*size - mah*size);

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

void Snowman (long xSnowman, long ySnowman, int naclon,  double stick, double sizeSnowman)
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
    txLine       (xSnowman + 75*sizeSnowman + naclon, ySnowman - 100*sizeSnowman,
                  xSnowman + 75*sizeSnowman - naclon, ySnowman + 200*sizeSnowman);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(78, 102, 175));
    txCircle       (xSnowman + 75*sizeSnowman + naclon, ySnowman - 98*sizeSnowman, 5*sizeSnowman);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(78, 102, 190));
    txCircle       (xSnowman + 74*sizeSnowman + naclon, ySnowman - 99*sizeSnowman, 5*sizeSnowman);
    txCircle       (xSnowman + 75*sizeSnowman + naclon, ySnowman - 98*sizeSnowman, 5*sizeSnowman);
    txCircle       (xSnowman + 76*sizeSnowman + naclon, ySnowman - 99*sizeSnowman, 5*sizeSnowman);

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

//----------------------------------------------------

void Tree1 (long xTree1, long yTree1)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    txRectangle    (xTree1 - 10, yTree1,
                    xTree1 - 50, yTree1 + 100);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_GREEN);
    txEllipse      (xTree1 - 100,  yTree1 +  20,
                    xTree1 +  40,  yTree1 - 200);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_GREEN);
    txCircle       (xTree1 - 80, yTree1 - 150, 60);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_GREEN);
    txCircle       (xTree1 + 40, yTree1 - 150, 60);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_GREEN);
    txCircle       (xTree1 - 30, yTree1 - 200, 60);

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

//-------------------------------------------------------

void Tree2 (long xTree2, long yTree2)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    txRectangle    (xTree2 - 10, yTree2,
                    xTree2 - 50, yTree2 + 100);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(173, 255, 47));
    txEllipse      (xTree2 - 100,  yTree2 +  20,
                    xTree2 +  40,  yTree2 - 200);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(173, 255, 47));
    txCircle       (xTree2 - 80, yTree2 - 150, 60);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(173, 255, 47));
    txCircle       (xTree2 + 40, yTree2 - 150, 60);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(173, 255, 47));
    txCircle       (xTree2 - 30, yTree2 - 200, 60);
    }

//--------------------------------------------------------

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

//--------------------------------------------------------

void TreeBird (long xTreeBird, long yTreeBird)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    txRectangle    (xTreeBird - 10, yTreeBird,
                    xTreeBird - 50, yTreeBird + 100);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(173, 255, 47));
    txEllipse      (xTreeBird - 100,  yTreeBird +  20,
                    xTreeBird +  40,  yTreeBird - 200);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT STICK[3] = {{xTreeBird -  35, yTreeBird + 10},
                      {xTreeBird - 150, yTreeBird - 20},
                      {xTreeBird - 150, yTreeBird -  5}};
    txPolygon (STICK, 3);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(173, 255, 47));
    txCircle       (xTreeBird - 80, yTreeBird - 150, 60);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(173, 255, 47));
    txCircle       (xTreeBird + 40, yTreeBird - 150, 60);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(173, 255, 47));
    txCircle       (xTreeBird - 30, yTreeBird - 200, 60);
    }

//--------------------------------------------------------

void Penek(long xPenek, long yPenek, double sizePenek)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT penek[4] = {{ROUND(xPenek - 50*sizePenek), ROUND(yPenek - 10*sizePenek)}, {ROUND(xPenek + 50*sizePenek), ROUND(yPenek - 10*sizePenek)},
                      {ROUND(xPenek + 60*sizePenek), ROUND(yPenek + 40*sizePenek)}, {ROUND(xPenek - 60*sizePenek), ROUND(yPenek + 40*sizePenek)}};
    txPolygon (penek, 4);
    }

//---------------------------------------------------------

void Text (long xText, long yText, long xText1, long yText1, long xText2, long yText2, const char text[], const char text1[], const char text2[], long sleep, long R, long G, long B)
    {
    txSetColor   (RGB(0, 0, 0));
    txSelectFont ("Comic Sans MS", 50);
    txTextOut    (xText,  yText, text);
    txTextOut    (xText1, yText1, text1);
    txTextOut    (xText2, yText2, text2);


    txSleep (sleep);

    txSetFillColor (RGB(R, G, B));
    txClear ();
    }
