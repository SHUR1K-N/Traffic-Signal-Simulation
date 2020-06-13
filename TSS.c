#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

int main()
{
	//Initializing graphic drivers and graph
	int gd = DETECT, gm, midx, midy, n;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	midx = getmaxx()/2;
	midy = getmaxy()/2;
	cleardevice();
	
	//Default textstyle parameters
	setcolor(WHITE), settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
	outtextxy(midx-280, midy, "Press a key to begin the simulation");
	getch();
	cleardevice();
	
	//Just having fun here, nothing important (always choose the red pill)
	setcolor(GREEN);
	outtextxy(midx-250, midy, "Y_"), delay(120);
	outtextxy(midx-250, midy, "Yo_"), delay(120);
	outtextxy(midx-250, midy, "You_"), delay(160);
	outtextxy(midx-250, midy, "You a_"), delay(120);
	outtextxy(midx-250, midy, "You ar_"), delay(120);
	outtextxy(midx-250, midy, "You are_"), delay(65);
	outtextxy(midx-250, midy, "You are n_"), delay(120);
	outtextxy(midx-250, midy, "You are no_"), delay(120);
	outtextxy(midx-250, midy, "You are now_"), delay(190);
	outtextxy(midx-250, midy, "You are now i_"), delay(120);
	outtextxy(midx-250, midy, "You are now in_"), delay(90);
	outtextxy(midx-250, midy, "You are now in a_"), delay(120);
	outtextxy(midx-250, midy, "You are now in a s_"), delay(120);
	outtextxy(midx-250, midy, "You are now in a si_"), delay(120);
	outtextxy(midx-250, midy, "You are now in a sim_"), delay(120);
	outtextxy(midx-250, midy, "You are now in a simu_"), delay(90);
	outtextxy(midx-250, midy, "You are now in a simul_"), delay(120);
	outtextxy(midx-250, midy, "You are now in a simula_"), delay(250);
	outtextxy(midx-250, midy, "You are now in a simulat_"), delay(80);
	outtextxy(midx-250, midy, "You are now in a simulati_"), delay(120);
	outtextxy(midx-250, midy, "You are now in a simulatio_"), delay(180);
	outtextxy(midx-250, midy, "You are now in a simulation_"), delay(120);
	outtextxy(midx-250, midy, "You are now in a simulation._"), delay(250);
	outtextxy(midx-250, midy, "You are now in a simulation. "), delay(270);
	outtextxy(midx-250, midy, "You are now in a simulation._"), delay(270);
	outtextxy(midx-250, midy, "You are now in a simulation. "), delay(270);
	outtextxy(midx-250, midy, "You are now in a simulation._"), delay(270);
	outtextxy(midx-250, midy, "You are now in a simulation. "), delay(270);
	cleardevice();
	
	//For loop for the number of cycles for the signal
	for(n=0; n<=2; n++)
	{
		//Red light graphics + time delay
		setcolor(WHITE);
		rectangle(midx-60, midy-150, midx+60, midy+150), rectangle(midx-10, midy+150, midx+10, midy+218);
		circle(midx, midy, 35), circle(midx, midy+90, 35), circle(midx, midy-90, 35);
		setfillstyle(SOLID_FILL, RED), floodfill(midx, midy-90, WHITE);
		setcolor(RED), outtextxy(midx+90, midy-100, "STOP");
		delay(4000);
		cleardevice();
		
		//Yellow light graphics + time delay
		setcolor(WHITE);
		rectangle(midx-60, midy-150, midx+60, midy+150), rectangle(midx-10, midy+150, midx+10, midy+218);
		circle(midx, midy-90, 35), circle(midx, midy+90, 35), circle(midx, midy, 35);
		setfillstyle(SOLID_FILL, YELLOW), floodfill(midx, midy, WHITE);
		setcolor(YELLOW), outtextxy(midx+90, midy-6, "READY TO GO?");
		delay(2000);
		cleardevice();
		
		//Green light graphics + time delay
		setcolor(WHITE);
		rectangle(midx-60, midy-150, midx+60, midy+150), rectangle(midx-10, midy+150, midx+10, midy+218);
		circle(midx, midy-90, 35), circle(midx, midy, 35), circle(midx, midy+90, 35);
		setfillstyle(SOLID_FILL, GREEN), floodfill(midx, midy+90, WHITE);
		setcolor(GREEN), outtextxy(midx+90, midy+90, "GO!");
		delay(6000);
		cleardevice();
			
		//Yellow light graphics + time delay (again)
		setcolor(WHITE);
		rectangle(midx-60, midy-150, midx+60, midy+150), rectangle(midx-10, midy+150, midx+10, midy+218);
		circle(midx, midy-90, 35), circle(midx, midy+90, 35), circle(midx, midy, 35);
		setfillstyle(SOLID_FILL, YELLOW), floodfill(midx, midy, WHITE);
		setcolor(YELLOW), outtextxy(midx+90, midy-6, "READY TO STOP!");
		delay(2000);
		cleardevice();
		//For loop ends here
	}
	//Separate Red light graphics + time delay
	setcolor(WHITE);
	rectangle(midx-60, midy-150, midx+60, midy+150), rectangle(midx-10, midy+150, midx+10, midy+218);
	circle(midx, midy, 35), circle(midx, midy+90, 35), circle(midx, midy-90, 35);
	setfillstyle(SOLID_FILL, RED), floodfill(midx, midy-90, WHITE); 
	setcolor(RED), outtextxy(midx+90, midy-100, "STOP");
	delay(4000);
	cleardevice();

	//Ending screen
	setcolor(GREEN);
	outtextxy(midx-50, midy, "-fin-");
	getch();
}
