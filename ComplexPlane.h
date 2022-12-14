#ifndef COMPLEXPLANE
#define COMPLEXPLANE

#include <SFML/Graphics.hpp>
#include <iostream>
#include <ostream>
#include <cmath>
#include <vector>
#include <complex>

using namespace std;
using namespace sf;

class ComplexPlane {


public:
    ComplexPlane(float aspectRatio);
    void zoomIn();
    void zoomOut();
    void setCenter(Vector2f coordinate);
    View getView();
    void setMouseLocation(Vector2f coordinate);
    void loadText(Text& text);
    size_t countIterations(Vector2f cordinate);
    void iterationsToRGB(size_t count, Uint8& r, Uint8& g, Uint8& b);


private:
    Vector2f m_mouselocation;
    View m_view;
    int m_zoomcount;
    float m_aspectratio;


};

const unsigned int MAX_ITER = 64;
const float BASE_WIDTH = 4.0;
const float BASE_HEIGHT = 4.0;
const float BASE_ZOOM = 0.5;

enum class windowStatus { CALCULATING, DISPLAYING };


#endif
