#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	//ATAP
	glBegin(GL_TRIANGLES);
		glVertex2f(400, 400);
		glVertex2f(350, 300);
		glVertex2f(450, 300);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(360, 300);
		glVertex2f(360,	200);
		glVertex2f(440,	200);
		glVertex2f(440,	300);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
		glVertex2f(370, 240);
		glVertex2f(370, 205);
		glVertex2f(390, 205);
		glVertex2f(390, 240);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
		glVertex2f(410, 250);
		glVertex2f(410, 230);
		glVertex2f(430, 230);
		glVertex2f(430, 250);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_LINES);
		glVertex2f(410, 240);
		glVertex2f(430, 240);
	glEnd();
		
	glColor3f(1, 0, 0);
	glBegin(GL_LINES);
		glVertex2f(420, 250);
		glVertex2f(420, 230);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(410, 250);
		glVertex2f(410, 230);
		glVertex2f(430, 230);
		glVertex2f(430, 250);
	glEnd();

	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tugas1 - 672018274");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}