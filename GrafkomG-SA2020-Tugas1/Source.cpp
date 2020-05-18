#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	glColor3f(0, 0.8, 0.1);
	glBegin(GL_QUADS);//TANAH
		glVertex2f(0, 200);
		glVertex2f(0, 0);
		glVertex2f(500, 0);
		glVertex2f(500, 200);
	glEnd();

	glColor3ub(128, 101, 59);
	glBegin(GL_TRIANGLES); //GUNUNG_1 OBJEK_1
		glVertex2f(200, 200);
		glVertex2f(350, 260);
		glVertex2f(500, 200);
	glEnd();

	glColor3ub(151, 124, 83);
	glBegin(GL_TRIANGLES); //GUNUNG_2 OBJEK_1
		glVertex2f(0, 200);
		glVertex2f(150, 270);
		glVertex2f(300, 200);
	glEnd();

	glColor3ub(84, 38, 38);
	glBegin(GL_TRIANGLES);//ATAP
		glVertex2f(400, 350);
		glVertex2f(350, 270);
		glVertex2f(450, 270);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);//KOTAK BANGUNAN
		glVertex2f(360, 270);
		glVertex2f(360,	200);
		glVertex2f(440,	200);
		glVertex2f(440,	270);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);//PINTU
		glVertex2f(370, 240);
		glVertex2f(370, 205);
		glVertex2f(390, 205);
		glVertex2f(390, 240);
	glEnd();

	glColor3f(1, 1, 1);//JENDELA PUTIH 
	glBegin(GL_QUADS);
		glVertex2f(410, 250);
		glVertex2f(410, 230);
		glVertex2f(430, 230);
		glVertex2f(430, 250);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_LINES);//JENDELA HORIZONTAL
		glVertex2f(410, 240);
		glVertex2f(430, 240);
	glEnd();
		
	glColor3f(1, 0, 0);
	glBegin(GL_LINES);//JENDELA VERTICAL
		glVertex2f(420, 250);
		glVertex2f(420, 230);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);//BORDER JENDELA
		glVertex2f(410, 250);
		glVertex2f(410, 230);
		glVertex2f(430, 230);
		glVertex2f(430, 250);
	glEnd();

	glColor3ub(240, 196, 32);
	glBegin(GL_POLYGON); //BULAN OBJEK_2
		glVertex2f(52, 478);
		glVertex2f(63, 475);
		glVertex2f(68, 465);
		glVertex2f(63, 455);
		glVertex2f(52, 452);
		glVertex2f(41, 455);
		glVertex2f(36, 465);
		glVertex2f(41, 475);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON); //TIANG OBJEK_3
		glVertex2f(50, 200);
		glVertex2f(55, 200);
		glVertex2f(55, 300);
		glVertex2f(50, 300);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON); //TIANG HORIZON_1 OBJEK_3
		glVertex2f(40, 295);
		glVertex2f(65, 295);
		glVertex2f(65, 300);
		glVertex2f(40, 300);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON); //TIANG HORIZON_2 OBJEK_3
		glVertex2f(45, 285);
		glVertex2f(60, 285);
		glVertex2f(60, 290);
		glVertex2f(45, 290);
	glEnd();

	glColor3ub(165, 100, 6);
	glBegin(GL_POLYGON); //POHON OBJEK_4
		glVertex2f(270, 200);
		glVertex2f(275, 200);
		glVertex2f(275, 250);
		glVertex2f(270, 250);
	glEnd();

	glColor3ub(30, 147, 45);
	glBegin(GL_POLYGON); //POHON DAUN OBJEK_4
		glVertex2f(250, 240);
		glVertex2f(295, 240);
		glVertex2f(295, 280);
		glVertex2f(250, 280);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON); //MOBIL BAN_DEPAN OBJEK_5
		glVertex2f(230, 200);
		glVertex2f(235, 200);
		glVertex2f(235, 210);
		glVertex2f(230, 210);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON); //MOBIL BAN_BELAKANG OBJEK_5
		glVertex2f(205, 200);
		glVertex2f(210, 200);
		glVertex2f(210, 210);
		glVertex2f(205, 210);
	glEnd();

	glColor3ub(192, 192, 192);
	glBegin(GL_POLYGON); //MOBIL OBJEK_5
		glVertex2f(200, 205);
		glVertex2f(240, 205);
		glVertex2f(240, 215);
		glVertex2f(230, 215);
		glVertex2f(225, 225);
		glVertex2f(210, 225);
		glVertex2f(205, 215);
		glVertex2f(200, 215);
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