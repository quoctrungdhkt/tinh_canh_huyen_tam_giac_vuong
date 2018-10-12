#include <stdio.h>
#include <stdbool.h>
#include <pbt.h>
#include <math.h>
// Viết chương trình cho phép người dùng nhập vào 2 cạnh của một tam giác vuông (không phải cạnh huyền)
// Viết hàm tính chiều dài cạnh huyền của tam giác và in ra kết qủa.
// Lưu ý độ dài 2 cạnh không được nhỏ hơn 0.

bool validateData(int a, int b) {
    if (a <= 0 || b <= 0 ) {
        printf (" Do dai mot canh cua tam giac phai lon hon 0 " );
        return false;
    }   else if ( a + b <= 0 ) {
        printf (" Tong do dai 2 canh khong duoc nho hon 0 ");
        return false;
    }
    return true;
}
// Tính chiều dài cạnh huyền của tam giác
float caculateCanhHuyenTamGiacVuong (int a, int b) {
    return (float) sqrt(a*a + b*b);
}
int main (){
    int a, b;
    printf("Vui long nhap do dai canh thu nhat: \n");
    scanf("%d", &a);
    printf("Vui long nhap do dai canh thu 2: \n");
    scanf("%d", &b);
    bool isvalidateData = validateData(a ,b );
    if (isvalidateData) {
        printf("Do dai canh huyen cua tam giac vuong la: %.2f", caculateCanhHuyenTamGiacVuong(a, b));
    }
    return 0;
}