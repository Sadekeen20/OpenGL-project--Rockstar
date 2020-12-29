//Basic QUADS
#include <windows.h>
#include <GL/glut.h>

#include <math.h>
#define PI 3.1416

static float	tx	=  0.0;
static float	ty	=  0.0;
float spinC2 = 0.0;

float spin = 0.0;

float spin1= 0.0;

float s1=0,s2=0,s3=0,s4=0;




void circle(float radius_x, float radius_y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius_x, sin(angle) * radius_y);
			//glVertex2f (cos(angle) * radius_x+5, sin(angle) * radius_y);
		}

	glEnd();
}
void spinDisplay_left(void)
{


   glutPostRedisplay(); //calls the display function again
}

void spinDisplay_right(void)
{

    spinC2 = spinC2 - 0.005;
  if (spinC2 < -0.6)
     spinC2 = spinC2 + 0.6;

    spin = spin - 0.005;
   if (spin < -10)
      spin = spin + 10;


   spin1 = spin1 - 0.005;
   if (spin1 < -10)
      spin1 = spin1 + 10;

    s1 = s1 - 0.003;
   if (s1 < -20)
      s1 = s1 + 20;

   s2 = s2 + 0.003;
   if (s2 > 20)
      s2 = s2 - 20;

   s3 = s3 - 0.007;
   if (s3 < -10)
      s3 = s3 + 10;

   s4 = s4 - 0.007;
   if (s4 < -10)
      s4 = s4 + 10;



   glutPostRedisplay();
}
void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 't':
            glutIdleFunc(spinDisplay_left);
			break;

		case 'd':
			glutIdleFunc(spinDisplay_right);
			break;

	  default:
			break;
	}
}

void init()
{
    glClearColor(.604f,.851f,.918f, 0.0f);
    glOrtho(0,2390,1092,0,-15,15);
}

void stage(){
 glColor3f(0.137f,0.694f,0.302f);
    glBegin(GL_QUADS);

       glVertex3f(2385, 811, 0.0);
       glVertex3f(2383, 593, 0.0);
       glVertex3f(249, 599, 0.0);
       glVertex3f(77, 815, 0.0);

      glEnd();

      glColor3f(0.137f,0.794f,0.312f);
      glBegin(GL_QUADS);

       glVertex3f(2387, 895, 0.0);
       glVertex3f(2385, 811, 0.0);
       glVertex3f(73, 815, 0.0);
       glVertex3f(73, 907, 0.0);

      glEnd();
}

void river(){
 glColor3f(0.137f,0.604f,1.0f);
    glBegin(GL_QUADS);

       glVertex3f(2389, 655, 0.0);

                    glColor3f(0.137f,0.604f,1.0f);

       glVertex3f(2387, 145, 0.0);
                    glColor3f(0.137f,0.604f,1.0f);
       glVertex3f(3, 151, 0.0);
                    glColor3f(0.0f,0.360f,0.6f);
       glVertex3f(3, 671, 0.0);

      glEnd();
}

void human(int a, int b,float c , float d , float e){

    glPushMatrix();

    glTranslatef(a,b,0);

    glRotatef(spinC2, -0.1, 1.0, -0.1);


//dress
    glColor3f(c,d,e);
        glBegin(GL_POLYGON);
        glVertex3f(827, 1091, 0.0);
        glVertex3f(817, 1079, 0.0);
        glVertex3f(801, 1059, 0.0);
        glVertex3f(781, 1051, 0.0);
        glVertex3f(747,1045, 0.0);
        glVertex3f(725, 1027, 0.0);
        glVertex3f(719,1007, 0.0);
        glVertex3f(689,1017, 0.0);
        glVertex3f(663,1023, 0.0);
        glVertex3f(641,1013, 0.0);
        glVertex3f(617,1007, 0.0);
        glVertex3f(613, 1033, 0.0);
        glVertex3f(597,1047, 0.0);
        glVertex3f(581,1055, 0.0);
        glVertex3f(559, 1063, 0.0);
        glVertex3f(549,1087, 0.0);
        glVertex3f(547,1089, 0.0);
    glEnd();




  glColor3f(.90,.90,.90);
        glBegin(GL_POLYGON);

        glVertex3f( 711, 1007, 0.0);
        glVertex3f( 717, 983, 0.0);
        glVertex3f( 729, 957, 0.0);
        glVertex3f( 741, 923, 0.0);
        glVertex3f( 731, 881, 0.0);
        glVertex3f( 709, 851, 0.0);
        glVertex3f( 665, 845, 0.0);
        glVertex3f( 639, 849, 0.0);
        glVertex3f( 617, 869, 0.0);
        glVertex3f( 607, 891, 0.0);
        glVertex3f( 601, 919, 0.0);
        glVertex3f( 607, 943, 0.0);
        glVertex3f( 615, 967, 0.0);
        glVertex3f( 623, 989, 0.0);
        glVertex3f( 627, 1005, 0.0);
        glVertex3f( 647, 1011, 0.0);
        glVertex3f( 663, 1019, 0.0);
        glVertex3f( 685, 1021, 0.0);
        glVertex3f( 699, 1011, 0.0);
        glVertex3f( 713, 1005, 0.0);


      glEnd();

      glColor3f(0,0,0);
        glBegin(GL_POLYGON);

        glVertex3f( 713, 983, 0.0);
        glVertex3f( 723, 967, 0.0);
        glVertex3f( 737, 943, 0.0);
        glVertex3f( 735, 907, 0.0);
        glVertex3f( 731, 879, 0.0);


        glVertex3f( 713, 855, 0.0);
        glVertex3f( 693, 845, 0.0);
        glVertex3f( 665, 841, 0.0);
        glVertex3f( 643, 845, 0.0);
        glVertex3f( 623, 859, 0.0);
        glVertex3f( 607, 889, 0.0);
        glVertex3f( 599, 919, 0.0);
        glVertex3f( 605, 945, 0.0);
        glVertex3f( 613, 963, 0.0);
        glVertex3f( 625, 977, 0.0);
        glVertex3f( 647, 989, 0.0);
        glVertex3f( 671, 995, 0.0);
        glVertex3f( 695, 995, 0.0);
        glVertex3f( 707, 989, 0.0);


      glEnd();

    glPopMatrix();
}
void amp(){
    glColor3f(0,0,0);
        glBegin(GL_POLYGON);

        glVertex3f( 771, 743, 0.0);
        glVertex3f( 795, 727, 0.0);
        glVertex3f( 793, 653, 0.0);
        glVertex3f( 795, 581, 0.0);
        glVertex3f( 793, 565, 0.0);
        glVertex3f( 779, 553, 0.0);
        glVertex3f( 705, 551, 0.0);
        glVertex3f( 629, 551, 0.0);
        glVertex3f( 613, 567, 0.0);
        glVertex3f( 615, 637, 0.0);
        glVertex3f( 613, 717, 0.0);
        glVertex3f( 613, 733, 0.0);
        glVertex3f( 629, 743, 0.0);
        glVertex3f( 677, 745, 0.0);
        glVertex3f( 745, 743, 0.0);
        glVertex3f( 777, 743, 0.0);


      glEnd();

}

void tree(int a , int b)
{
        glPushMatrix();

    glTranslatef(a,b,0);


    //leaves
    glColor3f(.725, 1 , .341);
        glBegin(GL_POLYGON);

        glVertex3f( 125, 83, 0.0);
        glVertex3f( 145, 59, 0.0);
                    glColor3f(.725, 1 , .341);
        glVertex3f( 165, 23, 0.0);
        glVertex3f( 139, 5, 0.0);
                    glColor3f(.725, 1 , .341);
        glVertex3f( 93, 15, 0.0);
        glVertex3f( 59, 9, 0.0);
                    glColor3f(0.141,0.561,0.141);
        glVertex3f( 25, 11, 0.0);
        glVertex3f( 15, 31, 0.0);
                    glColor3f(0.141,0.561,0.141);
        glVertex3f( 3, 51, 0.0);
        glVertex3f( 3, 89, 0.0);
                    glColor3f(.725, 1 , .341);
        glVertex3f( 47, 93, 0.0);
        glVertex3f( 87, 87, 0.0);
                    glColor3f(0.141,0.561,0.141);
        glVertex3f( 111, 83, 0.0);


      glEnd();

    //wood
    glColor3f(.725, .478 , .341);
        glBegin(GL_POLYGON);

        glVertex3f( 115, 147, 0.0);
        glVertex3f( 105, 115, 0.0);
                    glColor3f(.725, .478 , .341);
        glVertex3f( 103, 81, 0.0);
        glVertex3f( 109, 57, 0.0);
                    glColor3f(.725, .478 , .341);
        glVertex3f( 113, 51, 0.0);
        glVertex3f( 95, 41, 0.0);
                    glColor3f(.725, .478 , .341);
        glVertex3f( 83, 55, 0.0);
        glVertex3f( 75, 59, 0.0);
                    glColor3f(.725, .478 , .341);
        glVertex3f( 63, 51, 0.0);
        glVertex3f( 51, 45, 0.0);
                    glColor3f(.725, .478 , .341);
        glVertex3f( 45, 57, 0.0);
        glVertex3f( 39, 61, 0.0);
                    glColor3f(0.4,0.2,0);
        glVertex3f( 53, 77, 0.0);
        glVertex3f( 57, 89, 0.0);
                    glColor3f(0.4,0.2,0);
        glVertex3f( 57, 105, 0.0);
        glVertex3f( 61, 121, 0.0);
                    glColor3f(0.4,0.2,0);
        glVertex3f( 61, 141, 0.0);
        glVertex3f( 61, 149, 0.0);
                    glColor3f(0.4,0.2,0);
        glVertex3f( 83, 147, 0.0);
        glVertex3f( 107, 147, 0.0);


      glEnd();


    glPopMatrix();

}
//533,369
void guitarist(){


glPushMatrix();
glTranslatef(tx,ty,0);
    //L shoe
    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 495, 745, 0.0);
        glVertex3f( 485, 731, 0.0);
        glVertex3f( 465, 713, 0.0);
        glVertex3f( 443, 723, 0.0);
        glVertex3f( 421, 737, 0.0);
        glVertex3f( 419, 743, 0.0);
        glVertex3f( 441, 745, 0.0);
        glVertex3f( 467, 747, 0.0);

        glVertex3f( 491, 745, 0.0);

      glEnd();

      //R shoe
    glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);

        glVertex3f( 377, 739, 0.0);
        glVertex3f( 353, 725, 0.0);
        glVertex3f( 333, 713, 0.0);
        glVertex3f( 323, 721, 0.0);
        glVertex3f( 301, 737, 0.0);
        glVertex3f( 323, 743, 0.0);
        glVertex3f( 353, 743, 0.0);
        glVertex3f( 371, 743, 0.0);



      glEnd();


      // L pants
      glColor3f(.31,0,.09);
        glBegin(GL_POLYGON);

        glVertex3f( 459, 715, 0.0);
        glVertex3f( 451, 585, 0.0);
        glVertex3f( 441, 451, 0.0);
        glVertex3f( 437, 421, 0.0);

        glVertex3f( 381, 409, 0.0);


        glVertex3f( 401, 569, 0.0);


        glVertex3f( 413, 677, 0.0);
        glVertex3f( 413, 733, 0.0);
        glVertex3f( 443, 719, 0.0);


      glEnd();


      // R pants
      glColor3f(.31,0,.09);
        glBegin(GL_POLYGON);

        glVertex3f( 375, 735, 0.0);
        glVertex3f( 377, 597, 0.0);
        glVertex3f( 373, 471, 0.0);
        glVertex3f( 379, 405, 0.0);

        glVertex3f( 329, 397, 0.0);


        glVertex3f( 333, 467, 0.0);


        glVertex3f( 331, 567, 0.0);
        glVertex3f( 329, 713, 0.0);
        glVertex3f( 359, 729, 0.0);


      glEnd();

      // tshirt no hand
      glColor3f(.90,.30,0);
        glBegin(GL_POLYGON);

        glVertex3f( 437, 415, 0.0);
        glVertex3f( 439, 333, 0.0);
                    glColor3f(.90,.30,0);
        glVertex3f( 445, 281, 0.0);
        glVertex3f( 453, 235, 0.0);
                    glColor3f(.90,.30,0);
        glVertex3f( 411, 217, 0.0);
        glVertex3f( 399, 231, 0.0);
                    glColor3f(.90,.30,0);

        glVertex3f( 371, 229, 0.0);
        glVertex3f( 361, 221, 0.0);
                    glColor3f(.90,.30,0);
        glVertex3f( 335, 225, 0.0);

        glVertex3f( 307, 233, 0.0);
                    glColor3f(.90,.30,0);
        glVertex3f( 321, 269, 0.0);
        glVertex3f( 327, 297, 0.0);
                    glColor3f(0.2, 0 , 0.06);
        glVertex3f( 329, 333, 0.0);

        glVertex3f( 327, 377, 0.0);
                    glColor3f(0.2, 0 , 0.06);

        glVertex3f( 329, 423, 0.0);
      glEnd();


         // L hand half
      glColor3f(1,.64,.4);
        glBegin(GL_POLYGON);

        glVertex3f( 529, 383, 0.0);
        glVertex3f( 513, 341, 0.0);
                    glColor3f(1,.64,.4);
        glVertex3f( 497, 301, 0.0);
        glVertex3f( 455, 233, 0.0);
                    glColor3f(.90,.45,0);
        glVertex3f( 453, 261, 0.0);
        glVertex3f( 445, 285, 0.0);

                    glColor3f(.90,.45,0);
        glVertex3f( 465, 329, 0.0);
        glVertex3f( 487, 375, 0.0);
                    glColor3f(.90,.45,0);
       glVertex3f( 501, 393, 0.0);
        glVertex3f( 515, 391, 0.0);


      glEnd();



      // R hand half
      glColor3f(1,.64,.4);
        glBegin(GL_POLYGON);

        glVertex3f( 303, 359, 0.0);
        glVertex3f( 319, 309, 0.0);
                glColor3f(1,.64,.4);
        glVertex3f( 321, 271, 0.0);
        glVertex3f( 309, 237, 0.0);
                glColor3f(.90,.45,0);
        glVertex3f( 287, 273, 0.0);
        glVertex3f( 277, 323, 0.0);
                glColor3f(.90,.45,0);
        glVertex3f( 267, 371, 0.0);
        glVertex3f( 289, 361, 0.0);

      glEnd();




      /// guitar
      glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 475, 427, 0.0);
        glVertex3f( 463, 423, 0.0);
        glVertex3f( 445, 413, 0.0);
        glVertex3f( 445, 401, 0.0);

        glVertex3f( 445, 367, 0.0);

        glVertex3f( 441, 351, 0.0);


        glVertex3f( 445, 335, 0.0);


        glVertex3f( 465, 319, 0.0);


        glVertex3f( 441, 315, 0.0);
        glVertex3f( 417, 325, 0.0);
        glVertex3f( 403, 339, 0.0);
        glVertex3f( 383, 349, 0.0);

        glVertex3f( 355, 351, 0.0);

        glVertex3f( 331, 357, 0.0);


        glVertex3f( 307, 383, 0.0);


        glVertex3f( 295, 415, 0.0);

 glVertex3f( 299, 447, 0.0);
        glVertex3f( 313, 465, 0.0);
        glVertex3f( 329, 487, 0.0);
        glVertex3f( 357, 493, 0.0);
        glVertex3f( 377, 489, 0.0);
        glVertex3f( 399, 475, 0.0);
        glVertex3f( 407, 459, 0.0);
        glVertex3f( 421, 453, 0.0);
        glVertex3f( 443, 453, 0.0);
        glVertex3f( 455, 451, 0.0);
        glVertex3f( 469, 443, 0.0);
        glVertex3f( 477, 433, 0.0);

      glEnd();





      // guitar pickup
      glColor3f(1, 1 , .9);
        glBegin(GL_POLYGON);

        glVertex3f( 371, 437, 0.0);
        glVertex3f( 355, 397, 0.0);
        glVertex3f( 335, 403, 0.0);
        glVertex3f( 353, 447, 0.0);
    glEnd();

    // guitar pickup fret-end
      glColor3f(1, 1 , .9);
        glBegin(GL_POLYGON);

        glVertex3f( 419, 413, 0.0);
        glVertex3f( 405, 383, 0.0);
        glVertex3f( 393, 385, 0.0);
        glVertex3f( 405, 419, 0.0);
    glEnd();


     // guitar  fret
      glColor3f(.5, 0.25 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 591, 335, 0.0);
        glVertex3f( 583, 311, 0.0);
        glVertex3f( 409, 385, 0.0);
        glVertex3f( 417, 407, 0.0);
    glEnd();




    // guitar  head
      glColor3f(.2,0,0);
        glBegin(GL_POLYGON);

        glVertex3f( 669, 307, 0.0);
        glVertex3f( 657, 291, 0.0);
        glVertex3f( 633, 289, 0.0);
        glVertex3f( 609, 291, 0.0);

        glVertex3f( 583, 299, 0.0);
        glVertex3f( 583, 317, 0.0);
        glVertex3f( 599, 339, 0.0);
        glVertex3f( 619, 331, 0.0);

        glVertex3f( 639, 317, 0.0);
        glVertex3f( 659, 315, 0.0);
        glVertex3f( 669, 305, 0.0);

    glEnd();


    // guitar  string1
      glColor3f(1, 1 , 1);
        glBegin(GL_POLYGON);

        glVertex3f( 606, 309, 0.0);
        glVertex3f( 604, 306, 0.0);
        glVertex3f( 359, 409, 0.0);
        glVertex3f( 360, 412, 0.0);
    glEnd();

    // guitar  string2
      glColor3f(1, 1 , 1);
        glBegin(GL_POLYGON);

        glVertex3f( 622, 310, 0.0);
        glVertex3f( 620, 308, 0.0);
        glVertex3f( 362, 416, 0.0);
        glVertex3f( 364, 420, 0.0);
    glEnd();

    // guitar  string3
      glColor3f(1, 1 , 1);
        glBegin(GL_POLYGON);

        glVertex3f( 638, 311, 0.0);
        glVertex3f( 636, 308, 0.0);
        glVertex3f( 365, 425, 0.0);
        glVertex3f( 367, 428, 0.0);
    glEnd();

//    // guitar  nob1
//      glColor3f(.01, .11 , .01);
//        glBegin(GL_POLYGON);
//
//        glVertex3f( 640, 308, 0.0);
//        glVertex3f( 636, 306, 0.0);
//        glVertex3f( 634, 309, 0.0);
//        glVertex3f( 637, 314, 0.0);
//
//        glVertex3f( 641, 311, 0.0);
//
//    glEnd();

    /// L hand body-part
    glPushMatrix();
    glTranslatef(533,369,0);
    glRotatef(spin, 0.0, 0.0, 1.0);
      glColor3f(1, 1 , .9);
        glBegin(GL_POLYGON);

        glVertex3f( 583-533, 340-369, 0.0);
        glVertex3f( 573-533, 321-369, 0.0);
        glVertex3f( 565-533, 327-369, 0.0);
        glVertex3f( 559-533, 337-369, 0.0);


        glVertex3f( 554-533, 339-369, 0.0);
        glVertex3f( 545-533, 341-369, 0.0);
        glVertex3f( 541-533, 344-369, 0.0);
        glVertex3f( 543-533, 357-369, 0.0);





        glVertex3f( 521-533, 367-369, 0.0);
        glVertex3f( 491-533, 380-369, 0.0);
        glVertex3f( 499-533, 395-369, 0.0);
        glVertex3f( 508-533, 396-369, 0.0);
        glVertex3f( 555-533, 373-369, 0.0);
        glVertex3f( 573-533, 362-369, 0.0);
        glVertex3f( 581-533, 352-369, 0.0);
        glVertex3f( 584-533, 344-369, 0.0);
    glEnd();
   glPopMatrix();

    // R hand body-part
    glPushMatrix();
    glTranslatef(295,372,0);
    glRotatef(spin1, 0.0,0.0,1.0);
      glColor3f(1, 1 , .9);
        glBegin(GL_POLYGON);

        glVertex3f( 391-295, 410-372, 0.0);
//        glVertex3f( 378, 486, 0.0);
        glVertex3f( 380-295, 387-372, 0.0);

        glVertex3f( 363-295, 386-372, 0.0);
        glVertex3f( 334-295, 374-372, 0.0);


        glVertex3f( 304-295, 360-372, 0.0);
        glVertex3f( 287-295, 368-372, 0.0);

//        glVertex3f( 269, 381, 0.0);
        glVertex3f( 267-295, 368-372, 0.0);

        glVertex3f( 278-295, 389-372, 0.0);





        glVertex3f( 303-295, 400-372, 0.0);
        glVertex3f( 337-295, 411-372, 0.0);
        glVertex3f( 348-295, 416-372, 0.0);
//        glVertex3f( 356, 431, 0.0);
//        glVertex3f( 366, 430, 0.0);
//        glVertex3f( 379, 424, 0.0);
//        glVertex3f( 389, 419, 0.0);


        glVertex3f( 338-295, 410-372, 0.0);
        glVertex3f( 351-295, 420-372, 0.0);
        glVertex3f( 359-295, 433-372, 0.0);
        glVertex3f( 374-295, 428-372, 0.0);
        glEnd();
        glPopMatrix();

        //head
      glColor3f(1, .647 , 0);
        glBegin(GL_POLYGON);

//        glVertex3f( 405, 217, 0.0);
        glVertex3f( 402, 215, 0.0);
        glVertex3f( 403, 209, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 413, 209, 0.0);

        glVertex3f( 423, 202, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 427, 193, 0.0);
        glVertex3f( 429, 188, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 437, 180, 0.0);

        glVertex3f( 439, 171, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 439, 164, 0.0);
        glVertex3f( 446, 159, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 451, 152, 0.0);


        glVertex3f( 451, 143, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 448, 133, 0.0);
        glVertex3f( 440, 128, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 440, 89, 0.0);

        glVertex3f( 444, 83, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 445, 73, 0.0);
        glVertex3f( 444, 67, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 442, 58, 0.0);



        glVertex3f( 435, 53, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 429, 49, 0.0);
        glVertex3f( 417, 50, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 400, 50, 0.0);

        glVertex3f( 367, 50, 0.0);
        glVertex3f( 346, 56, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 341, 55, 0.0);
        glVertex3f( 334, 59, 0.0);
                    glColor3f(1, .647 , 0);

        glVertex3f( 331, 66, 0.0);
        glVertex3f( 327, 80, 0.0);
                    glColor3f(1, .647 , 0);
        glVertex3f( 326, 93, 0.0);
        glVertex3f( 326, 127, 0.0);
                    glColor3f(0.9, .45 , 0);
        glVertex3f( 315, 136, 0.0);
        glVertex3f( 316, 157, 0.0);
                    glColor3f(0.9, .45 , 0);
        glVertex3f( 326, 165, 0.0);
        glVertex3f( 329, 186, 0.0);

                    glColor3f(0.9, .45 , 0);



        glVertex3f( 336, 195, 0.0);
        glVertex3f( 342, 204, 0.0);
                    glColor3f(0.9, .45 , 0);
        glVertex3f( 353, 211, 0.0);
        glVertex3f( 368, 212, 0.0);
                    glColor3f(0.9, .45 , 0);
        glVertex3f( 390, 216, 0.0);
        glVertex3f( 399, 212, 0.0);
//        glVertex3f( 326, 165, 0.0);
//        glVertex3f( 329, 186, 0.0);



    glEnd();




    // face
      glColor3f(1, 1 , .9);
        glBegin(GL_POLYGON);

        glVertex3f( 430, 162, 0.0);
        glVertex3f( 432, 122, 0.0);
        glVertex3f( 431, 99, 0.0);
        glVertex3f( 417, 103, 0.0);


        glVertex3f( 396, 105, 0.0);
        glVertex3f( 374, 105, 0.0);
        glVertex3f( 357, 101, 0.0);
        glVertex3f( 342, 101, 0.0);


        glVertex3f( 335, 109, 0.0);
        glVertex3f( 334, 127, 0.0);
        glVertex3f( 335, 155, 0.0);
        glVertex3f( 339, 165, 0.0);


        glVertex3f( 348, 172, 0.0);
        glVertex3f( 362, 171, 0.0);
        glVertex3f( 376, 168, 0.0);
        glVertex3f( 390, 169, 0.0);

        glVertex3f( 406, 172, 0.0);
        glVertex3f( 418, 173, 0.0);
        glVertex3f( 426, 166, 0.0);

    glEnd();


    // eye brows
      glColor3f(1, .647 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 424, 130, 0.0);
        glVertex3f( 426, 127, 0.0);
        glVertex3f( 423, 123, 0.0);
        glVertex3f( 412, 123, 0.0);

        glVertex3f( 400, 123, 0.0);
        glVertex3f( 396, 127, 0.0);
        glVertex3f( 401, 131, 0.0);
        glVertex3f( 411, 131, 0.0);

        glVertex3f( 420, 131, 0.0);

    glEnd();


    glColor3f(1, .647 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 366, 131, 0.0);
        glVertex3f( 369, 127, 0.0);
        glVertex3f( 365, 122, 0.0);
        glVertex3f( 354, 122, 0.0);

        glVertex3f( 341, 122, 0.0);
        glVertex3f( 339, 127, 0.0);
        glVertex3f( 343, 131, 0.0);
        glVertex3f( 356, 131, 0.0);

        glVertex3f( 364, 131, 0.0);

    glEnd();

    // eye
    glPushMatrix();

      glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 425, 140, 0.0);
        glVertex3f( 421, 136, 0.0);
        glVertex3f( 417, 139, 0.0);
        glVertex3f( 411, 141, 0.0);


        glVertex3f( 405, 139, 0.0);
        glVertex3f( 401, 137, 0.0);
        glVertex3f( 398, 139, 0.0);
        glVertex3f( 403, 143, 0.0);

        glVertex3f( 408, 146, 0.0);
        glVertex3f( 416, 146, 0.0);
        glVertex3f( 420, 143, 0.0);
        glVertex3f( 423, 140, 0.0);
    glEnd();
    glPopMatrix();


    // eye right
    glPushMatrix();
    glTranslatef(-53,0,0);
      glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 425, 140, 0.0);
        glVertex3f( 421, 136, 0.0);
        glVertex3f( 417, 139, 0.0);
        glVertex3f( 411, 141, 0.0);


        glVertex3f( 405, 139, 0.0);
        glVertex3f( 401, 137, 0.0);
        glVertex3f( 398, 139, 0.0);
        glVertex3f( 403, 143, 0.0);

        glVertex3f( 408, 146, 0.0);
        glVertex3f( 416, 146, 0.0);
        glVertex3f( 420, 143, 0.0);
        glVertex3f( 423, 140, 0.0);
    glEnd();
    glPopMatrix();


    // throat

      glColor3f(1, 1 , .9);
        glBegin(GL_POLYGON);

        glVertex3f( 401, 218, 0.0);
        glVertex3f( 403, 218, 0.0);
        glVertex3f( 403, 210, 0.0);
        glVertex3f( 398, 214, 0.0);


        glVertex3f( 385, 217, 0.0);
        glVertex3f( 376, 215, 0.0);
        glVertex3f( 368, 212, 0.0);
        glVertex3f( 364, 212, 0.0);

        glVertex3f( 364, 218, 0.0);
        glVertex3f( 360, 218, 0.0);
        glVertex3f( 362, 224, 0.0);
        glVertex3f( 366, 228, 0.0);


        glVertex3f( 373, 233, 0.0);
        glVertex3f( 377, 235, 0.0);
        glVertex3f( 384, 236, 0.0);
        glVertex3f( 391, 233, 0.0);
        glVertex3f( 398, 231, 0.0);
        glVertex3f( 402, 226, 0.0);
        glVertex3f( 405, 222, 0.0);
        glEnd();



glPopMatrix();

}
void tree_border(){


      glColor3f(0, 1 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 2385, 209, 0.0);
                    glColor3f(0.251, 0.749 , 0.5);
        glVertex3f( 2383, 139, 0.0);
                    glColor3f(0.251, 0.749 , 0.5);
        glVertex3f( 7, 147, 0.0);
                    glColor3f(0.125, 0.376 , 0.251);
        glVertex3f( 5, 195, 0.0);




      glEnd();
}

void display(){
    //backplate
    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1777, 529, 0.0);
        glVertex3f( 1779, 89, 0.0);
        glVertex3f( 1081, 91, 0.0);
        glVertex3f( 1087, 529, 0.0);
    glEnd();

    //screen
    glColor3f(1, 1 , 1);
        glBegin(GL_POLYGON);

        glVertex3f( 1759, 503, 0.0);
        glVertex3f( 1759, 113, 0.0);
        glVertex3f( 1111, 117, 0.0);
        glVertex3f( 1111, 503, 0.0);
    glEnd();

    //base 1
    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1675, 481, 0.0);
        glVertex3f( 1671, 411, 0.0);
        glVertex3f( 1187, 411, 0.0);
        glVertex3f( 1187, 481, 0.0);
    glEnd();
    //base2
    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1699, 705, 0.0);
        glVertex3f( 1699, 531, 0.0);
        glVertex3f( 1671, 531, 0.0);
        glVertex3f( 1671, 705, 0.0);
    glEnd();
    //interbase
    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1185, 709, 0.0);
        glVertex3f( 1185, 527, 0.0);
        glVertex3f( 1153, 527, 0.0);
        glVertex3f( 1153, 709, 0.0);
    glEnd();



}

void dancer(int a, int b){
glPushMatrix();
glTranslatef(a,b,0);

    glPushMatrix();

    glColor3f(0, 0 , 0);

        glTranslatef(1315,200,0);
        circle(30,30);
    glPopMatrix();


    //1-body

    glPushMatrix();

            glTranslatef(1309,287,0);
            glRotatef(s4,0,0,1);

        glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1320-1309, 336-287, 0.0);
        glVertex3f( 1320-1309, 239-287, 0.0);
        glVertex3f( 1304-1309, 239-287, 0.0);
        glVertex3f( 1304-1309, 336-287, 0.0);
    glEnd();
    glPopMatrix();


    //2-R-hand
    glPushMatrix();

                glTranslatef(1309, 247,0);
                glRotatef(s1, 0.0, 0.0, 1.0);
    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1382-1309, 258-247, 0.0);
        glVertex3f( 1379-1309, 246-247, 0.0);
        glVertex3f( 1326-1309, 264-247, 0.0);
        glVertex3f( 1328-1309, 275-247, 0.0);
    glEnd();
    glPopMatrix();

    //3-L-hand
    glPushMatrix();
            glTranslatef(1309, 247,0);
            glRotatef(s2, 0.0, 0.0, 1.0);
    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1295-1309, 273-247, 0.0);
        glVertex3f( 1295-1309, 260-247, 0.0);
        glVertex3f( 1240-1309, 244-247, 0.0);
        glVertex3f( 1237-1309, 255-247, 0.0);
    glEnd();
    glPopMatrix();

    //4 L-leg
    glPushMatrix();

            glTranslatef(1309,329,0);
            glRotatef(s3, 0.0, 0.0, 1.0);

    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1295-1309, 339-329, 0.0);
        glVertex3f( 1295-1309, 328-329, 0.0);
        //
        glVertex3f( 1231-1309, 368-329, 0.0);
        glVertex3f( 1235-1309, 378-329, 0.0);
    glEnd();
    glPopMatrix();

    //5 R-leg
    glPushMatrix();

                    glTranslatef(1309,329,0);
                    glRotatef(s4, 0.0, 0.0, 1.0);

    glColor3f(0, 0 , 0);
        glBegin(GL_POLYGON);

        glVertex3f( 1382-1309, 378-329, 0.0);
        glVertex3f( 1387-1309, 368-329, 0.0);
        //not x
        glVertex3f( 1326-1309, 328-329, 0.0);
        glVertex3f( 1328-1309, 339-329, 0.0);
    glEnd();
    glPopMatrix();

glPopMatrix();
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    river();
    stage();
    amp();


    tree_border();


    tree(6,6);
    tree(96,6);
    tree(186,6);
    tree(276,6);
    tree(366,6);
    tree(456,6);
    tree(546,6);
    tree(636,6);
    tree(726,6);
    tree(816,6);
    tree(906,6);
    tree(996,6);
    tree(1086,6);
    tree(1176,6);

    tree(1266,6);
    tree(1356,6);
    tree(1446,6);
    tree(1536,6);
    tree(1626,6);
    tree(1716,6);
    tree(1806,6);
    tree(1896,6);
    tree(1986,6);
    tree(2076,6);
    tree(2166,6);
    tree(2256,6);




    display();
    dancer(0,0);
    dancer(220,0);
    guitarist();


    human(-200,10,0,0,.87);
    human(-450,10,0,.87,0);
    human(50,10,.89,0,.93);
    human(300,10,.79,0,0);

    human(550,10,.91,0,0);
    human(800,10,1,.9,0.14);
    human(1050,10,0.4,0.13,1);
    human(1300,10,.64,.97,1);
    human(1550,10,1,1,0);
    human(1800,10,1,0,1);
    human(2050,10,1,0,1);
    human(2300,10,1,1,0);
//    glutIdleFunc(spinDisplay_right);

    glFlush();
}
void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=2;

				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				tx +=2;
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
				ty -=2;
				glutPostRedisplay();
				break;

		case GLUT_KEY_UP:
				ty +=2;
				PlaySound("", NULL, SND_FILENAME| SND_ASYNC);
				glutPostRedisplay();
				break;
	  default:
			break;
	}
}
void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)//mouse press detected
           glutIdleFunc(spinDisplay_left);//then call the spinDisplay_left func to spin in left direction
           PlaySound("1.wav", NULL, SND_FILENAME| SND_ASYNC);
         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
//          glutIdleFunc(spinDisplay_right);
          PlaySound("2.wav", NULL, SND_FILENAME| SND_ASYNC);
         break;
      default:
         break;
   }
}


int main()
{
    glutInitWindowSize(980,600);
    glutInitWindowPosition(200,100);
    glutCreateWindow("rockstar!");
    init();
    glutDisplayFunc(myDisplay);
    glutMouseFunc(my_mouse);
    glutSpecialFunc(spe_key);
    glutKeyboardFunc(my_keyboard);
    glutMainLoop();
    return 0;
}
