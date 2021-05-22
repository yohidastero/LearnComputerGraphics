//
//  Cuboid.hpp
//  gdvLearning
//
//  Created by yohidastero on 5/22/21.
//

#ifndef Cuboid_hpp
#define Cuboid_hpp

#define GL_SILENCE_DEPRECATION
#include <GLUT/GLUT.h>

#include <stdio.h>


class Cuboid {
public:
    
    Cuboid(GLfloat sideLength);
    Cuboid(GLfloat xLength, GLfloat yHeight, GLfloat zWidth);
    
    static Cuboid* createCuboid(GLfloat xLength, GLfloat yHeight, GLfloat zWidth) ;
    
    GLfloat getXLength() const;
    GLfloat getYLength() const;
    GLfloat getZLength() const;
    
    void setXLength(GLfloat xLength);
    void setYHeight(GLfloat yHeight);
    void setZWidth(GLfloat zHeight);
    
    
 
private:
    static void createCube(GLfloat edgeLength);
    GLfloat m_xLength;
    GLfloat m_yHeight;
    GLfloat m_zWidth;
    
    
};

#endif /* Cuboid_hpp */
