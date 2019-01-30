//#include<graphics.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void draw(int x1,int y1,int x2,int y2);
void lineBresenham(int x1,int y1,int x2,int y2);
main()
{
	int x1,y1,x2,y2;
//	int gdriver=DETECT,gmode,gerror;
//	initgraph(&gdriver,&gmode,"c:\\tc\\bgi:");
	printf("\n enter the x and y value for starting point:\n");
	scanf("%d%d",&x1,&y1);
	printf("\n enter the x and y for ending point");
	scanf("%d%d",&x2,&y2);
	printf("\n The line is shown below:\n ");
	draw(x1,y1,x2,y2);
	lineBresenham( x1, y1, x2, y2);
	getch();
}

void draw(int x1,int y1,int x2,int y2)
{
	float x,y,xinc,yinc,dx,dy;
	int k;
	int step;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	step=abs(dx);
	else
	step=abs(dy);
	printf("\n step=%d",step);
	xinc=dx/step;
	yinc=dy/step;
	x=x1;
	y=y1;
//	putpixel(x,y,1);
printf("\n the co-ordinates are x=%f and y=%f",x,y);
	for(k=1;k<=step;k++)
	{
		x=x+xinc;
		y=y+yinc;
//		putpixel(x,y,2);
printf("\n the co-ordinates are x=%f and y=%f",x,y);
	}
	
}
void lineBresenham(int x1,int y1,int x2,int y2)
{
	int dx=abs(x2-x1),dy=abs(y2-y1);
	int px,xEnd,pk;
	float x,y;
	pk=2*dy-dx;
	//determine which point to use as start,which as end
	if(x1>x2)
	{
		x=x2;
		y=y2;xEnd=x1;
	}
	else
	{
		x=x1;
		y=y1;xEnd=x2;
	}
	printf("\n......Bresenham's algorith........");
	printf("\n the co-ordinates are x=%f and y=%f",x,y);
	while(x<xEnd)
	{
		x++;
		if(pk<0)
		{
	      pk=pk+2*dy;
		}
		else
		{
			y++;
			pk=pk+2*dx;
		}
		
		printf("\n the coordinates are x=%f y=%f",x,y);
	}
}
