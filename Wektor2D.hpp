class Wektor2D
{
public:
    double x;
    double y;

    Wektor2D() {x = 0.0; y = 0.0;}
    Wektor2D(double x_, double y_) : x(x_), y(y_) {}

    void setX(double x_) { x = x_; }
    void setY(double y_) { y = y_; }
    double getX() { return x; }
    double getY() { return y; }
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2) {
    return Wektor2D{w1.x+w2.x, w1.y+w2.y};
}
    
double operator*(Wektor2D w1, Wektor2D w2) {
    return w1.x*w2.x+w1.y*w2.y;
}
