#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>
int gd,gm,option;
class hanoi
{
public:
void startpage()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setbkcolor(5);
setcolor(14);

int i;
char a[5];
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(getmaxx()/2-200,getmaxy()/2-150,"WELCOME TO THE TOWERS OF HANOI GAME");
outtextxy((getmaxx()/2)-50,(getmaxy()/2)-50,"........PRESS ENTER TO CONTINUE");
getch();
cleardevice();
settextjustify(CENTER_TEXT,CENTER_TEXT);
settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
setcolor(14);
for(i=5;i>=0;i--)
{ sprintf(a,"%d",i);
outtextxy(getmaxx()/2,getmaxy()/2,a);
delay(1000);
if(i==0)
break;
cleardevice();
}
closegraph();

}

void options()
{
textcolor(2);
gotoxy(30,5);
cprintf("OPTIONS");
gotoxy(1,6);
cprintf("\n1]2 rings\n");
gotoxy(1,7);
cprintf("2]3 rings\n");
gotoxy(1,8);
cprintf("3]4 rings\n");
gotoxy(1,9);
cprintf("4]5 rings\n");
gotoxy(1,10);
cprintf("5]6 rings\n");
gotoxy(1,11);
cprintf("6]7 rings\n");
gotoxy(1,12);
cprintf("7]8 rings\n");
gotoxy(1,13);
cprintf("8]9 rings\n");
gotoxy(1,14);
cprintf("9]10 rings\n");
gotoxy(1,15);
cprintf("10]solutions\n");
gotoxy(1,16);
cprintf("enter your option");
cin>>option;

}

void 3_rings()
{int gd
}
};

void main()
{hanoi h;
clrscr();
h.startpage();
clrscr();
h.options();

}