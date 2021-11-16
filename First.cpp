#include "TXLib.h"
/*
x, y = ��������� ����
tol = ������� ������� ����� � Boy
rot = ������� ���  Kolobok
nac = ������ ������� � Snowman
rad = ������ ���� � Kolobok
ras = ������ �����
stick = ������ ����� � ���������
*/

void Bird    (int x, int y, int    ras,  double size              );
void Boy     (int x, int y, double size, double tol               );
void Snowman (int x, int y, int    nac,  double stick, double size);
void Kolobok (int x, int y, int    rot,  int    rad,   double size);

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

//-------------------�������� Boy
    /*
    int x = 500;
    int y = 500;
    double size = 1;
    for(double z = 0; z<=10; z++)
        {
        Boy(x, y, size, 5);
        x = x + 25*z;
        size = size + 1,5*z;

        txSleep(100);

        txSetFillColor (TX_WHITE);
        txClear();

        }
        */

//-------------------�������� Snowman
    /*
    int nac = 0;
    double size = 1;
    for(double z = 0; z<=10; z++)
        {
        Snowman(400, 500, nac, 3, size);
        nac = nac + z;
        //size = size + 1,5*z;

        txSleep(100);

        txSetFillColor (TX_WHITE);
        txClear();

        }
      */

//-------------------�������� Bird
    /*
    int ras = 0;
    double size = 1;
    int x = 1000;
    int y = 500;
    for(double z = 0; z<=10; z++)
        {
        Bird(x, y, ras, size);
        //ras = ras + z;
        //size = size + 1.5*z;
        //x = x + 10*z;
        //y = y + 10*z;
        txSleep(100);

        txSetFillColor (TX_WHITE);
        txClear();

        }
    */

//-------------------�������� Kolobok
    int rad = 10;
    double size = 1.5;
    int x = 1000;
    int y = 500;
    int rot = 5;
    for(double z = 0; z<=10; z++)
        {
        Bird(1000, 500, rot, rad, 1.5);
        rot = rot + z;
        rad = rad + z;
        //size = size + 1,5*z;
        //x = x + 10*z;
        //y = y + 10*z;
        txSleep(100);

        txSetFillColor (TX_WHITE);
        txClear();

        }
    return 0;
    }

void Boy (int x, int y, double size, double tol)
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
    txLine     (x - 100*size, y, x - 100*size, y + 200*size);

    txSetColor (TX_BLACK, tol);
    txLine     (x + 100*size, y, x + 100*size, y + 200*size);

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

void Bird (int x, int y, int ras, double size)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT body [4] {{x, y           }, {x + 100*size, y - 50*size},
                    {x, y + 100*size}, {x           , y     }};
    txPolygon      (body, 4);

    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_BROWN);
    POINT krilo1 [4] {{x, y           }, {x - 100*size,  y -  50*size},
                      {x, y + 100*size}, {x           ,  y      }};
    txPolygon        (krilo1, 4);
    txPolygon        (krilo1, 4);

    txSetColor       (TX_BLACK);
    txSetFillColor   (RGB(82, 92, 65));
    POINT krilo2 [4] {{x - 20*size, y           }, {x + 20*size, y           },
                      {x - 40*size, y + 100*size}, {x + 40*size, y + 100*size}};
    txPolygon        (krilo2, 4);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(82, 92, 65));
    txCircle       (x, y - 25*size, 25*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 15*size, y - 25*size, 5*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    POINT kluv [6] {{x - 10*size, y - 50*size}, {x -  5*size - ras, y - 75*size},
                    {x          , y - 55*size}, {x +  5*size + ras, y - 75*size},
                    {x + 10*size, y - 50*size}, {x - 10*size, y - 50*size      }};
    txPolygon      (kluv, 6);
    }

//----------------------------------------------------------
void Snowman(int x, int y, int nac, double stick, double size)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (x , y + 100*size, 100*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (x, y - 50*size, 50*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (x + 75*size, y + 25*size, 25*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(200, 226, 227));
    txCircle       (x - 75*size, y + 25*size, 25*size);

    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_ORANGE);
    POINT carrot [4] {{x, y - 60*size}, {x + 30*size, y - 50*size},
                      {x, y - 40*size}, {x          , y - 60*size}};
    txPolygon        (carrot, 4);

    txSetColor   (TX_BROWN, stick);
    txLine       (x + 75*size + nac, y - 100*size,
                  x + 75*size - nac, y + 200*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(78, 102, 175));
    txCircle       (x + 75*size + nac, y - 98*size, 5*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(78, 102, 190));
    txCircle       (x + 74*size + nac, y - 99*size, 5*size);
    txCircle       (x + 75*size + nac, y - 98*size, 5*size);
    txCircle       (x + 76*size + nac, y - 99*size, 5*size);

    txSetColor       (TX_BLACK);
    txSetFillColor   (RGB(106, 106, 130));
    POINT bucket [6] {{x - 50*size, y -  90*size}, {x - 40*size, y - 180*size},
                      {x + 40*size, y - 180*size}, {x + 50*size, y -  90*size},
                      {x + 50*size, y -  90*size}, {x - 50*size, y -  90*size}};
    txPolygon        (bucket, 6);
    }

//#---------------------------------------------
void Kolobok (int x, int y, int rot, int rad, double size)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle       (x, y, 100*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT nos [4]  {{x          , y          }, {x - 20*size, y + 20*size},
                    {x + 20*size, y + 20*size}, {x          , y          }};
    txPolygon      (nos, 4);


    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x - 25*size, y - 25*size, rad*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 25*size, y - 25*size, rad*size);

    txSetColor (TX_BLACK, rot);
    txLine     (x - 60*size, y + 70*size, x - 50*size, y + 70*size);
    txLine     (x - 50*size, y + 70*size, x - 40*size, y + 60*size);
    txLine     (x - 40*size, y + 60*size, x - 30*size, y + 60*size);
    txLine     (x - 30*size, y + 60*size, x - 20*size, y + 70*size);
    txLine     (x - 20*size, y + 70*size, x - 10*size, y + 70*size);
    txLine     (x - 10*size, y + 70*size, x          , y + 60*size);
    txLine     (x          , y + 60*size, x + 10*size, y + 70*size);
    txLine     (x + 10*size, y + 70*size, x + 20*size, y + 70*size);
    txLine     (x + 20*size, y + 70*size, x + 30*size, y + 60*size);
    txLine     (x + 30*size, y + 60*size, x + 40*size, y + 60*size);
    txLine     (x + 40*size, y + 60*size, x + 50*size, y + 70*size);
    txLine     (x + 50*size, y + 70*size, x + 60*size, y + 70*size);

    txSetColor       (TX_BLACK);
    txSetFillColor   (TX_BROWN);
    POINT sanosa [5] {{x - 100*size, y          }, {x - 110*size, y - 30*size},
                      {x - 110*size, y - 30*size}, {x - 115*size, y - 20*size},
                      {x - 115*size, y - 20*size}};
    txPolygon        (sanosa, 5);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB(61, 166, 201));
    POINT GG [5]   {{x - 15*size, y - 15*size}, {x - 10*size,y - 10*size},
                    {x - 13*size, y -  7*size}, {x - 18*size, y - 12*size},
                    {x - 15*size, y - 15*size}};
    txPolygon      (GG, 5);
    }

//#====================================================
