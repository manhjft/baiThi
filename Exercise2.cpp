#include <stdio.h>


int laSoNguyen(int n) {
    if (n < 2){
    	return 0;
	}else
         
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; 
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (laSoNguyen(n)) {
        printf("%d la so nguyen \n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

   
}

