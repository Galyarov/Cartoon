#include "TXLib.h"
void Bird     (long xBird, long yBird, int ras, double sizeBird);
void Penek    (long xPenek, long yPenek, double sizePenek);
void Boy      (long x, long y, double size, double tol, int mah, int go);
void Snowman  (long xSnowman, long ySnowman, int naclon, double stick, double sizeSnowman);
void Kolobok  (long xKolobok, long yKolobok, int rot, int rad, double sizeKolobok);
void KolobokS (long xKolobokStandart, long yKolobokStandart, int radStandart, double sizeKolobokStandart);

void Zanoza   (long xZanoza,  long yZanoza, double sizeZanoza);

void Tree1     (long xTree1, long yTree1);
void Tree2     (long xTree2, long yTree2);
void Snowdrift (long xSnowdrift, long ySnowdrift, double sizeSnowdrift);
void TreeBird  (long xTreeBird, long yTreeBird);

void fon_scene1 ();
void fon_scene2 ();
void fon_scene3 ();
void fon_scene4 ();

void Text (long x, long y, long x1, long y1, long x2, long y2, const char text[], const char text1[], const char text2[], long sleep, long R, long G, long B);

//{--------------------------------------------
//! рисует Птичку
//! xBird - x coordinate calculation
//! yBird - y coordinate calculation
//! ras - changing the distance between the ends of the beak
//! sizeBird - size of Bird
//}--------------------------------------------

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
//{--------------------------------------------
//! рисуем Пенёк
//! xPenek - x coordinate calculation
//! yPenek - y coordinate calculation
//! sizePenek - size of stump
//}--------------------------------------------

void Penek(long xPenek, long yPenek, double sizePenek)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT penek[4] = {{ROUND(xPenek - 50*sizePenek), ROUND(yPenek - 10*sizePenek)}, {ROUND(xPenek + 50*sizePenek), ROUND(yPenek - 10*sizePenek)},
                      {ROUND(xPenek + 60*sizePenek), ROUND(yPenek + 40*sizePenek)}, {ROUND(xPenek - 60*sizePenek), ROUND(yPenek + 40*sizePenek)}};
    txPolygon (penek, 4);
    }

//{--------------------------------------------
//! рисуем Мальчика
//! x - x coordinate calculation
//! y - y coordinate calculation
//! size - size of Boy
//! tol - boy's line thickness
//! mah - how far the hand moves
//! go - distance between legs
//}--------------------------------------------

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

//{--------------------------------------------
//! рисуем Снеговика
//! xSnowman - x coordinate calculation
//! ySnowman - y coordinate calculation
//! naclon - tilt stick
//! stick - stick thickness
//! sizeSnowman - size of snowman
//}--------------------------------------------

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

//{--------------------------------------------
//! рисуем Колобка с улыбкой
//! xKolobokStandart - x coordinate calculation of bun with smile
//! yKolobokStandart - y coordinate calculation of bun with smile
//! radStandart - eye radius of bun with smile
//! sizeKolobokStandart - size of bun with smile
//}--------------------------------------------

void KolobokS (long xKolobokStandart, long yKolobokStandart, int radStandart, double sizeKolobokStandart)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle       (xKolobokStandart, yKolobokStandart, 100*sizeKolobokStandart);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT nos [4]  {{ROUND(xKolobokStandart), ROUND(yKolobokStandart)},   
                    {ROUND(xKolobokStandart - 20*sizeKolobokStandart), ROUND(yKolobokStandart + 20*sizeKolobokStandart)},
                    {ROUND(xKolobokStandart + 20*sizeKolobokStandart), ROUND(yKolobokStandart + 20*sizeKolobokStandart)},  
                    {ROUND(xKolobokStandart),  ROUND(yKolobokStandart)}};
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

//{--------------------------------------------
//! рисуем Колобка с занозой
//! xKolobok - x coordinate calculation of bun with a splinter
//! yKolobok - y coordinate calculation of bun with a splinter
//! rot - mouth line thickness of bun with a splinter
//! rad - radius of bun with a splinter
//! sizeKolobok -size of bun with a splinter
//}--------------------------------------------

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

//{--------------------------------------------
//! рисуем Занозу
//! xZanoza - x coordinate calculation
//! yZanoza - y coordinate calculation 
//! sizeZanoza - size of splinter
//}--------------------------------------------

void Zanoza (long xZanoza, long yZanoza, double sizeZanoza)
    {
    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_BROWN);
    POINT sanosa [5] {{ROUND(xZanoza - 100*sizeZanoza), ROUND(yZanoza)           }, {ROUND(xZanoza - 110*sizeZanoza), ROUND(yZanoza - 30*sizeZanoza)},
                      {ROUND(xZanoza - 110*sizeZanoza), ROUND(yZanoza - 30*sizeZanoza)}, {ROUND(xZanoza - 115*sizeZanoza), ROUND(yZanoza - 20*sizeZanoza)},
                      {ROUND(xZanoza - 115*sizeZanoza), ROUND(yZanoza - 20*sizeZanoza)}};
    txPolygon        (sanosa, 5);
    }


//{--------------------------------------------
//! рисуем Дерево 1 вариант
//! xTree1 - x coordinate calculation
//! yTree1 - y coordinate calculation 
//}--------------------------------------------

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

//{--------------------------------------------
//! рисуем Дерево 2 вариант
//! xTree2 - x coordinate calculation
//! yTree2 - y coordinate calculation
//}--------------------------------------------

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

//{--------------------------------------------
//! рисуем Сугроб
//! xSnowdrift - x coordinate calculation
//! ySnowdrift - y coordinate calculation
//! sizeSnowdrift - size of snowdrift
//}--------------------------------------------

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

//{--------------------------------------------
//! рисуем Дерево для птицы
//! xTreeBird - x coordinate calculation
//! yTreeBird - y coordinate calculation
//}--------------------------------------------

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

//{--------------------------------------------
//! рисуем Фон для сцены 1
//}--------------------------------------------

void fon_scene1 ()
    {
    Tree1 (1400, 300);
    Tree2 ( 150, 700);
    Tree1 ( 162, 200);
    Tree1 (1300, 250);
    Tree2 (1500, 650);
    Tree2 ( 750, 250);
    }

//{--------------------------------------------
//! рисуем Фон для сцены 2
//}--------------------------------------------

void fon_scene2 ()
    {
    Snowdrift ( 200, 200, 1);
    Snowdrift (1350, 200, 0.5);
    Snowdrift ( 150, 900, 1.2);
    Snowdrift (1400, 900, 1);
    }

//{--------------------------------------------
//! рисуем Фон для сцены 3
//}--------------------------------------------

void fon_scene3 ()
    {
    Tree1 ( 100, 100);
    Tree2 (  50, 250);
    Tree1 (  90, 300);
    Tree1 ( 110, 390);
    Tree2 (  60, 500);
    Tree1 ( 120, 760);
    Tree1 (1300, 220);
    Tree2 (1500, 450);
    Tree2 (1450, 650);
    }

//{--------------------------------------------
//! рисуем Фон для сцены 4
//}--------------------------------------------

void fon_scene4 ()
    {
    Tree1 ( 110, 250);
    Tree2 ( 230, 260);
    Tree1 ( 350, 255);
    Tree2 ( 440, 253);
    Tree2 ( 590, 251);
    Tree1 ( 680, 259);
    Tree2 ( 760, 254);
    Tree1 ( 850, 253);
    Tree2 ( 970, 257);
    Tree1 (1000, 251);
    Tree2 (1140, 250);
    Tree2 (1240, 254);
    Tree1 (1380, 253);
    Tree2 (1480, 256);
    Tree2 (1540, 258);
    Tree2 (1640, 251);
    }

//{--------------------------------------------
//! рисуем Текст
//}--------------------------------------------

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
