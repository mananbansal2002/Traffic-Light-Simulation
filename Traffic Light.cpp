
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void rect()
{
  int gd=DETECT ,gm,l,b,clr,clr2,pattern;
  printf("\nENTER LENGTH AND BREADTH OF THE RECTANGLE TO BE PRINTED :- \n");
  scanf("%d %d", &l, &b);
  printf("ENTER THE COLOUR OF THE BORDER OF THE RECTANGLE \n\n BLACk 0 \n BLUE 1 \n GREEN 2\n CYAN 3\n RED 4\n MAGENTA 5\n BROWN 6\n LIGHTGRAY 7\n DARKGRAY 8\n LIGHTBLUE 9\n LIGHTGREEN 10\n LIGHTCYAN 11\n LIGHTRED 12\n LIGHTMAGENTA 13\n YELLOW 14\n WHITE 15\n");
  scanf("%d",&clr);
  printf("ENTER THE COLOUR TO BE FILLED INSIDE THE RECTANGLE \n\n BLACk 0 \n BLUE 1 \n GREEN 2\n CYAN 3\n RED 4\n MAGENTA 5\n BROWN 6\n LIGHTGRAY 7\n DARKGRAY 8\n LIGHTBLUE 9\n LIGHTGREEN 10\n LIGHTCYAN 11\n LIGHTRED 12\n LIGHTMAGENTA 13\n YELLOW 14\n WHITE 15\n");
  scanf("%d",&clr2);
  printf("ENTER THE PATTERN TO BE FILLED WITH :- \n\n PATTERN              INT VALUES\n-------------------------------\n EMPTY_FILL 0\n SOLID_FILL 1\n LINE_FILL 2\n LTSLASH_FILL 3   \n SLASH_FILL 4\n BKSLASH_FILL 5\n LTBKSLASH_FILL 6 \n HATCH_FILL 7 \n XHATCH_FILL 8\n INTERLEAVE_FILL 9\n WIDE_DOT_FILL 10\n CLOSE_DOT_FILL 11\n USER_FILL 12 \n");
  scanf("%d",&pattern);
  initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
  setcolor(clr);
  setfillstyle(pattern,clr2);
  int midx=getmaxx()/2;
  int midy=getmaxy()/2;
  rectangle(midx-b,midy-l,midx+b,midy+l);
  floodfill(midx,midy,clr);
  getch();
  cleardevice();
}

void circ()
{
   int r,clr,clr2,pattern;
   printf("\nENTER RADIUS OF THE CIRCLE TO BE PRINTED :- \n");
   scanf("%d",&r);
   printf("ENTER THE COLOUR OF THE BORDER OF THE CIRCLE \n\n BLACk 0 \n BLUE 1 \n GREEN 2\n CYAN 3\n RED 4\n MAGENTA 5\n BROWN 6\n LIGHTGRAY 7\n DARKGRAY 8\n LIGHTBLUE 9\n LIGHTGREEN 10\n LIGHTCYAN 11\n LIGHTRED 12\n LIGHTMAGENTA 13\n YELLOW 14\n WHITE 15\n");
   scanf("%d",&clr);
   printf("ENTER THE COLOUR TO BE FILLED INSIDE THE CIRCLE \n\n BLACk 0 \n BLUE 1 \n GREEN 2\n CYAN 3\n RED 4\n MAGENTA 5\n BROWN 6\n LIGHTGRAY 7\n DARKGRAY 8\n LIGHTBLUE 9\n LIGHTGREEN 10\n LIGHTCYAN 11\n LIGHTRED 12\n LIGHTMAGENTA 13\n YELLOW 14\n WHITE 15\n");
   scanf("%d",&clr2);
   printf("ENTER THE PATTERN TO BE FILLED WITH :- \n\n PATTERN              INT VALUES\n-------------------------------\n EMPTY_FILL 0\n SOLID_FILL 1\n LINE_FILL 2\n LTSLASH_FILL 3   \n SLASH_FILL 4\n BKSLASH_FILL 5\n LTBKSLASH_FILL 6 \n HATCH_FILL 7 \n XHATCH_FILL 8\n INTERLEAVE_FILL 9\n WIDE_DOT_FILL 10\n CLOSE_DOT_FILL 11\n USER_FILL 12 \n");
   scanf("%d",&pattern);
   int gd=DETECT ,gm;
   initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
   setcolor(clr);
   int midx=getmaxx()/2;
   int midy=getmaxy()/2;
   circle(midx,midy,r);
   setfillstyle(pattern,clr2);
   floodfill(midx,midy,clr);
   getch();
   cleardevice();
}

void tl()
 {
   int gd=DETECT, gm;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   int midx=getmaxx()/2;
   int midy=getmaxy()/2;
   setcolor(4);
   circle(midx,midy-55,25);
   setfillstyle(1,4);
   floodfill(midx,midy-55,4);
   setcolor(15);
   rectangle(midx-50,midy-85,midx+50,midy+85);
   delay(1000);
   cleardevice();
   setcolor(14);
   circle(midx,midy,25);
   setfillstyle(1,14);
   floodfill(midx,midy,14);
   setcolor(15);
   rectangle(midx-50,midy-85,midx+50,midy+85);
   delay(1000);
   cleardevice();
   setcolor(2);
   circle(midx,midy+55,25);
   setfillstyle(1,2);
   floodfill(midx,midy+55,2);
   setcolor(15);
   rectangle(midx-50,midy-85,midx+50,midy+85);
   delay(1000);
   cleardevice();
 }

int main()
{
  clrscr();
  int count;
  do
  {
    int n=0;
    printf("CHOSSE ONE OF THE FOLLOWING :- \n 1. RECTANGLE \n 2.CIRCLE \n 3.TRAFFIC LIGHT SIMULATOR \n");
    scanf("%d",&n);
    if(n==1)
    rect();
    else if(n==2)
    circ();
    else if(n==3)
    tl();
    printf("GO TO MAIN MENU= '1' \n EXIT PROGRAM = '0'\n");
    scanf("%d",&count);
   }while(count==1);
  getch();
}
