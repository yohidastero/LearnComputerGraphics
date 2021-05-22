//
//  main.cpp
//  gdvLearning
//
//  Created by yohidastero on 5/22/21.
//

#include <iostream>
#include "Cuboid.hpp"

void init()
{
    // Hier finden jene Aktionen statt, die zum Programmstart einmalig
    // durchgef�hrt werden m�ssen
    glClearColor(0, 0, 0, 1);
    glEnable(GL_DEPTH_TEST);
}


void renderScene() //Zeichenfunktion
{
    // Hier befindet sich der Code der in jedem Frame ausgefuehrt werden muss
    glLoadIdentity();   // Aktuelle Model-/View-Transformations-Matrix zuruecksetzen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
 
    gluLookAt(50., 0., 40., 0., 0., 1., 0., 1., 0.); // extrinsische Kameraparameter
    
    
    
    //Modell mit rotierenden Unterarmen
    
    glutSwapBuffers();
}

void reshape(int width, int height)
{
    // Hier finden die Reaktionen auf eine Ver�nderung der Gr��e des
    // Graphikfensters statt
    
    // Matrix fuer Transformation: Frustum -> viewport
    glMatrixMode(GL_PROJECTION);
    // Aktuelle Transformations-Matrix zuruecksetzen
    glLoadIdentity();
    // Viewport definieren
    glViewport(0, 0, width, height);
    // Kamera definieren (intrinsische Kameraparameter)
    //glOrtho(-1., 1., -1., 1., 0., 10.); // orthogonale Kamera
    gluPerspective(45., 1, 1, 100.); // perspektivische Kamera
    // Matrix fuer Modellierung/Viewing
    glMatrixMode(GL_MODELVIEW);
}

void animate(int value)
{

    
    // Hier werden Berechnungen durchgef�hrt, die zu einer Animation der Szene
    // erforderlich sind. Dieser Prozess l�uft im Hintergrund und wird alle
    // 1000 msec aufgerufen. Der Parameter "value" wird einfach nur um eins
    // inkrementiert und dem Callback wieder uebergeben.
    std::cout << "value=" << value << std::endl;
    // RenderScene aufrufen
    glutPostRedisplay();
    // Timer wieder registrieren - Animate wird so nach 10 msec mit value+=1 aufgerufen.
    int wait_msec = 10;
    glutTimerFunc(wait_msec, animate, ++value);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
