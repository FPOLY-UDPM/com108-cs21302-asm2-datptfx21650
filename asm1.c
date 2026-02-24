/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

// Tạo file asm2.c và hoàn thiện nội dung Assignment từ nội dung file asm1.c

// Danh sách các chức năng trong ASM1:
// 1. Chức năng số 1: Kiểm tra số nguyên
// 2. Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số
// 3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke
// 4. Chức năng số 4: Tính tiền điện
// 5. Chức năng số 5: Chức năng đổi tiền
// 6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp
// 7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe
// 8. Chức năng số 8: Sắp xếp thông tin sinh viên
// 9. Chức năng số 9: Xây dựng game FPOLY-LOTT
// 10. Chức năng số 10: Xây dựng chương trình tính toán phân số
// Viết chương trình C thực hiện các chức năng trên

#include <stdio.h>
#include <math.h>

int main()
{
    int chonChucNang;
    do
    {
        printf("Chon chuc nang:\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va boi so chung cua 2 so\n");
        printf("3. Tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chonChucNang);

        switch (chonChucNang)
        {
        case 1:
            // Gọi hàm kiểm tra số nguyên
            printf("DA CHON CHUC NANG 1: KIEM TRA SO NGUYEN\n");
            float n;
            printf("Nhap mot so bat ky: ");
            scanf("%f", &n);

            // 1. Kiểm tra số nguyên
            if (n != (int)n)
            {
                printf("%.2f khong phai la so nguyen.\n", n);
            }
            else
            {
                int x = (int)n;
                printf("%d la so nguyen.\n", x);

                // 2. Kiểm tra số nguyên tố
                int laNguyenTo = 1;
                if (x < 2)
                {
                    laNguyenTo = 0;
                }
                else
                {
                    for (int i = 2; i * i <= x; i++)
                    {
                        if (x % i == 0)
                        {
                            laNguyenTo = 0;
                            break;
                        }
                    }
                }

                if (laNguyenTo)
                    printf("%d la so nguyen to.\n", x);
                else
                    printf("%d khong phai la so nguyen to.\n", x);

                // 3. Kiểm tra số chính phương
                int can = (int)sqrt(x);
                if (can * can == x)
                    printf("%d la so chinh phuong.\n", x);
                else
                    printf("%d khong phai la so chinh phuong.\n", x);
            }
            break;
        case 2:
            // Gọi hàm tìm Ước số chung và bội số chung
            printf("DA CHON CHUC NANG 2: TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO\n");
            break;
        case 3:
            // Gọi hàm tính tiền cho quán Karaoke
            printf("DA CHON CHUC NANG 3: TINH TIEN CHO QUAN KARAOKE\n");

            int gioBatDau, gioKetThuc;
            float tongTien = 0;

            printf("Nhap gio bat dau (12-23): ");
            scanf("%d", &gioBatDau);
            printf("Nhap gio ket thuc (12-23): ");
            scanf("%d", &gioKetThuc);

            // Kiểm tra hợp lệ
            if (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc)
            {
                printf("Thoi gian khong hop le! Quán chi hoat dong tu 12h den 23h va gio ket thuc phai lon hon gio bat dau.\n");
            }
            else
            {
                int soGio = gioKetThuc - gioBatDau;
                if (soGio <= 3)
                {
                    tongTien = soGio * 150000;
                }
                else
                {
                    tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7; // Giảm 30% cho các giờ sau
                }

                // Giảm 10% nếu bắt đầu trong khung giờ 14h–17h
                if (gioBatDau >= 14 && gioBatDau <= 17)
                {
                    tongTien *= 0.9;
                    printf("Ap dung giam 10%% vi bat dau trong khoang 14h - 17h.\n");
                }

                printf("So gio hat: %d\n", soGio);
                printf("Tong tien phai tra: %.0f VND\n", tongTien);
            }
            break;
        case 4:
            // Gọi hàm tính tiền điện
            printf("DA CHON CHUC NANG 4: TINH TIEN DIEN\n");
            break;
        case 5:
            // Gọi hàm đổi tiền
            printf("DA CHON CHUC NANG 5: DOI TIEN\n");

            // int soTien;
            // printf("Nhap so tien can doi: ");
            // scanf("%d", &soTien);

            // if (soTien <= 0)
            // {
            //     printf("So tien phai lon hon 0.\n");
            //     break;
            // }

            // // Mảng mệnh giá tiền
            // int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            // int soTo[9] = {0}; // Lưu số tờ cho từng mệnh giá

            // int tienConLai = soTien;

            // printf("So tien %d duoc doi thanh:\n", soTien);

            // // Tính số tờ từng mệnh giá NHỎ HƠN soTien
            // for (int i = 0; i < 9; i++)
            // {
            //     if (menhGia[i] < soTien) // chỉ đổi bằng mệnh giá nhỏ hơn
            //     {
            //         soTo[i] = tienConLai / menhGia[i];
            //         tienConLai = tienConLai % menhGia[i];
            //     }
            // }

            // // In kết quả
            // for (int i = 0; i < 9; i++)
            // {
            //     if (soTo[i] > 0)
            //     {
            //         printf("%d to menh gia %d\n", soTo[i], menhGia[i]);
            //     }
            // }
            break;
        case 6:
            // Gọi hàm tính lãi suất vay ngân hàng
            printf("DA CHON CHUC NANG 6: TINH LAI SUAT VAY NGAN HANG VAY TRA GOP\n");
            break;
        case 7:
            // Gọi hàm vay tiền mua xe
            printf("DA CHON CHUC NANG 7: VAY TIEN MUA XE\n");
            break;
        case 8:
            // Gọi hàm sắp xếp thông tin sinh viên
            printf("DA CHON CHUC NANG 8: SAP XEP THONG TIN SINH VIEN\n");
            break;
        case 9:
            // Gọi hàm game FPOLY-LOTT
            printf("DA CHON CHUC NANG 9: GAME FPOLY-LOTT\n");
            break;
        case 10:
            // Gọi hàm tính toán phân số
            printf("DA CHON CHUC NANG 10: TINH TOAN PHAN SO\n");
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (chonChucNang != 0);

    return 0;
}