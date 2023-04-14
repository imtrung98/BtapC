#include <iostream>
#include <math.h>
using namespace std;

class Pointer2D{
    private:
    float ToadoX;
    float ToadoY;
    public:
    Pointer2D(float x=0, float y=0){
       ToadoX = x;
       ToadoY = y;
    }
    float getToadoX()const{
        return ToadoX;
    }
    float getToadoY()const{
        return ToadoY;
    }
    void setToadoX(float x){
        ToadoX = x;
    }
    void setToadoY(float y){
        ToadoY = y;
    }
};  

class SpaceMath{
    private:
    Pointer2D PointA;
    Pointer2D PointB;
    Pointer2D PointC;
    public:
    SpaceMath(Pointer2D PointA, Pointer2D PointB, Pointer2D PointC){
        SpaceMath::PointA = PointA;
        SpaceMath::PointB = PointB;
        SpaceMath::PointC = PointC;
    }
    float distance() {
        float x1 = PointA.getToadoX();
        float y1 = PointA.getToadoY();
        float x2 = PointB.getToadoX();
        float y2 = PointB.getToadoY();
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
    float Arena() {
        float x1 = PointA.getToadoX();
        float y1 = PointA.getToadoY();
        float x2 = PointB.getToadoX();
        float y2 = PointB.getToadoY();
        float x3 = PointC.getToadoX();
        float y3 = PointC.getToadoY();
         float a, b, c, p, s;
    a = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    b = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
    c = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
        
    }
};

int main() {
    float x1,y1,x2,y2,x3,y3;
    printf("Nhap toa do diem A: ");
    scanf("%f%f", &x1, &y1);
    printf("Nhap toa do diem B: ");
    scanf("%f%f", &x2, &y2);
    printf("Nhap toa do diem C: ");
    scanf("%f%f", &x3, &y3);

    Pointer2D PointA(x1, y1);
    Pointer2D PointB(x2, y2);
    Pointer2D PointC(x3, y3);
    SpaceMath s(PointA, PointB, PointC);

    printf("Khoang cach giua diem A va diem B la: %f\n", s.distance());
    printf("Dien tich cua tam giac la: %f\n", s.Arena());
    return 0;
}
