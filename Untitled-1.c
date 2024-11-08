void chucNang10(){

// Khai báo cấu trúc phân số
struct PhanSo {
    int tu;
    int mau;
};

// Hàm tính tổng hai phân số
struct PhanSo tinhTong(struct PhanSo ps1, struct PhanSo ps2) {
    struct PhanSo ketQua;
    ketQua.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    ketQua.mau = ps1.mau * ps2.mau;
    return ketQua;
}

// Hàm tính hiệu hai phân số
struct PhanSo tinhHieu(struct PhanSo ps1, struct PhanSo ps2) {
    struct PhanSo ketQua;
    ketQua.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    ketQua.mau = ps1.mau * ps2.mau;
    return ketQua;
}

// Hàm tính tích hai phân số
struct PhanSo tinhTich(struct PhanSo ps1, struct PhanSo ps2) {
    struct PhanSo ketQua;
    ketQua.tu = ps1.tu * ps2.tu;
    ketQua.mau = ps1.mau * ps2.mau;
    return ketQua;
}

// Hàm tính thương hai phân số
struct PhanSo tinhThuong(struct PhanSo ps1, struct PhanSo ps2) {
    struct PhanSo ketQua;
    ketQua.tu = ps1.tu * ps2.mau;
    ketQua.mau = ps1.mau * ps2.tu;
    return ketQua;
}

// Hàm rút gọn phân số
struct PhanSo rutGon(struct PhanSo ps) {
    int a = ps.tu;
    int b = ps.mau;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    struct PhanSo ketQua;
    ketQua.tu = ps.tu / a;
    ketQua.mau = ps.mau / a;
    return ketQua;
}

    struct PhanSo ps1, ps2;
    printf("Nhap phan so thu nhat:\n");
    printf("Nhap tu so: ");
    scanf("%d", &ps1.tu);
    printf("Nhap mau so: ");
    scanf("%d", &ps1.mau);
    printf("\nNhap phan so thu hai:\n");
    printf("Nhap tu so: ");
    scanf("%d", &ps2.tu);
    printf("Nhap mau so: ");
    scanf("%d", &ps2.mau);

    struct PhanSo tong = tinhTong(ps1, ps2);
    struct PhanSo hieu = tinhHieu(ps1, ps2);
    struct PhanSo tich = tinhTich(ps1, ps2);
    struct PhanSo thuong = tinhThuong(ps1, ps2);

    // Rút gọn kết quả
    tong = rutGon(tong);
    hieu = rutGon(hieu);
    tich = rutGon(tich);
    thuong = rutGon(thuong);

    printf("\nTong cua hai phan so: %d/%d\n", tong.tu, tong.mau);
    printf("Hieu cua hai phan so: %d/%d\n", hieu.tu, hieu.mau);
    printf("Tich cua hai phan so: %d/%d\n", tich.tu, tich.mau);
    printf("Thuong cua hai phan so: %d/%d\n", thuong.tu, thuong.mau);
}
int main(){
	chucNang10();
}