#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

int main(){
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setbkcolor(GREEN);
    cleardevice();
    putpixel(50, 100, YELLOW);
    outtextxy(35, 55, "PIXEL");
    getch();
    closegraph();
   return 0;
}
/*
Function	Description
initgraph--It initializes the graphics system by loading the passed graphics driver then changing the system into graphics mode.
getmaxx--It returns the maximum X coordinate in current graphics mode and driver.
getmaxy--It returns the maximum Y coordinate in current graphics mode and driver.
outtextxy--It displays a string at a particular point (x,y) on screen.
circle--It draws a circle with radius r and centre at (x, y).
closegraph--It unloads the graphics drivers and sets the screen back to text mode.*/
