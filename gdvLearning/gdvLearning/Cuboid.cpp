//
//  Cuboid.cpp
//  gdvLearning
//
//  Created by yohidastero on 5/22/21.
//

#include "Cuboid.hpp"

Cuboid::Cuboid(GLfloat edgesLength) {
    setZWidth(edgesLength);
    setXLength(edgesLength);
    setYHeight(edgesLength);
}

Cuboid::Cuboid(GLfloat xLength, GLfloat yHeight, GLfloat zWidth) {
    
    
}

Cuboid* Cuboid::createCuboid(GLfloat xLength, GLfloat yHeight, GLfloat zWidth)  {
    
    GLfloat unitCubeEdge = 1;
    Cuboid* cuboid = new Cuboid(xLength, yHeight, zWidth);
    glPushMatrix();
    glScalef(xLength, yHeight, zWidth);
    createCube(unitCubeEdge);
    glPopMatrix();
    return cuboid;
}

void Cuboid::createCube(GLfloat edgeLength) {
    glBegin(GL_POLYGON);   //Vorderseite
    glColor4f(1.0f,0.0f,0.0f,1.0f);    //ROT
    glVertex3f(-edgeLength/2.0f,-edgeLength/2.0f,+edgeLength/2.0f);
    glColor4f(1.0f,1.0f,0.0f,1.0f); //GELB
    glVertex3f(+edgeLength/2.0f,-edgeLength/2.0f,+edgeLength/2.0f);
    glColor4f(1.0f,1.0f,1.0f,1.0f); //WEISS
    glVertex3f(+edgeLength/2.0f,+edgeLength/2.0f,+edgeLength/2.0f);
    glColor4f(1.0f,0.0f,1.0f,1.0f); //MAGENTA
    glVertex3f(-edgeLength/2.0f,+edgeLength/2.0f,+edgeLength/2.0f);
    glEnd();


    glBegin(GL_POLYGON);   //Rechte Seite
    glColor4f(1.0f,1.0f,0.0f,1.0f); //GELB
    glVertex3f(+edgeLength/2.0f,-edgeLength/2.0f,+edgeLength/2.0f);
    glColor4f(0.0f,1.0f,0.0f,1.0f); //GRUEN
    glVertex3f(+edgeLength/2.0f,-edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(0.0f,1.0f,1.0f,1.0f);    //CYAN
    glVertex3f(+edgeLength/2.0f,+edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(1.0f,1.0f,1.0f,1.0f); //WEISS
    glVertex3f(+edgeLength/2.0f,+edgeLength/2.0f,+edgeLength/2.0f);
    glEnd();


    glBegin(GL_POLYGON);   //Rueckseite
    glColor4f(0.0f,1.0f,1.0f,1.0f); //CYAN
    glVertex3f(+edgeLength/2.0f,+edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(0.0f,1.0f,0.0f,1.0f); //GRUEN
    glVertex3f(+edgeLength/2.0f,-edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(0.0f,0.0f,0.0f,1.0f); //SCHWARZ
    glVertex3f(-edgeLength/2.0f,-edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(0.0f,0.0f,1.0f,1.0f); //BLAU
    glVertex3f(-edgeLength/2.0f,+edgeLength/2.0f,-edgeLength/2.0f);
    glEnd();


    glBegin(GL_POLYGON);   //Linke Seite
    glColor4f(0.0f,0.0f,1.0f,1.0f); //BLAU
    glVertex3f(-edgeLength/2.0f,+edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(0.0f,0.0f,0.0f,1.0f); //SCHWARZ
    glVertex3f(-edgeLength/2.0f,-edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(1.0f,0.0f,0.0f,1.0f); //ROT
    glVertex3f(-edgeLength/2.0f,-edgeLength/2.0f,+edgeLength/2.0f);
    glColor4f(1.0f,0.0f,1.0f,1.0f); //MAGENTA
    glVertex3f(-edgeLength/2.0f,+edgeLength/2.0f,+edgeLength/2.0f);
    glEnd();

    glBegin(GL_POLYGON);   //Deckflaeche
    glColor4f(1.0f,0.0f,1.0f,1.0f); //MAGENTA
    glVertex3f(-edgeLength/2.0f,+edgeLength/2.0f,+edgeLength/2.0f);
    glColor4f(1.0f,1.0f,1.0f,1.0f); //WEISS
    glVertex3f(+edgeLength/2.0f,+edgeLength/2.0f,+edgeLength/2.0f);
    glColor4f(0.0f,1.0f,1.0f,1.0f); //CYAN
    glVertex3f(+edgeLength/2.0f,+edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(0.0f,0.0f,1.0f,1.0f); //BLAU
    glVertex3f(-edgeLength/2.0f,+edgeLength/2.0f,-edgeLength/2.0f);
    glEnd();

    glBegin(GL_POLYGON);   //Bodenflaeche
    glColor4f(0.0f,0.0f,0.0f,1.0f); //SCHWARZ
    glVertex3f(-edgeLength/2.0f,-edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(0.0f,1.0f,0.0f,1.0f); //GRUEN
    glVertex3f(+edgeLength/2.0f,-edgeLength/2.0f,-edgeLength/2.0f);
    glColor4f(1.0f,1.0f,0.0f,1.0f); //GELB
    glVertex3f(+edgeLength/2.0f,-edgeLength/2.0f,+edgeLength/2.0f);
    glColor4f(1.0f,0.0f,0.0f,1.0f); //ROT
    glVertex3f(-edgeLength/2.0f,-edgeLength/2.0f,+edgeLength/2.0f);
    glEnd();
}

GLfloat Cuboid::getXLength() const {
    return m_xLength;
}

GLfloat Cuboid::getYLength() const {
    return m_yHeight;
}

GLfloat Cuboid::getZLength() const {
    return m_zWidth;
}

void Cuboid::setXLength(GLfloat xLength) {
    m_xLength = xLength;
}

void Cuboid::setYHeight(GLfloat yHeight) {
    m_yHeight = yHeight;
}

void Cuboid::setZWidth(GLfloat zHeight) {
    m_zWidth = zHeight;
}
