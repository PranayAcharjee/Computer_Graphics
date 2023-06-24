 #include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

float _move3= 0.0f;
float _move4= 0.0f;
GLfloat speed4= 0.2f;
float _move5= 0.0f;
float _move6= 0.0f;
float _move7= 0.0f;
float _move8= 0.0f;
float _move9= 1.0f;
float _moveM= 0.0f;
GLfloat startStop = 0;

void update_cloud(int value)  ///cloud_move
{
_move3 += 1.5;
    if(_move3 >800)
    {
    _move3 =-450;
    }
glutPostRedisplay();
glutTimerFunc(20, update_cloud, 0);
}

void update_sun(int value)      ///sun_move
{
_move4 -= speed4;
glutPostRedisplay();
glutTimerFunc(20, update_sun, 0);
}

void update_boat(int value)     ///boat_move
{
    if(_move5 < -500)
    {
    _move5 = 300;
    }
_move5 -= _move9;
glutPostRedisplay();
glutTimerFunc(20, update_boat, 0);
}

void update_wave(int value)      ///move_wave
{
    if(_move7 < -400)
    {
    _move7 = 100;
    }
_move7 -= 1.0;
glutPostRedisplay();
glutTimerFunc(20, update_wave, 0);
}

void update_wave6(int value)       ///move_wave
{
    if(_move8 < -400)
    {
    _move8 = 100;
    }
_move8 -= 2.0;
glutPostRedisplay();
glutTimerFunc(20, update_wave6, 0);
}

void update_waterflower(int value)    ///move_water_flow
{
    if(_move6 > 500)
    {
    _move6 = -300;
    }
_move6 += 2.0;
glutPostRedisplay();
glutTimerFunc(20, update_waterflower, 0);
}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,600.0,-250.0,500.0);
    glMatrixMode(GL_MODELVIEW);
}

void Evening()
{
///sky
    glColor3ub(249.0f,226.0f,79.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glVertex2f(600.0f,0.0f);
    glColor3ub(255.0f,255.0f,51.0f);
    glVertex2f(600.0f,500.0f);
    glColor3ub(255.0f,178.0f,102.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();

///sun
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,_move4, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,133.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=35.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+550,y+410);
        }
  glEnd();
  glPopMatrix();


///cloud
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=18.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+105,y+360);
        }

  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {

        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+130,y+360);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
       glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+120,y+380);
        }
  glEnd();
  glPopMatrix();

///cloud
  glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+60,y+310);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y+310);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+75,y+335);
        }
  glEnd();
  glPopMatrix();

///cloud
  glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+450,y+340);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+480,y+340);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+465,y+370);
        }
  glEnd();
  glPopMatrix();

///river
    glColor3ub(128.0f,204.0f,255.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,0.0f);
    glColor3ub(255.0f,194.0f,102.0f);
    glVertex2f(0.0f,-250.0f);
    glColor3ub(255.0f,194.0f,102.0f);
    glVertex2f(600.0f,-250.0f);
    glColor3ub(26.0f,163.0f,255.0f);
    glVertex2f(600.0f,0.0f);
    glEnd();


    glColor3ub(128.0f,204.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glColor3ub(26.0f,163.0f,255.0f);
    glVertex2f(205.0f,5.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(0.0f,30.0f);
    glVertex2f(0.0f,0.0f);
    glEnd();


    glColor3ub(128.0f,204.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(395.0f,30.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(400.0f,0.0f);
    glColor3ub(26.0f,163.0f,255.0f);
    glVertex2f(600.0f,0.0f);
    glColor3ub(220.0f,220.0f,220.0f);
    glVertex2f(600.0f,30.0f);
    glEnd();

    ///boat

    glColor3ub(153.0f,51.0f,0.0f);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move5, _moveM, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(445.0f,-200.0f);
    glColor3ub(204.0f,68.0f,0.0f);
    glVertex2f(460.0f,-220.0f);
    glVertex2f(525.0f,-220.0f);
    glVertex2f(540.0f,-200.0f);
    glEnd();

    glColor3ub(102.0f,61.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(457.0f,-200.0f);
    glVertex2f(460.0f,-200.0f);
    glVertex2f(460.0f,-160.0f);
    glVertex2f(457.0f,-160.0f);
    glEnd();

    glColor3ub(102.0f,61.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(520.0f,-200.0f);
    glVertex2f(523.0f,-200.0f);
    glVertex2f(523.0f,-150.0f);
    glVertex2f(520.0f,-150.0f);
    glEnd();

    glColor3ub(0.0f,0.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(450.0f,-160.0f);
    glVertex2f(530.0f,-150.0f);
    glVertex2f(530.0f,-145.0f);
    glVertex2f(450.0f,-155.0f);
    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(128, 0, 0);
    glVertex2f(520.0f, -235.0f);
    glVertex2f(535.0f, -175.0f);
    glEnd();

    glPopMatrix();

 ///water_flow
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);


  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+150,y-88);
        }
        glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+110,y-50);
        }
  glEnd();
  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y-90);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+250,y-88);
        }
        glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+300,y-38);
        }
        glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+310,y-98);
        }
        glEnd();


  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(0.0,153.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=10.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+210,y-50);
        }
  glEnd();
  glPopMatrix();


///mountain
    glColor3ub(0.0f,102.0f,51.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,30.0f);
    glVertex2f(205.0f,30.0f);
    glColor3ub(128.0f,255.0f,0.0f);
    glVertex2f(205.0f,60.0f);
    glVertex2f(70.0f,250.0f);
    glVertex2f(0.0f,150.0f);
    glEnd();

    glColor3ub(0.0f,102.0f,51.0f);
    glBegin(GL_POLYGON);
    glVertex2f(390.0f,30.0f);
    glVertex2f(600.0f,30.0f);
    glColor3ub(128.0f,255.0f,0.0f);
    glVertex2f(600.0f,180.0f);
    glVertex2f(500.0f,330.0f);
    glVertex2f(360.0f,60.0f);
    glEnd();

    glColor3ub(0.0f,102.0f,51.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(600.0f,180.0f);
    glVertex2f(600.0f,300.0f);
    glColor3ub(128.0f,255.0f,0.0f);
    glVertex2f(560.0f,240.0f);
    glEnd();

///fountain
    ///fountain1
    glColor3ub(26.0f,163.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(75.0f,180.0f);
    glVertex2f(65.0f,180.0f);
    glColor3ub(128.0f,191.0f,255.0f);
    glVertex2f(60.0f,30.0f);
    glVertex2f(80.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+59,y+30);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+69,y+30);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+79,y+30);
        }
	glEnd();

///fountain
	///fountain2
	glColor3ub(26.0f,163.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(520.0f,200.0f);
    glVertex2f(510.0f,200.0f);
    glColor3ub(128.0f,191.0f,255.0f);
    glVertex2f(505.0f,30.0f);
    glVertex2f(525.0f,30.0f);
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+507,y+30);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+517,y+30);
        }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
       glColor3ub(240.0,240.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=7.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+527,y+30);
        }
	glEnd();


///wave
    ///-----------------------------------1
   glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-20.0f);
    glVertex2f(40.0f,-15.0f);
    glVertex2f(10.0f,-20.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-20.0f);
    glVertex2f(140.0f,-15.0f);
    glVertex2f(110.0f,-20.0f);
    glEnd();

   glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-20.0f);
    glVertex2f(240.0f,-15.0f);
    glVertex2f(210.0f,-20.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-20.0f);
    glVertex2f(340.0f,-15.0f);
    glVertex2f(310.0f,-20.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-20.0f);
    glVertex2f(440.0f,-15.0f);
    glVertex2f(410.0f,-20.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-20.0f);
    glVertex2f(540.0f,-15.0f);
    glVertex2f(510.0f,-20.0f);
    glEnd();

    glPopMatrix();

///wave
    ///-----------------------------------2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-50.0f);
    glVertex2f(90.0f,-45.0f);
    glVertex2f(60.0f,-50.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-50.0f);
    glVertex2f(190.0f,-45.0f);
    glVertex2f(160.0f,-50.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-50.0f);
    glVertex2f(290.0f,-45.0f);
    glVertex2f(260.0f,-50.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-50.0f);
    glVertex2f(390.0f,-45.0f);
    glVertex2f(360.0f,-50.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-50.0f);
    glVertex2f(490.0f,-45.0f);
    glVertex2f(460.0f,-50.0f);
    glEnd();
    glPopMatrix();

///wave
    ///--------------------------------------3
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-80.0f);
    glVertex2f(40.0f,-75.0f);
    glVertex2f(10.0f,-80.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-80.0f);
    glVertex2f(140.0f,-75.0f);
    glVertex2f(110.0f,-80.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-80.0f);
    glVertex2f(240.0f,-75.0f);
    glVertex2f(210.0f,-80.0f);
    glEnd();

   glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-80.0f);
    glVertex2f(340.0f,-75.0f);
    glVertex2f(310.0f,-80.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-80.0f);
    glVertex2f(440.0f,-75.0f);
    glVertex2f(410.0f,-80.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-80.0f);
    glVertex2f(540.0f,-75.0f);
    glVertex2f(510.0f,-80.0f);
    glEnd();

    glPopMatrix();

///wave
    ///-------------------------------4
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-110.0f);
    glVertex2f(90.0f,-105.0f);
    glVertex2f(60.0f,-110.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-110.0f);
    glVertex2f(190.0f,-105.0f);
    glVertex2f(160.0f,-110.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-110.0f);
    glVertex2f(290.0f,-105.0f);
    glVertex2f(260.0f,-110.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-110.0f);
    glVertex2f(390.0f,-105.0f);
    glVertex2f(360.0f,-110.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-110.0f);
    glVertex2f(490.0f,-105.0f);
    glVertex2f(460.0f,-110.0f);
    glEnd();

    glPopMatrix();

///wave
    ///-----------------------------5
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-140.0f);
    glVertex2f(40.0f,-135.0f);
    glVertex2f(10.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-140.0f);
    glVertex2f(140.0f,-135.0f);
    glVertex2f(110.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-140.0f);
    glVertex2f(240.0f,-135.0f);
    glVertex2f(210.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-140.0f);
    glVertex2f(340.0f,-135.0f);
    glVertex2f(310.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-140.0f);
    glVertex2f(440.0f,-135.0f);
    glVertex2f(410.0f,-140.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-140.0f);
    glVertex2f(540.0f,-135.0f);
    glVertex2f(510.0f,-140.0f);
    glEnd();

    glPopMatrix();

///wave
    ///-------------------------------6
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move7, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(130.0f,-170.0f);
    glVertex2f(90.0f,-165.0f);
    glVertex2f(60.0f,-170.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(230.0f,-170.0f);
    glVertex2f(190.0f,-165.0f);
    glVertex2f(160.0f,-170.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(330.0f,-170.0f);
    glVertex2f(290.0f,-165.0f);
    glVertex2f(260.0f,-170.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(430.0f,-170.0f);
    glVertex2f(390.0f,-165.0f);
    glVertex2f(360.0f,-170.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(530.0f,-170.0f);
    glVertex2f(490.0f,-165.0f);
    glVertex2f(460.0f,-170.0f);
    glEnd();

    glPopMatrix();

///wave
    ///-----------------------------7
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70.0f,-200.0f);
    glVertex2f(40.0f,-195.0f);
    glVertex2f(10.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(170.0f,-200.0f);
    glVertex2f(140.0f,-195.0f);
    glVertex2f(110.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(270.0f,-200.0f);
    glVertex2f(240.0f,-195.0f);
    glVertex2f(210.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(370.0f,-200.0f);
    glVertex2f(340.0f,-195.0f);
    glVertex2f(310.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(470.0f,-200.0f);
    glVertex2f(440.0f,-195.0f);
    glVertex2f(410.0f,-200.0f);
    glEnd();

    glColor3ub(77.0f,184.0f,255.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,-200.0f);
    glVertex2f(540.0f,-195.0f);
    glVertex2f(510.0f,-200.0f);
    glEnd();

    glPopMatrix();


///mosque
    //base
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glVertex2f(400.0f,0.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(205.0f,5.0f);
    glEnd();

    //Left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,5.0f);
    glVertex2f(220.0f,5.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(205.0f,100.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(205.0f,100.0f);
    glVertex2f(220.0f,100.0f);
    glVertex2f(225.0f,110.0f);
    glVertex2f(200.0f,110.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(206.0f,110.0f);
    glVertex2f(219.0f,110.0f);
    glVertex2f(219.0f,140.0f);
    glVertex2f(206.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(212.5f,140.0f);
    glVertex2f(218.0f,160.0f);
    glVertex2f(212.5f,180.0f);
    glVertex2f(207.0f,160.0f);
    glEnd();

    //second left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,60.0f);
    glVertex2f(240.0f,60.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(230.0f,90.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(230.0f,90.0f);
    glVertex2f(240.0f,90.0f);
    glVertex2f(245.0f,95.0f);
    glVertex2f(225.0f,95.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(231.0f,95.0f);
    glVertex2f(239.0f,95.0f);
    glVertex2f(239.0f,125.0f);
    glVertex2f(231.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(235.0f,125.0f);
    glVertex2f(238.0f,135.0f);
    glVertex2f(235.0f,145.0f);
    glVertex2f(232.0f,135.0f);
    glEnd();


    //Right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,5.0f);
    glVertex2f(395.0f,5.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(380.0f,100.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(380.0f,100.0f);
    glVertex2f(395.0f,100.0f);
    glVertex2f(400.0f,110.0f);
    glVertex2f(375.0f,110.0f);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(381.0f,110.0f);
    glVertex2f(394.0f,110.0f);
    glVertex2f(394.0f,140.0f);
    glVertex2f(381.0f,140.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(387.5f,140.0f);
    glVertex2f(393.0f,160.0f);
    glVertex2f(387.5f,180.0f);
    glVertex2f(382.0f,160.0f);
    glEnd();

    //second right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,60.0f);
    glVertex2f(370.0f,60.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(360.0f,90.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,90.0f);
    glVertex2f(370.0f,90.0f);
    glVertex2f(375.0f,95.0f);
    glVertex2f(355.0f,95.0f);
    glEnd();


    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(361.0f,95.0f);
    glVertex2f(369.0f,95.0f);
    glVertex2f(369.0f,125.0f);
    glVertex2f(361.0f,125.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(365.0f,125.0f);
    glVertex2f(368.0f,135.0f);
    glVertex2f(365.0f,145.0f);
    glVertex2f(362.0f,135.0f);
    glEnd();

    //body
    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(220.0f,5.0f);
    glVertex2f(285.0f,5.0f);
    glVertex2f(285.0f,60.0f);
    glVertex2f(220.0f,60.0f);
    glEnd();

    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(315.0f,5.0f);
    glVertex2f(380.0f,5.0f);
    glVertex2f(380.0f,60.0f);
    glVertex2f(315.0f,60.0f);
    glEnd();

    //front door
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,0.0f);
    glVertex2f(315.0f,0.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(285.0f,70.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(290.0f,0.0f);
    glVertex2f(310.0f,0.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(290.0f,50.0f);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(290.0f,50.0f);
    glVertex2f(310.0f,50.0f);
    glVertex2f(300.0f,65.0f);
    glEnd();

    //left doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(225.0f,5.0f);
    glVertex2f(240.0f,5.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(225.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(225.0f,40.0f);
    glVertex2f(240.0f,40.0f);
    glVertex2f(232.5f,50.0f);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(245.0f,5.0f);
    glVertex2f(260.0f,5.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(245.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(245.0f,40.0f);
    glVertex2f(260.0f,40.0f);
    glVertex2f(252.5f,50.0f);
    glEnd();

    //3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(265.0f,5.0f);
    glVertex2f(280.0f,5.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(265.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(265.0f,40.0f);
    glVertex2f(280.0f,40.0f);
    glVertex2f(272.5f,50.0f);
    glEnd();

    //right doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(320.0f,5.0f);
    glVertex2f(335.0f,5.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(320.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(320.0f,40.0f);
    glVertex2f(335.0f,40.0f);
    glVertex2f(327.5f,50.0f);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(340.0f,5.0f);
    glVertex2f(355.0f,5.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(340.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(340.0f,40.0f);
    glVertex2f(355.0f,40.0f);
    glVertex2f(347.5f,50.0f);
    glEnd();

    //3
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(360.0f,5.0f);
    glVertex2f(375.0f,5.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(360.0f,40.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(360.0f,40.0f);
    glVertex2f(375.0f,40.0f);
    glVertex2f(367.5f,50.0f);
    glEnd();

    //left Miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(250.0f,60.0f);
    glVertex2f(270.0f,60.0f);
    glVertex2f(275.0f,75.0f);
    glVertex2f(260.0f,90.0f);
    glVertex2f(245.0f,75.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(260.0f,90.0f);
    glVertex2f(262.0f,97.0f);
    glVertex2f(260.0f,105.0f);
    glVertex2f(258.0f,97.0f);
    glEnd();


//middle miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(285.0f,70.0f);
    glVertex2f(315.0f,70.0f);
    glVertex2f(320.0f,90.0f);
    glVertex2f(300.0f,120.0f);
    glVertex2f(280.0f,90.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f,120.0f);
    glVertex2f(302.0f,127.0f);
    glVertex2f(300.0f,135.0f);
    glVertex2f(298.0f,127.0f);
    glEnd();

    //right  miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(330.0f,60.0f);
    glVertex2f(350.0f,60.0f);
    glVertex2f(355.0f,75.0f);
    glVertex2f(340.0f,90.0f);
    glVertex2f(325.0f,75.0f);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(340.0f,90.0f);
    glVertex2f(342.0f,97.0f);
    glVertex2f(340.0f,105.0f);
    glVertex2f(338.0f,97.0f);
    glEnd();
    glFlush();
}
void Keypressboat(unsigned char key, int x, int y)
{
 if(key=='u')
    {
        _moveM++;
        glutPostRedisplay();
    }
    else if(key=='d')
    {
        _moveM--;
        glutPostRedisplay();
    }
}

void mouse(int button, int state, int x, int y)
{
switch (button)
{
case GLUT_LEFT_BUTTON:

    if (state == GLUT_DOWN)
        _move9 = 1.0f;
        startStop=0;

    glutPostRedisplay();

    break;

case GLUT_RIGHT_BUTTON:

    if (state == GLUT_DOWN)
        _move9 = 0.0f;
        startStop=45;

        glutPostRedisplay();

    break;
default:
    break;
}
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 400);
    glutCreateWindow("Group5 Project");
    glutDisplayFunc(Evening);
    init();
    glutTimerFunc(20, update_cloud, 0);
    glutTimerFunc(20, update_sun, 0);
    glutTimerFunc(20, update_boat, 0);
    glutTimerFunc(20, update_waterflower, 0);
    glutTimerFunc(20, update_wave, 0);
    glutTimerFunc(20, update_wave6, 0);
    glutKeyboardFunc(Keypressboat);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}


