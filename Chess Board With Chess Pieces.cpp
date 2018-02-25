/*Shahadat Hossain

To change color press f1, f2, f3 from your computer.

To get more project do #Subscribe my channel

*/
#include<windows.h>
#include<gl\glut.h>
int c = 0;
float red=1.0f, blue=1.0f, green=1.0f;

void init()
{
// For displaying the window color
    glClearColor(0, 1, 1, 0);
// Choosing the type of projection
    glMatrixMode(GL_PROJECTION);
// for setting the transformation which here is 2D
    gluOrtho2D(0, 120, 0,120);
}

void processNormalKeys(unsigned char key, int x, int y) {

	if (key == 27)
		exit(0);
		}
void drawSquare(GLint x1, GLint y1, GLint x2, GLint y2, GLint x3, GLint y3, GLint x4, GLint y4)
{
// if color is 0 then draw white box and change value of color = 1
    if (c == 0)
    {
        glColor3f(1, 1, 1); // white color value is 1 1 1
        c = 1;
    }
// if color is 1 then draw black box and change value of color = 0
    else
    {
        glColor3f(0, 0, 0); // black color value is 0 0 0
        c = 0;
    }

// Draw Square
    glBegin(GL_POLYGON);
    glVertex2i(x1, y1);
    glVertex2i(x2, y2);
    glVertex2i(x3, y3);
    glVertex2i(x4, y4);
    glEnd();
}

void chessboard()
{

    glClear(GL_COLOR_BUFFER_BIT);
	int counter = 0;
	for (GLint x1 = 0; x1 < 120; x1 += 15)
	{
		for (GLint y1 = 0; y1 < 120; y1 += 15)
		{
			if (((x1 + y1) / 15) & 1){
				glColor3f(.6, .6, .6);
			}
			else{
				glColor3f(.2, .2, .2);
			}
			glRecti(x1, y1, (x1 + 15), (y1 + 15));
		}//end of y
	}//end of x
glFlush();

    //Rook

    glColor3f(red,green,blue);
      //glColor3b(126,87,194);
    int x=32;
    glBegin(GL_POLYGON);
    glVertex2d (x,7);
    glVertex2d (x,7);
    glVertex2d (x,5);
    glVertex2d (x+10,5);
    glVertex2d (x+10,7);
    glVertex2d (x+9,8);
    glVertex2d (x+9,8);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10);
    glVertex2d (x+6,22);
    glVertex2d (x+4,22);
    glVertex2d (x+3,10);
    glVertex2d (x+1,8);
    glVertex2d (x+9,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,20);
    glVertex2d (x+7,21);
    glVertex2d (x+5,25);
    glVertex2d (x+3,21);
    glVertex2d (x+3,20);
    glEnd();

    //glColor3b(126,87,194);

    x=77;
    glBegin(GL_POLYGON);
    glVertex2d (x,7);
    glVertex2d (x,7);
    glVertex2d (x,5);
    glVertex2d (x+10,5);
    glVertex2d (x+10,7);
    glVertex2d (x+9,8);
    glVertex2d (x+9,8);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10);
    glVertex2d (x+6,22);
    glVertex2d (x+4,22);
    glVertex2d (x+3,10);
    glVertex2d (x+1,8);
    glVertex2d (x+9,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,20);
    glVertex2d (x+7,21);
    glVertex2d (x+5,25);
    glVertex2d (x+3,21);
    glVertex2d (x+3,20);
    glEnd();

    //Pawn
     //   glColor3b(126,87,194);
    x=3;
    int y_axis = 20;

    glBegin(GL_POLYGON);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,5+y_axis);
    glVertex2d (x+10,5+y_axis);
    glVertex2d (x+10,7+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+1,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10+y_axis);
    glVertex2d (x+5,22+y_axis);
    glVertex2d (x+3,10+y_axis);
    glVertex2d (x+1,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (10,18+y_axis);
    glVertex2d (10,22+y_axis);
    glVertex2d (6,22+y_axis);
    glVertex2d (6,18+y_axis);
    glEnd();

       // glColor3b(126,87,194);

    //Pawn 2
    x=18;
    y_axis = 20;
    int x2 = 15;

    glBegin(GL_POLYGON);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,5+y_axis);
    glVertex2d (x+10,5+y_axis);
    glVertex2d (x+10,7+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+1,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10+y_axis);
    glVertex2d (x+5,22+y_axis);
    glVertex2d (x+3,10+y_axis);
    glVertex2d (x+1,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x2+10,18+y_axis);
    glVertex2d (x2+10,22+y_axis);
    glVertex2d (x2+6,22+y_axis);
    glVertex2d (x2+6,18+y_axis);
    glEnd();


     //   glColor3b(126,87,194);
    //Pawn 3
    x=33;
    y_axis = 20;
    x2 = 30;

    glBegin(GL_POLYGON);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,5+y_axis);
    glVertex2d (x+10,5+y_axis);
    glVertex2d (x+10,7+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+1,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10+y_axis);
    glVertex2d (x+5,22+y_axis);
    glVertex2d (x+3,10+y_axis);
    glVertex2d (x+1,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x2+10,18+y_axis);
    glVertex2d (x2+10,22+y_axis);
    glVertex2d (x2+6,22+y_axis);
    glVertex2d (x2+6,18+y_axis);
    glEnd();


       // glColor3b(126,87,194);
    //Pawn 4
    x=48;
    y_axis = 30;
    x2 = 45;

    glBegin(GL_POLYGON);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,5+y_axis);
    glVertex2d (x+10,5+y_axis);
    glVertex2d (x+10,7+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+1,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10+y_axis);
    glVertex2d (x+5,22+y_axis);
    glVertex2d (x+3,10+y_axis);
    glVertex2d (x+1,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x2+10,18+y_axis);
    glVertex2d (x2+10,22+y_axis);
    glVertex2d (x2+6,22+y_axis);
    glVertex2d (x2+6,18+y_axis);
    glEnd();


        //glColor3b(126,87,194);

    //pawn 5
    x=63;
    y_axis = 30;
    x2 = 60;

    glBegin(GL_POLYGON);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,5+y_axis);
    glVertex2d (x+10,5+y_axis);
    glVertex2d (x+10,7+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+1,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10+y_axis);
    glVertex2d (x+5,22+y_axis);
    glVertex2d (x+3,10+y_axis);
    glVertex2d (x+1,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x2+10,18+y_axis);
    glVertex2d (x2+10,22+y_axis);
    glVertex2d (x2+6,22+y_axis);
    glVertex2d (x2+6,18+y_axis);
    glEnd();



       // glColor3b(126,87,194);
    //pawn 6
    x=78;
    y_axis = 20;
    x2 = 75;

    glBegin(GL_POLYGON);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,5+y_axis);
    glVertex2d (x+10,5+y_axis);
    glVertex2d (x+10,7+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+1,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10+y_axis);
    glVertex2d (x+5,22+y_axis);
    glVertex2d (x+3,10+y_axis);
    glVertex2d (x+1,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x2+10,18+y_axis);
    glVertex2d (x2+10,22+y_axis);
    glVertex2d (x2+6,22+y_axis);
    glVertex2d (x2+6,18+y_axis);
    glEnd();


      //  glColor3b(126,87,194);
    //pawn 7
    x=93;
    y_axis = 20;
    x2 = 90;

    glBegin(GL_POLYGON);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,5+y_axis);
    glVertex2d (x+10,5+y_axis);
    glVertex2d (x+10,7+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+1,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10+y_axis);
    glVertex2d (x+5,22+y_axis);
    glVertex2d (x+3,10+y_axis);
    glVertex2d (x+1,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x2+10,18+y_axis);
    glVertex2d (x2+10,22+y_axis);
    glVertex2d (x2+6,22+y_axis);
    glVertex2d (x2+6,18+y_axis);
    glEnd();

    //pawn 8
    //glColor3b(126,87,194);

    x=108;
    y_axis = 20;
    x2 = 105;

    glBegin(GL_POLYGON);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,7+y_axis);
    glVertex2d (x,5+y_axis);
    glVertex2d (x+10,5+y_axis);
    glVertex2d (x+10,7+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glVertex2d (x+1,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10+y_axis);
    glVertex2d (x+5,22+y_axis);
    glVertex2d (x+3,10+y_axis);
    glVertex2d (x+1,8+y_axis);
    glVertex2d (x+9,8+y_axis);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x2+10,18+y_axis);
    glVertex2d (x2+10,22+y_axis);
    glVertex2d (x2+6,22+y_axis);
    glVertex2d (x2+6,18+y_axis);
    glEnd();



        //glColor3b(126,87,194);
    //Bishop
    x=3;
    glBegin(GL_POLYGON);
    glVertex2d (x,7);
    glVertex2d (x,7);
    glVertex2d (x,5);
    glVertex2d (x+10,5);
    glVertex2d (x+10,7);
    glVertex2d (x+9,8);
    glVertex2d (x+9,8);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10);
    glVertex2d (x+6,22);
    glVertex2d (x+4,22);
    glVertex2d (x+3,10);
    glVertex2d (x+1,8);
    glVertex2d (x+9,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+9,20);
    glVertex2d (x+9,22);
    glVertex2d (x+1,22);
    glVertex2d (x+1,20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+9,20);
    glVertex2d (x+9,23);
    glVertex2d (x+7,23);
    glVertex2d (x+7,20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+6,20);
    glVertex2d (x+6,23);
    glVertex2d (x+4,23);
    glVertex2d (x+4,20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+3,20);
    glVertex2d (x+3,23);
    glVertex2d (x+1,23);
    glVertex2d (x+1,20);
    glEnd();


 /*******Boot************/
    //glColor3b(126,87,194);
    x=107;
    glBegin(GL_POLYGON);
    glVertex2d (x,7);
    glVertex2d (x,7);
    glVertex2d (x,5);
    glVertex2d (x+10,5);
    glVertex2d (x+10,7);
    glVertex2d (x+9,8);
    glVertex2d (x+9,8);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10);
    glVertex2d (x+6,22);
    glVertex2d (x+4,22);
    glVertex2d (x+3,10);
    glVertex2d (x+1,8);
    glVertex2d (x+9,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+9,20);
    glVertex2d (x+9,22);
    glVertex2d (x+1,22);
    glVertex2d (x+1,20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+9,20);
    glVertex2d (x+9,23);
    glVertex2d (x+7,23);
    glVertex2d (x+7,20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+6,20);
    glVertex2d (x+6,23);
    glVertex2d (x+4,23);
    glVertex2d (x+4,20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+3,20);
    glVertex2d (x+3,23);
    glVertex2d (x+1,23);
    glVertex2d (x+1,20);
    glEnd();


    //Knight
    //glColor3b(126,87,194);

    x=92;
    glBegin(GL_POLYGON);
    glVertex2d (x+1,7);
    glVertex2d (x,7);
    glVertex2d (x,5);
    glVertex2d (x+10,5);
    glVertex2d (x+10,7);
    glVertex2d (x+9,8);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+9,8);
    glVertex2d (x+9,21);
    glVertex2d (x+3,13);
    glVertex2d (x+3,10);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+9,21);
    glVertex2d (x+8,23);
    glVertex2d (x+7,21);
    glVertex2d (x+4,20);
    glVertex2d (x+1,18);
    glVertex2d (x+1,17);
    glVertex2d (x+3,17);
    glVertex2d (x+6,16);
    glEnd();


       // glColor3b(126,87,194);

    x=18;
    glBegin(GL_POLYGON);
    glVertex2d (x+1,7);
    glVertex2d (x,7);
    glVertex2d (x,5);
    glVertex2d (x+10,5);
    glVertex2d (x+10,7);
    glVertex2d (x+9,8);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+9,8);
    glVertex2d (x+9,21);
    glVertex2d (x+3,13);
    glVertex2d (x+3,10);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+9,21);
    glVertex2d (x+8,23);
    glVertex2d (x+7,21);
    glVertex2d (x+4,20);
    glVertex2d (x+1,18);
    glVertex2d (x+1,17);
    glVertex2d (x+3,17);
    glVertex2d (x+6,16);
    glEnd();

    //Queen


        //glColor3b(126,87,194);
    x=47;
    glBegin(GL_POLYGON);
    glVertex2d (x+1,7);
    glVertex2d (x,7);
    glVertex2d (x,5);
    glVertex2d (x+10,5);
    glVertex2d (x+10,7);
    glVertex2d (x+9,7);
    glVertex2d (x+9,8);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10);
    glVertex2d (x+6,22);
    glVertex2d (x+4,22);
    glVertex2d (x+3,10);
    glVertex2d (x+1,8);
    glVertex2d (x+9,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+3,23);
    glVertex2d (x+3,22);
    glVertex2d (x+7,22);
    glVertex2d (x+7,23);
    glVertex2d (x+8,25);
    glVertex2d (x+6,25);
    glVertex2d (x+5,28);
    glVertex2d (x+4,25);
    glVertex2d (x+2,25);
    glEnd();

    //King

        //glColor3b(126,87,194);

    x=63;
    glBegin(GL_POLYGON);
    glVertex2d (x+1,7);
    glVertex2d (x,7);
    glVertex2d (x,5);
    glVertex2d (x+10,5);
    glVertex2d (x+10,7);
    glVertex2d (x+9,7);
    glVertex2d (x+9,8);
    glVertex2d (x+1,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+7,10);
    glVertex2d (x+6,22);
    glVertex2d (x+4,22);
    glVertex2d (x+3,10);
    glVertex2d (x+1,8);
    glVertex2d (x+9,8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+3,23);
    glVertex2d (x+3,22);
    glVertex2d (x+7,22);
    glVertex2d (x+7,23);
    glVertex2d (x+8,25);
    glVertex2d (x+6,25);
    glVertex2d (x+5,28);
    glVertex2d (x+4,25);
    glVertex2d (x+2,25);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (x+4,28);
    glVertex2d (x+3,28);
    glVertex2d (x+3,27);
    glVertex2d (x+7,27);
    glVertex2d (x+7,28);
    glVertex2d (x+6,28);
    glVertex2d (x+6,29);
    glVertex2d (x+4,29);
    glEnd();


// Process all OpenGL routine s as quickly as possible
    glFlush();
    glutSwapBuffers();
}

//This is the method to change color by keyboard.

void processSpecialKeys(int key, int x, int y) {

	switch(key) {
		case GLUT_KEY_F1 :
				red = 1.0;
				green = 0.0;
				blue = 0.0;
				break;
		case GLUT_KEY_F2 :
				red = 0.0;
				green = 1.0;
				blue = 0.0;
				break;
		case GLUT_KEY_F3 :
				red = 0.0;
				green = 0.0;
				blue = 1.0;
				break;
	}

	glutPostRedisplay ();

}

int main(int agrc, char ** argv)
{
// Initialize GLUT
    glutInit(&agrc, argv);
// Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
// Set top - left display window position.
    glutInitWindowPosition(100, 100);
// Set display window width and height
    glutInitWindowSize(200, 150);
// Create display window with the given title
    glutCreateWindow("Chess Board By Shahadat Hossain");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(chessboard);

    // here are the new entries
    //glutDisplayFunc(chessboard);
	glutKeyboardFunc(processNormalKeys);
	glutSpecialFunc(processSpecialKeys);
    // Display everything and wait.

    glutMainLoop();

    return 1;

}
