#include <stdio.h>
struct phanSo
{
     int tu;
     int mau;
};
struct phanSo nhap()
{
     struct phanSo p;
     printf("moi ban nhap tu so :");
     scanf("%d", &p.tu);
     while (true)
     {
          printf("moi ban nhap mau so khac khong \n");
          scanf("%d", &p.mau);
          if (p.mau != 0)
          {
               break;
          }
     }
     return p;
}
int UCLN(int a, int b)
{
     if (a < 0)
     {
          a = a * -1;
     }
     if (b < 0)
     {
          b = b * -1;
     }
     while (a != b)
     {
          if (a > b)
          {
               a -= b;
          }
          else
          {
               b -= a;
          }
     }
     return a;
}
struct phanSo rutGon(struct phanSo p)
{
     if (p.tu != 0)
     {
          int u = UCLN(p.tu, p.mau);
          p.tu /= u;
          p.mau /= u;
     }
     return p;
}
int BCNN(int a, int b)
{
     int u = UCLN(a, b);
     return a * b / u;
}
struct phanSo cong(struct phanSo a, struct phanSo b)
{
     struct phanSo tong;
     tong.mau = (BCNN(a.mau, b.mau));
     tong.tu = (a.tu * b.mau) + (b.tu * a.mau);
     tong = rutGon(tong);
     return tong;
}
struct phanSo tru(struct phanSo a, struct phanSo b)
{
     struct phanSo hieu;
     hieu.mau = (BCNN(a.mau, b.mau));
     hieu.tu = (a.tu * b.mau) + (b.tu * a.mau);
     hieu = rutGon(hieu);
     return hieu;
}
struct phanSo nhan(struct phanSo a, struct phanSo b)
{
     struct phanSo kq;
     kq.tu = a.tu * b.tu;
     kq.mau = a.mau * b.mau;
     kq = rutGon(kq);
     return kq;
}

struct phanSo chia(struct phanSo a, struct phanSo b)
{
     struct phanSo kq;
     kq.tu = a.tu * b.mau;
     kq.mau = a.mau * b.tu;
     kq = rutGon(kq);
     return kq;
}
void bai10(){
     struct phanSo p = nhap();
     struct phanSo q = nhap();
     struct phanSo kqCong = cong(p, q);
     struct phanSo kqTru = tru(p, q);
     struct phanSo tich = nhan(p, q);
     struct phanSo thuong = chia(p, q);

     printf("tong cua 2 phan so %d/%d+%d/%d = %d/%d ", p.tu, p.mau, q.tu, q.mau, kqCong.tu, kqCong.mau);
     printf("hieu cua 2 phan so %d/%d-%d/%d = %d/%d ", p.tu, p.mau, q.tu, q.mau, kqTru.tu, kqTru.mau);
     printf(" tich cua 2 phan so %d/%d * %d/%d = %d/%d\n",p.tu, p.mau, q.tu, q.mau, tich.tu, tich.mau);
     printf("thuong cua 2 phan so %d/%d / %d/%d = %d/%d\n",p.tu, p.mau, q.tu, q.mau, thuong.tu, thuong.mau);
     
}
int main(){
     bai10();
}