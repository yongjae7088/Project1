#include <bangtal.h>

SceneID scene1;
ObjectID pi1, pi2, pi3, pi4, reset;

int pix[4] = { -100, 800, -80, 850 };
int piy[4] = { 0, 400, 415, 50 };

void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == pi1) {
		pix[0] = pix[0] + 305;
		piy[0] = piy[0] + 325;
		locateObject(pi1, scene1, pix[0], piy[0]);
	}
	else if (object == pi2) {
		pix[1] = pix[1] - 600;
		piy[1] = piy[1] - 300;
		locateObject(pi2, scene1, pix[1], piy[1]);
	}
	else if (object == pi3) {
		pix[2] = pix[2] + 510;
		piy[2] = piy[2] - 90;
		locateObject(pi3, scene1, pix[2], piy[2]);
	}
	else if (object == pi4) {
		pix[3] = pix[3] - 420;
		piy[3] = piy[3] + 55;
		locateObject(pi4, scene1, pix[3], piy[3]);
	}
	else if (object == reset) {
		locateObject(pi1, scene1, -100, 0);
		locateObject(pi2, scene1, 800, 400);
		locateObject(pi3, scene1, -80, 415);
		locateObject(pi4, scene1, 850, 50);
	}
	else {
		endGame();
	}
}
int main() {
	setMouseCallback(mouseCallback);

    scene1 = createScene("ÆÛÁñ ¸ÂÃß±â", "background.png");

	pi1 = createObject("lu.png");
	locateObject(pi1, scene1, pix[0], piy[0]);
	showObject(pi1);

	pi2 = createObject("ld.png");
	locateObject(pi2, scene1, pix[1], piy[1]);
	showObject(pi2);
	
	pi3 = createObject("ru.png");
	locateObject(pi3, scene1, pix[2], piy[2]);
	showObject(pi3);

	pi4 = createObject("rd.png");
	locateObject(pi4, scene1, pix[3], piy[3]);
	showObject(pi4);

	reset = createObject("startButton.png");
	locateObject(reset, scene1, -150, 300);
	showObject(reset);

	startGame(scene1);
}