#include <iostream>
#include <cmath>
using namespace std;

class Point{
        private:
                double x;
                double y;
        public:
                Point(double x, double y) {
                        this->x = x;
                        this->y = y;
                }

                double operator-(Point &other) {
                        double distance = sqrt(pow(this->x-other.x, 2) + pow(this->y-other.y, 2));
                        return distance;
                }

                bool operator==(Point &other) {
                        if( this->x == other.x && this->y == other.y) {
                                return true;
                        }
                        else {
                                return false;
                        }
                }

                bool operator!=(Point &other) {
                        if( this->x != other.x) {
                                return true;
                        }
                        else if(this->y != other.y) {
                                return true;
                        }
                        else {
                                return false;
                        }
                }


                Point operator/(Point &other) {
                        double Mx = (this->x + other.x) / 2;
                        double My = (this->y + other.y) / 2;
                        Point Mid(Mx, My);
                        return Mid;
                }
                friend ostream& operator<<(ostream& os, Point &point) {
                        os<< "(" << point.x << ", " << point.y << ")";
                        return os;
                }

};

int main() {
        Point p1 = Point(3.2, 9.8);
        Point p2 = Point(5.5, -1.2);
        cout << p1 - p2 << endl;
cout << (p1 == p2) << endl;
cout << (p1 != p2) << endl;
Point mid = (p1 / p2);
cout << mid;

        return 0;
}
