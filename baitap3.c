#include <stdio.h>

char arr[] = "The Grammy award-winning singer. who has been less active on digital platforms in recent weeks. explained her decision to distance herself from social media platforms during an appearance on the Conan OBrien Needs a Friend podcast, alongside her brother Finneas";
//  Cau 1: Viet mot chuyen dao nguoc VD: "Finneas brother her alongside .... Grammy The"
//  cau 2: In Hoa chu cai dau tien sau dau cham
//  Cau 3: Chuyen doi tat ca doan van thanh chu thuong
//  Cau 4: Chuyen doi tat ca doan van thanh chu hoa

//Cau 1
void reverseWords()
{
    int length = 0;
    int count = 0;
    length = sizeof(arr);
    int i = length;
    while (i >= 0)
    {
        i--;
        if (*(arr + i) == ' ')
        {
            for (int j = i + 1; j < i + count; j++)
            {
                printf("%c", *(arr + j));
            }
            printf("%c", ' ');
            count = 0;
        }
        if (i == 0)
        {
            for (int a = 0; a <= length; a++)
            { if (*(arr + a) == ' '){
                    for (int a1 = 0; a1 < a; a1++)
                    {
                        printf("%c", *(arr + a1));
                    }
                    break;
                }
            }
        }
        count++;
    }
}
//Cau 2
void uppercaseAfterDotSpace() {
    int i = 0;
    
    while (arr[i] != '\0') {  // duyệt qua từng kí tự trong chuỗi
        if (arr[i] == '.') {  // nếu gặp dấu chấm
            i++;  // tăng biến đếm lên 1 để bỏ qua dấu chấm
            while (arr[i] == ' ') {  // bỏ qua khoảng trắng sau dấu chấm
                i++;
            }
            if (arr[i] >= 'a' && arr[i] <= 'z') {  // nếu là chữ thường
                arr[i] -= 32;  // chuyển thành chữ hoa bằng cách giảm đi 32 trong bảng mã ASCII
            }
        }
        i++;
    }
    
    printf("%s", arr);  
}
void lowCase(){
    int i = 0;
    
    while(arr[i] != '\0') { // Vòng lặp while sẽ chạy cho đến khi kết thúc chuỗi 
        if(arr[i] >= 'A' && arr[i] <= 'Z') { // Kiểm tra nếu ký tự hiện tại là ký tự chữ hoa (có giá trị mã ASCII từ 'A' đến 'Z')
            arr[i] = arr[i] + 32; // Chuyển đổi sang chữ hoa bằng cách tăng giá trị ASCII của kí tự đi 32 đơn vị
        }
        
        i++;
    }
    
    printf("%s", arr);
}
void upCase(){
    int i = 0;
    
    while(arr[i] != '\0') { // Vòng lặp while sẽ chạy cho đến khi kết thúc chuỗi 
        if(arr[i] >= 'a' && arr[i] <= 'z') { // Kiểm tra nếu ký tự hiện tại là ký tự chữ hoa (có giá trị mã ASCII từ 'a' đến 'z')
            arr[i] = arr[i] - 32; // Chuyển đổi sang chữ hoa bằng cách giảm giá trị ASCII của kí tự đi 32 đơn vị
        }
        
        i++;
    }
    
    printf("%s", arr);
}
int main(int argc, char const *argv[]){
    printf("Chuoi ban dau \n%s\n",arr);
     printf("Cau 1: Chuoi dao nguoc:\n");
    reverseWords();
    printf("\n..............................................\n");
    printf("Cau 2: Chuoi in hoa sau dau cham:\n");
    uppercaseAfterDotSpace();
    printf("\n..............................................\n");
    printf("Cau 3: Chuoi viet thuong:\n");
    lowCase();
    printf("\n..............................................\n");
    printf("Cau 4: Chuoi viet hoa:\n");
    upCase();
    printf("\n..............................................\n");
    return 0;
}