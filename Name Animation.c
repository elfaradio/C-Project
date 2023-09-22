#include <stdio.h>
#include "windows.h"
void gotoXY(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}

int main() {
    int time=100;
    system("cls");


    int x1=0,y1=0,len=8;
    for(int i=0;i<8;i++)
    {
          gotoXY(x1, y1+i);
        printf("*");fflush(stdout);
        Sleep(time);

    }
    for(int i=0;i<8;i++)
    {

    gotoXY(x1+i,y1);
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<8;i++)
    {

    gotoXY(x1+i,y1+3);
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<8;i++)
    {

    gotoXY(x1+8+6+i,y1+i);
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<8;i++)
    {

    gotoXY((x1+8+6)-i,y1+i);
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<7;i++)
    {

    gotoXY((x1+11)+i,y1+3);
    printf("*");fflush(stdout);
    Sleep(time);
    }

    for(int i=0;i<8;i++)
    {

    gotoXY((x1+22),y1+i);
    printf("*");fflush(stdout);
    Sleep(time);
    }
     for(int i=0;i<8;i++)
    {

    gotoXY((x1+22+i),y1);
    printf("*");fflush(stdout);
    Sleep(time);
    }
     for(int i=0;i<4;i++)
    {

    gotoXY((x1+22+8),y1+i);
    printf("*");fflush(stdout);
    Sleep(time);
    }
     for(int i=0;i<8;i++)
    {

    gotoXY((x1+22+8)-i,y1+3);
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<4;i++)
    {

    gotoXY((x1+24)+i,(y1+4)+i);
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<8;i++)
    {

    gotoXY((x1+32),(y1+i));
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<8;i++)
    {

    gotoXY((x1+32)+i,(y1+3));
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<8;i++)
    {

    gotoXY((x1+40),(y1+i));
    printf("*");fflush(stdout);
    Sleep(time);
    }
     for(int i=0;i<8;i++)
    {

    gotoXY((x1+41)+i,(y1+7)-i);
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<8;i++)
    {

    gotoXY((x1+48)+i,(y1+i));
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<7;i++)
    {

    gotoXY((x1+51)-i,(y1+3));
    printf("*");fflush(stdout);
    Sleep(time);
    }
     for(int i=0;i<8;i++)
    {

    gotoXY((x1+57),(y1+i));
    printf("*");fflush(stdout);
    Sleep(time);
    }
    for(int i=0;i<4;i++)
    {

    gotoXY((x1+57)+i,(y1+i));
    printf("*");fflush(stdout);
    Sleep(time);
    }
     for(int i=0;i<3;i++)
    {

    gotoXY((x1+61)-i,(y1+4)+i);
    printf("*");fflush(stdout);
    Sleep(time);
    }












    getchar();
    return 0;
}
