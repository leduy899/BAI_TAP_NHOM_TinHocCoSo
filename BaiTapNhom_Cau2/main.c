#include <stdio.h>
#include <stdbool.h>

int main() {
    int day, month, year;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    bool valid = true;
    int dayMax;

    // 2. Kiem tra thang, ngay, nam valid ( year >= 1970)
    if (month < 1 || month > 12 || day > 31 || day < 1 || year < 1970 ) {
        valid = false;
    } else {
        // 3. Kiem tra ngay dua vao case theo thang
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                dayMax = 31; // Cac thang co 31 ngay
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dayMax = 30; // Cac thang co 30 ngay
                break;
            case 2:
                // Kiem tra nam nhuan
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    dayMax = 29; // Nam nhuan
                } else {
                    dayMax = 28; // Nam ko nhuan
                }
                break;
        }

        // Check xem user nhap vao da trong khoang ( 1 - dayMax) hay chua?
        if (day < 1 || day > dayMax) {
            valid = false;
        }
    }
    //Print ra man hinh
    if (valid) {
        printf("%d - %d - %d la ngay thang nam hop le!!!\n", day,month,year);
    } else {
        printf("%d - %d - %d la ngay thang nam KHONG hop le (YEAR >= 1970)\n", day,month,year);
    }

    return 0;
}
