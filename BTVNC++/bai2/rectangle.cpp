#include <iostream>
#include <math.h>
using namespace std;

class Rectangle {
   private:
   float length, width;
   public:
   Rectangle(float l,float w){
   length = l;
   width = w;
   }
   float getlength() {
        return length;
   }
   float getwidth(){
      return width;
   }
   void setlength(float l){
      if (l >= 0){// Kiểm tra giá trị nhập vào có lớn hơn hoặc bằng 0 hay không
         length = l;
      }else {
          printf("Gia tri khong hop le. Moi ban nhap lai");
      }
   }
   void setwidth(float w){
      if (w >= 0){// Kiểm tra giá trị nhập vào có lớn hơn hoặc bằng 0 hay không
         width = w;
      }else {
          printf("Gia tri khong hop le. Moi ban nhap lai");
      }
   }
   void Square(){
      if(length == width) {
         printf("DAY LA HINH VUONG\n");
    }
    else{
        printf("DAY LA HINH CHU NHAT\n");
   }
   }
    float getArena(){
      return length * width;
    }
    float getPerimeter(){
      return (length + width)* 2;
    }
    float getDiagonalline(){
      return sqrt(length*length + width*width);
    }
};
int main() {
   float l,w;
   printf("Nhap chieu dai: ");
    scanf ("%f", &l);
   printf("Nhap chieu rong: ");
    scanf ("%f", &w);
    Rectangle r(l,w);
    // Kiểm tra giá trị nhập vào có lớn hơn hoặc bằng 0 hay không
    while (r.getlength()<0) {
        printf("Gia tri khong hop le. Moi nhap lai");
        printf("\nChieu dai: ");
        scanf ("%f", &l);
        r.setlength(l);
    }
    while (r.getwidth()<0) {
        printf("Gia tri khong hop le. Moi nhap lai");
        printf("\nChieu rong: ");
        scanf ("%f", &w);
        r.setwidth(w);
    }
      printf("Dien tich: %f\n", r.getArena());
    printf("Chu vi: %f\n", r.getPerimeter());
    printf("Duong cheo: %f\n",r.getDiagonalline());
r.Square();
    return 0;
}
