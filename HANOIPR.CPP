#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<stdio.h>
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

for(i=3;i>=0;i--)
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
gotoxy(1,7);
cprintf("1]3 rings\n");
gotoxy(1,8);
cprintf("2]4 rings\n"	);
gotoxy(1,9);
cprintf("3]5 rings\n");
gotoxy(1,10);
cprintf("4]6 rings\n");
gotoxy(1,11);
cprintf("5]7 rings\n");
gotoxy(1,12);
cprintf("enter your option");

}

};

class Three_rings
{ public:

  int r1,r2,r3,f1,f2,f3,d1,d2,d3,t1,t2,t3,to,from,m;

 void draw_rings_on_source_rod(int f1,int f2,int f3,int t1,int t2,int t3,int d1,int d2,int d3)
 { int x=50,y=220,z=200,v=200;
   outtextxy(90,100,"Source");
   setfillstyle(SOLID_FILL,DARKGRAY);
   bar(100,120,140,220);

   if(f1==1)
  { setfillstyle(SOLID_FILL,BLUE);
   bar(x,y,z,v);}
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f2==1)
   {setfillstyle(SOLID_FILL,RED);
    bar(x+20,y-50,z-20,v-1); }
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f3==1)
   {setfillstyle(SOLID_FILL,BLUE);
   bar(x+40,y-80,z-40,v-31);
   }
   setfillstyle(SOLID_FILL,DARKGRAY);
 int a=430,b=220,c=580,d=200;
 outtextxy(460,100,"Auxillary rod");
 bar(520,120,480,220);
  if(t1==1)
 { setfillstyle(SOLID_FILL,BLUE);
  bar(a,b,c,d); }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t2==1)
 { setfillstyle(SOLID_FILL,RED);
  bar(a+15,b-50,c-15,d-1); }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t3==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(a+30,b-75,c-30,d-31);  }
  setfillstyle(SOLID_FILL,DARKGRAY);


 int e=260,f=420,g=390,h=400;
 outtextxy(270,300,"Destination rod");
 bar(300,420,340,320);
  if(d1==1)
 { setfillstyle(SOLID_FILL,BLUE);
  bar(e,f,g,h);}
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(d2==1)
  {setfillstyle(SOLID_FILL,RED);
  bar(e+10,f-50,g-10,h-1); }
  setfillstyle(SOLID_FILL,DARKGRAY);

 if(d3==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(e+25,f-75,g-25,h-31);}
  setfillstyle(SOLID_FILL,DARKGRAY);

}
int ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3;
  void show_three()
  {	int gd=DETECT,gm ;
	ff1=1;ff2=1;ff3=1;tt1=0;tt2=0;tt3=0;dd1=0;dd2=0;dd3=0;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setbkcolor(8);
	draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
	getch();
    }


void user()
  {
   setbkcolor(15);
   gotoxy(5,2);
   cout<<"from :- "; cin>>from;
   gotoxy(5,4);
   cout<<"to :- ";cin>>to;
   draw();
   }
   void draw()
   {
    if(ff1==1 && tt2==1 && tt3==1 && ff2==ff3==tt1==dd1==dd2==dd3==0) //condition for 1 to 3
    {dd1=1;tt2==1;tt3==1;ff2=ff3=ff1=tt1=dd2=dd3=0;
    draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
    }
    if(ff1==1 && dd2==1 && dd3==1 && ff2==ff3==dd1==tt1==tt2==tt3==0) //condition for 1 to 2
    {tt1=1;dd2=dd3=1;ff2=ff3=dd1=ff1=tt2=tt3=0;
    draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
    }

    if(dd1==1 && tt2==1 && tt3==1 && dd2==dd3==tt1==ff1==ff2==f33==0) //condition for 3 to 1
    {ff1=1;dd1=0=dd2=dd3=tt1=ff1=ff2=ff3;tt2=tt3=1;
    draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
    }
    if(dd1==1 && ff2==1 && ff3==1 && ff1==tt1==tt2==tt3==dd2==dd3==0) //condition for 3 to 2
    {tt1=1;dd1=0=ff1=tt1=tt2=tt3=dd2=dd3;ff2=ff3=1;
    draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
    }   //condition for 2 to 1 && 2 to 3
    if(tt1==1 && dd2==1 && dd3==1 && ff1==ff2==ff3==tt2==tt3==dd1==0) //condition for 2 to 1
    {ff1=1;ff2=ff3=tt1=tt2=tt3=dd1=0;dd2=dd3=1;
    draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
    }
    if(tt1==1 && ff2==1 && ff3==1 && ff1==tt2==tt3==dd1==dd2==dd3==0) //condition for 2 to 3
    {tt1=0;dd1=1;ff1=tt2=tt3=dd2=dd3=0;ff2=ff3=1;
    draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
    }

   }


/*
void draw()
{ if(from==1 && to==2)
  {
    if(ff1==1 && ff2==1 && ff3==1 && tt1==0 && tt2==0 && tt3==0 && dd1==0 && dd2==0 && dd3==0)
    {ff1=1;ff2=1;ff3=0;tt1=0;tt2=0;tt3=1;dd1=0;dd2=0;dd3=0;
     draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);

    }
    else if(ff1==1 && ff2==1 && ff3==0 && tt1==0 && tt2==0 && tt3==1 && dd1==0 && dd2==0 && dd3==0)
    {gotoxy(10,3);
     cout<<"Invalid move";
     getch();user();
    }
    else if(ff1==1 && ff2==1 && ff3==0 && tt1==0 && tt2==0 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
    {ff1=1;ff2=0;ff3=0;tt1=0;tt2=1;tt3=0;dd1=0;dd2=0;dd3=1;
     draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
      user();
    }
    else if(ff1==1 && ff2==0 && ff3==0 && tt1==0 && tt2==1 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
    {gotoxy(10,3);
     cout<<"Invalid move";
     getch();      user();
    }
    else if(ff1==1 && ff2==1 && ff3==0 && tt1==0 && tt2==0 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
    {
    ff1=1;ff2=0;ff3=0;tt1=0;tt2=1;tt3=0;dd1=0;dd2=0;dd3=1;
     draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
      user();}
    else
    {gotoxy(10,3);
     cout<<"Invalid move";
     getch();         user();
    }
    cleardevice();
    draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
    user();
  }
  if(from==1 && to==3)
  {
    if(ff1==1 && ff2==1 && ff3==1 && tt1==0 && tt2==0 && tt3==0 && dd1==0 && dd2==0 && dd3==0)
    {ff1=1;ff2=1;ff3=0;tt1=0;tt2=0;tt3=0;dd1=0;dd2=0;dd3=1;
     draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
     user();
    }
    else if(ff1==1 && ff2==1 && ff3==0 && tt1==0 && tt2==0 && tt3==1 && dd1==0 && dd2==0 && dd3==0)
    { ff1=1;ff2=0;ff3=0;tt1=0;tt2=0;tt3=1;dd1=0;dd2=0;dd3=1;
     draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
    user();
     }
   else if(ff1==0 && ff2==1 && ff3==1 && tt1==0 && tt2==0 && tt3==0 && dd1==1 && dd2==0 && dd3==1)
   {ff1=0;ff2=1;ff3=0;tt1=0;tt2=0;tt3=0;dd1=1;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
   }
    else if(ff1==0 && ff2==1 && ff3==1 && tt1==0 && tt2==0 && tt3==1 && dd1==0 && dd2==0 && dd3==0)
   {ff1=1;ff2=0;ff3=0;tt1=0;tt2=0;tt3=1;dd1=0;dd2=1;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
   }
    else if(ff1==0 && ff2==0 && ff3==1 && tt1==0 && tt2==0 && tt3==0 && dd1==1 && dd2==1 && dd3==0)
   {ff1=0;ff2=0;ff3=0;tt1=0;tt2=0;tt3=0;dd1=1;dd2=1;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   cleardevice();
   gotoxy(10,10);
   cout<<"YOU WIN!!!";
   }

    else if(ff1==0 && ff2==1 && ff3==0 && tt1==0 && tt2==1 && tt3==1 && dd1==0 && dd2==0 && dd3==0)
   {ff1=0;ff2=1;ff3=0;tt1=0;tt2=0;tt3=0;dd1=1;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
   }

    else if(ff1==0 && ff2==1 && ff3==1 && tt1==0 && tt2==0 && tt3==0 && dd1==1 && dd2==0 && dd3==1)
   {ff1=0;ff2=1;ff3=0;tt1=0;tt2=0;tt3=0;dd1=1;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
   }

    else if(ff1==1 && ff2==0 && ff3==0 && tt1==1 && tt2==1 && tt3==0 && dd1==0 && dd2==0 && dd3==0)
   {ff1=0;ff2=0;ff3=0;tt1=1;tt2=1;tt3=0;dd1=0;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
   }
    else if(ff1==0 && ff2==1 && ff3==1 && tt1==1 && tt2==0 && tt3==0 && dd1==0 && dd2==0 && dd3==0)
   {ff1=0;ff2=1;ff3=0;tt1=1;tt2=0;tt3=0;dd1=0;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
   }
    else if(ff1==0 && ff2==1 && ff3==0 && tt1==1 && tt2==0 && tt3==1 && dd1==0 && dd2==0 && dd3==0)
   {ff1=0;ff2=0;ff3=0;tt1=1;tt2=0;tt3=1;dd1=0;dd2=1;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
   }

  else if(ff1==0 && ff2==0 && ff3==1 && tt1==0 && tt2==1 && tt3==0 && dd1==1 && dd2==0 && dd3==0)
  {ff1=0;ff2=0;ff3=1;tt1=0;tt2=1;tt3=0;dd1=1;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
  }
   else
   {gotoxy(5,10);
    cout<<"Invalid move";
    getch();
    user();
   }
 }

 else if(from==2 && to==1)
 {if(ff1==0 && ff2==0 && ff3==0 && tt1==1 && tt2==1 && tt3==1 && dd1==0 && dd2==0 && dd3==0)
  {ff1=0;ff2=0;ff3=1;tt1=1;tt2=1;tt3=0;dd1=0;dd2=1;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
  }
  else if(ff1==0 && ff2==0 && ff3==0 && tt1==1 && tt2==1 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
 { ff1=0;ff2=1;ff3=0;tt1=1;tt2=0;tt3=0;dd1=0;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }

 else if(ff1==0 && ff2==0 && ff3==0 && tt1==0 && tt2==1 && tt3==1 && dd1==1 && dd2==0 && dd3==0)
 { ff1=0;ff2=0;ff3=1;tt1=0;tt2=1;tt3=0;dd1=1;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }

 else if(ff1==0 && ff2==2 && ff3==0 && tt1==0 && tt2==0 && tt3==1 && dd1==1 && dd2==0 && dd3==0)
 { ff1=0;ff2=1;ff3=1;tt1=0;tt2=0;tt3=0;dd1=1;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else if(ff1==0 && ff2==1 && ff3==0 && tt1==0 && tt2==0 && tt3==1 && dd1==1 && dd2==0 && dd3==0)
 { ff1=0;ff2=1;ff3=1;tt1=0;tt2=0;tt3=0;dd1=1;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else if(ff1==0 && ff2==0 && ff3==0 && tt1==1 && tt2==1 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
 { ff1=0;ff2=1;ff3=0;tt1=1;tt2=0;tt3=0;dd1=0;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
  }

  else if(ff1==1 && ff2==0 && ff3==0 && tt1==0 && tt2==1 && tt3==1 && dd1==1 && dd2==0 && dd3==0)
 { ff1=1;ff2=0;ff3=1;tt1=0;tt2=1;tt3=0;dd1=0;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else if(ff1==1 && ff2==0 && ff3==0 && tt1==0 && tt2==0 && tt3==1 && dd1==0 && dd2==1 && dd3==0)
 { ff1=1;ff2=0;ff3=1;tt1=0;tt2=0;tt3=0;dd1=0;dd2=1;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else
 {gotoxy(5,10);
 cout<<"INVALID MOVE";
 getch();
 user();
 }

 }

 else if(from==2 && to==3)
 { if(ff1==0 && ff2==0 && ff3==0 && tt1==1 && tt2==1 && tt3==1 && dd1==0 && dd2==0 && dd3==0)
 { ff1=0;ff2=0;ff3=0;tt1=1;tt2=1;tt3=0;dd1=0;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
else if(ff1==0 && ff2==0 && ff3==1 && tt1==1 && tt2==1 && tt3==0 && dd1==0 && dd2==0 && dd3==0)
 { ff1=0;ff2=0;ff3=1;tt1=1;tt2=0;tt3=0;dd1=0;dd2=1;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else if(ff1==0 && ff2==0 && ff3==0 && tt1==0 && tt2==1 && tt3==1 && dd1==1 && dd2==0 && dd3==0)
 { ff1=0;ff2=0;ff3=0;tt1=0;tt2=1;tt3=0;dd1=1;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else if(ff1==0 && ff2==1 && ff3==0 && tt1==0 && tt2==0 && tt3==1 && dd1==1 && dd2==0 && dd3==0)
 { ff1=0;ff2=1;ff3=0;tt1=0;tt2=0;tt3=0;dd1=1;dd2=0;dd3=1;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else if(ff1==0 && ff2==0 && ff3==1 && tt1==0 && tt2==0 && tt3==0 && dd1==1 && dd2==1 && dd3==0)
 { ff1=0;ff2=0;ff3=1;tt1=0;tt2=0;tt3=0;dd1=1;dd2=1;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else
 {gotoxy(5,10);
 cout<<" invalid move";
 getch();
 user();

 }
 }
 else if(from==3 && to==1)
 {if(ff1==0 && ff2==0 && ff3==0 && tt1==0 && tt2==0 && tt3==1 && dd1==1 && dd2==1 && dd3==0)
 { ff1=0;ff2=1;ff3=0;tt1=0;tt2=0;tt3=1;dd1=1;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
else  if(ff1==0 && ff2==0 && ff3==0 && tt1==0 && tt2==1 && tt3==1 && dd1==1 && dd2==0 && dd3==0)
 { ff1=1;ff2=0;ff3=0;tt1=0;tt2=1;tt3=1;dd1=0;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else if(ff1==1 && ff2==0 && ff3==0 && tt1==0 && tt2==1 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
 { ff1=1;ff2=0;ff3=1;tt1=0;tt2=1;tt3=0;dd1=0;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
else if(ff1==0 && ff2==0 && ff3==0 && tt1==1 && tt2==1 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
 { ff1=1;ff2=0;ff3=1;tt1=0;tt2=1;tt3=0;dd1=0;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else if(ff1==0 && ff2==0 && ff3==0 && tt1==1 && tt2==1 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
 { ff1=0;ff2=0;ff3=0;tt1=1;tt2=1;tt3=0;dd1=0;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }

else if(ff1==0 && ff2==1 && ff3==0 && tt1==1 && tt2==0 && tt3==0 && dd1==0 && dd2==0 && dd3==1)
 { ff1=0;ff2=1;ff3=1;tt1=1;tt2=0;tt3=0;dd1=0;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 else
 {gotoxy(5,10);
 cout<<"INVALID MOVE";
 getch();
 user();
 }
}
else if(from==3 && to==2)
 {if(ff1==0 && ff2==0 && ff3==1 && tt1==0 && tt2==1 && tt3==0 && dd1==1 && dd2==0 && dd3==0)
 { ff1=1;ff2=0;ff3=0;tt1=0;tt2=1;tt3=1;dd1=0;dd2=0;dd3=0;
   draw_rings_on_source_rod(ff1,ff2,ff3,tt1,tt2,tt3,dd1,dd2,dd3);
   user();
 }
 }
 else
 {gotoxy(5,10);
 cout<<"invalid move";
 getch();
 }

}
/**/


void step_one()
{ draw_rings_on_source_rod(1,1,0,0,0,0,0,0,1);
 getch();
 draw_rings_on_source_rod(1,0,0,0,1,0,0,0,1);
 getch();
 draw_rings_on_source_rod(1,0,0,0,1,1,0,0,0);
 getch();
 draw_rings_on_source_rod(0,0,0,0,1,1,1,0,0);
 getch();
 draw_rings_on_source_rod(0,0,1,0,1,0,1,0,0);
 getch();
 draw_rings_on_source_rod(0,0,1,0,0,0,1,1,0);
 getch();
 draw_rings_on_source_rod(0,0,0,0,0,0,1,1,1);
 getch();
}
};

class Four_rings
{public:
int f1,f2,f3,f4,t1,t2,t3,t4,d1,d2,d3,d4;
void draw_rings(int f1,int f2,int f3,int f4,int t1,int t2,int t3,int t4,int d1,int d2,int d3,int d4)
{int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setbkcolor(5);
setcolor(14);
   int x=50,y=220,z=200,v=200;
   outtextxy(90,60,"Source rod");
   setfillstyle(SOLID_FILL,DARKGRAY);
   bar(100,100,140,220);

   if(f1==1)
  { setfillstyle(SOLID_FILL,BLUE);
   bar(x,y,z,v);}
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f2==1)
   {setfillstyle(SOLID_FILL,RED);
    bar(x+20,y-50,z-20,v-1); }
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f3==1)
   {setfillstyle(SOLID_FILL,BLUE);
   bar(x+40,y-80,z-40,v-31);
   }
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f4==1)
   {setfillstyle(SOLID_FILL,RED);
   bar(x+45,y-105,z-55,v-60);
   }
  setfillstyle(SOLID_FILL,DARKGRAY);
 int a=430,b=220,c=580,d=200;
 outtextxy(460,60,"Auxillary rod");
 bar(520,100,480,220);
  if(t1==1)
 { setfillstyle(SOLID_FILL,BLUE);
  bar(a,b,c,d); }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t2==1)
 { setfillstyle(SOLID_FILL,RED);
  bar(a+15,b-50,c-15,d-1); }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t3==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(a+30,b-75,c-30,d-31);  }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t4==1)
  {setfillstyle(SOLID_FILL,RED);
   bar(a+45,b-105,c-53,d-56);
  }setfillstyle(SOLID_FILL,DARKGRAY);

 int e=260,f=420,g=390,h=400;
 outtextxy(270,260,"Destination rod");
 bar(300,400,340,300);
  if(d1==1)
 { setfillstyle(SOLID_FILL,BLUE);
  bar(e,f,g,h);}
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(d2==1)
  {setfillstyle(SOLID_FILL,RED);
  bar(e+10,f-50,g-10,h-1); }
  setfillstyle(SOLID_FILL,DARKGRAY);

 if(d3==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(e+25,f-75,g-25,h-31);}
  setfillstyle(SOLID_FILL,DARKGRAY);
 if(d4==1)
 {setfillstyle(SOLID_FILL,RED);
  bar(e+35,f-105,g-45,h-56);}
  setfillstyle(SOLID_FILL,DARKGRAY);
}
void call()
{
draw_rings(1,1,1,1,0,0,0,0,0,0,0,0);
getch();
cleardevice();
draw_rings(1,1,1,0,0,0,0,1,0,0,0,0);
getch();
cleardevice();
draw_rings(1,1,0,0,0,0,0,1,0,0,1,0);
getch();
cleardevice();
draw_rings(1,1,0,0,0,0,0,0,0,0,1,1);
getch();
cleardevice();
draw_rings(1,0,0,0,0,1,0,0,0,0,1,1);
getch();
cleardevice();
draw_rings(1,0,0,1,0,1,0,0,0,0,1,0);
getch();
cleardevice();
draw_rings(1,0,0,0,0,1,1,1,0,0,0,0);
getch();
cleardevice();
draw_rings(0,0,0,0,0,1,1,1,1,0,0,0);
getch();
cleardevice();
draw_rings(0,0,1,0,0,1,0,0,1,0,0,1);
getch();
cleardevice();
draw_rings(0,0,1,1,0,1,0,0,1,0,0,0);
getch();
cleardevice();
draw_rings(0,0,1,1,0,0,0,0,1,1,0,0);
getch();
cleardevice();
draw_rings(0,0,0,0,0,0,0,1,1,1,1,0);
getch();
cleardevice();
draw_rings(0,0,0,0,0,0,0,0,1,1,1,1);
getch();


cleardevice();
}
} ;

class Five_rings
{
  public:


void draw_rings(int f1,int f2,int f3,int f4,int f5,int t1,int t2,int t3,int t4,int t5,int d1,int d2,int d3,int d4,int d5)
{int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setbkcolor(5);
setcolor(14);
   int x=50,y=220,z=200,v=200;
   outtextxy(90,40,"Source");
   setfillstyle(SOLID_FILL,DARKGRAY);
   bar(110,60,130,220);

   if(f1==1)
  { setfillstyle(SOLID_FILL,BLUE);
   bar(x,y,z,v);}
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f2==1)
   {setfillstyle(SOLID_FILL,RED);
    bar(x+20,y-50,z-20,v-1); }
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f3==1)
   {setfillstyle(SOLID_FILL,BLUE);
   bar(x+40,y-80,z-40,v-31);
   }
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f4==1)
   {setfillstyle(SOLID_FILL,RED);
   bar(x+45,y-105,z-55,v-60);
   }setfillstyle(SOLID_FILL,DARKGRAY);
  if(f5==1)
  {setfillstyle(SOLID_FILL,BLUE);
   bar(x+50,y-106,z-60,v-110);
  }setfillstyle(SOLID_FILL,DARKGRAY);

 int a=430,b=220,c=580,d=200;
 outtextxy(460,40,"Auxillary rod");
 bar(510,60,490,220);
  if(t1==1)
 { setfillstyle(SOLID_FILL,BLUE);
  bar(a,b,c,d); }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t2==1)
 { setfillstyle(SOLID_FILL,RED);
  bar(a+15,b-50,c-15,d-1); }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t3==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(a+30,b-75,c-30,d-31);  }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t4==1)
  {setfillstyle(SOLID_FILL,RED);
   bar(a+45,b-105,c-53,d-56);
  }setfillstyle(SOLID_FILL,DARKGRAY);
  if(t5==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(a+50,b-106,c-60,d-110);
  }setfillstyle(SOLID_FILL,DARKGRAY);

 int e=260,f=420,g=390,h=400;
 outtextxy(270,240,"Destination rod");
 bar(307,380,330,280);
  if(d1==1)
 { setfillstyle(SOLID_FILL,BLUE);
  bar(e,f,g,h);}
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(d2==1)
  {setfillstyle(SOLID_FILL,RED);
  bar(e+10,f-50,g-10,h-1); }
  setfillstyle(SOLID_FILL,DARKGRAY);

 if(d3==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(e+25,f-75,g-25,h-31);}
  setfillstyle(SOLID_FILL,DARKGRAY);
 if(d4==1)
 {setfillstyle(SOLID_FILL,RED);
  bar(e+35,f-105,g-45,h-56);}
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(d5==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(e+40,f-106,g-50,h-110);
 }setfillstyle(SOLID_FILL,DARKGRAY);
}


void draw()
{
draw_rings(1,1,1,1,1,0,0,0,0,0,0,0,0,0,0);getch();
draw_rings(1,1,1,1,0,0,0,0,0,0,0,0,0,0,1);getch();
draw_rings(1,1,1,0,0,0,0,0,1,0,0,0,0,0,1);getch();
draw_rings(1,1,1,0,0,0,0,0,1,1,0,0,0,0,0);getch();
draw_rings(1,1,0,0,0,0,0,0,1,1,0,0,1,0,0);getch();
draw_rings(1,1,0,0,1,0,0,0,1,0,0,0,1,0,0);getch();
draw_rings(1,1,0,0,1,0,0,0,0,0,0,0,1,1,0);getch();
draw_rings(1,1,0,0,0,0,0,0,0,0,0,0,1,1,1);getch();
draw_rings(1,0,0,0,0,0,1,0,0,0,0,0,1,1,1);getch();
draw_rings(1,0,0,0,0,0,1,0,0,1,0,0,1,1,0);getch();
draw_rings(1,0,0,1,0,0,1,0,0,1,0,0,1,0,0);getch();
draw_rings(1,0,0,1,1,0,1,0,0,0,0,0,1,0,0);getch();
draw_rings(1,0,0,1,1,0,1,1,0,0,0,0,0,0,0);getch();
gotoxy(1,10);cout<<"YOU HAVE RECAHED 50% LET'S SEE THE NEXT ONE";   getch();
 //not running
draw_rings(1,0,0,1,0,0,1,1,0,0,0,0,0,0,1);getch();
cout<<"YOU HAVE RECAHED 50% LET'S SEE THE NEXT ONE";
draw_rings(1,0,0,0,0,0,1,1,1,0,0,0,0,0,1);getch();
draw_rings(1,0,0,0,0,0,1,1,1,1,0,0,0,0,0);getch();
draw_rings(0,0,0,0,0,0,1,1,1,1,1,0,0,0,0);getch();
draw_rings(0,0,0,0,1,0,1,1,1,0,1,0,0,0,0);getch();
draw_rings(0,0,0,0,1,0,1,1,0,0,1,0,0,1,0);getch();
draw_rings(0,0,0,0,0,0,1,1,0,0,1,0,0,1,1);getch();
draw_rings(0,0,0,1,0,0,1,1,0,0,0,0,0,1,1);getch();
draw_rings(0,0,0,0,0,0,0,0,1,1,1,1,1,0,0);getch();
draw_rings(0,0,0,0,1,0,0,0,1,0,1,1,1,0,0);getch();
draw_rings(0,0,0,0,1,0,0,0,0,0,1,1,1,1,0);getch();
draw_rings(0,0,0,0,0,0,0,0,0,0,1,1,1,1,1);getch();
  getch();
cleardevice();
}
};

class Six_rings
{
 public:
  void draw_rings(int f1,int f2,int f3,int f4,int f5,int f6,int t1,int t2,int t3,int t4,int t5,int t6,int d1,int d2,int d3,int d4,int d5,int d6)
{int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setbkcolor(5);
setcolor(14);
   int x=50,y=220,z=200,v=200;
   outtextxy(90,20,"Source");
   setfillstyle(SOLID_FILL,DARKGRAY);
   bar(110,40,130,220);

   if(f1==1)
  { setfillstyle(SOLID_FILL,BLUE);
   bar(x,y,z,v);}
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f2==1)
   {setfillstyle(SOLID_FILL,RED);
    bar(x+20,y-50,z-20,v-1); }
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f3==1)
   {setfillstyle(SOLID_FILL,BLUE);
   bar(x+40,y-80,z-40,v-31);
   }
   setfillstyle(SOLID_FILL,DARKGRAY);
   if(f4==1)
   {setfillstyle(SOLID_FILL,RED);
   bar(x+45,y-105,z-55,v-60);
   }setfillstyle(SOLID_FILL,DARKGRAY);
  if(f5==1)
  {setfillstyle(SOLID_FILL,BLUE);
   bar(x+50,y-106,z-60,v-110);
  }setfillstyle(SOLID_FILL,DARKGRAY);
  if(f5==1)
  {setfillstyle(SOLID_FILL,RED);
   bar(x+52,y-130,z-65,v-130);
  }setfillstyle(SOLID_FILL,DARKGRAY);


 int a=430,b=220,c=580,d=200;
 outtextxy(460,20,"Auxillary rod");
 bar(510,40,490,220);
  if(t1==1)
 { setfillstyle(SOLID_FILL,BLUE);
  bar(a,b,c,d); }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t2==1)
 { setfillstyle(SOLID_FILL,RED);
  bar(a+15,b-50,c-15,d-1); }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t3==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(a+30,b-75,c-30,d-31);  }
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(t4==1)
  {setfillstyle(SOLID_FILL,RED);
   bar(a+45,b-105,c-53,d-56);
  }setfillstyle(SOLID_FILL,DARKGRAY);
  if(t5==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(a+50,b-106,c-60,d-110);
  }setfillstyle(SOLID_FILL,DARKGRAY);
  if(t6==1)
  {setfillstyle(SOLID_FILL,RED);
  bar(a+52,b-130,c-65,d-130);
  }setfillstyle(SOLID_FILL,DARKGRAY);

 int e=260,f=420,g=390,h=400;
 outtextxy(270,200,"Destination rod");
 bar(307,420,330,230);
  if(d1==1)
 { setfillstyle(SOLID_FILL,BLUE);
  bar(e,f,g,h);}
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(d2==1)
  {setfillstyle(SOLID_FILL,RED);
  bar(e+10,f-50,g-10,h-1); }
  setfillstyle(SOLID_FILL,DARKGRAY);

 if(d3==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(e+25,f-75,g-25,h-31);}
  setfillstyle(SOLID_FILL,DARKGRAY);
 if(d4==1)
 {setfillstyle(SOLID_FILL,RED);
  bar(e+35,f-105,g-45,h-56);}
  setfillstyle(SOLID_FILL,DARKGRAY);
  if(d5==1)
  {setfillstyle(SOLID_FILL,BLUE);
  bar(e+40,f-106,g-50,h-110);
 }setfillstyle(SOLID_FILL,DARKGRAY);
 if(d6==1)
  {setfillstyle(SOLID_FILL,RED);
  bar(e+43,f-130,g-55,h-135);
 }setfillstyle(SOLID_FILL,DARKGRAY);
 }
 void draw()
 {draw_rings(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0);getch();
  draw_rings(1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0);getch();
  draw_rings(1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1);getch();
  draw_rings(1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1);getch();
  draw_rings(1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1);getch();
  draw_rings(1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0);getch();
  draw_rings(1,1,1,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0);getch();
  draw_rings(1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0,0);getch();
  draw_rings(1,1,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,1);getch();
  draw_rings(1,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1);getch();
  draw_rings(1,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1);getch();

 }


};

void main()
{hanoi h;
clrscr();
h.startpage();
clrscr();
h.options();
cin>>option;
switch(option)
{
   case 1:
   Three_rings th;
   th.show_three();
  //th.user_option();
//  th.step_one();

  // th.draw();
   th.step_one();
   break;

  case 2:
  Four_rings four;
  four.call();
  break;

  case 3:

  Five_rings five;
  five.draw();
  break;

  case 4:
  Six_rings six;
  six.draw();
  break;



//  case 5:
  //Seven_rings seven;
//  break;

  default:
  cout<<"Wrong value enetered\nPlease enter a correct value";
  getch();
  main();
  break;


}

}
