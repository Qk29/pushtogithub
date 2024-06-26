#include<stdio.h>
#include<math.h>
void chucnang1(){
	int iD, m, n, x;
				printf("Nhap ID cua nhan vien ");
				scanf("%d",&iD);
			    printf("Nhap so ngay lam viec cua chuyen gia he thong: ");
				scanf("%d",&m);
				printf("Nhap so ngay lam viec cua nhan vien quan tri van phong: ");
				scanf("%d",&n);
				printf("Nhap so ngay lam viec cua lap trinh vien: ");
				scanf("%d",&x);
				float cost1, cost2, cost3, totalCost;
				cost1 = m * 115;
				cost2 = n * 120;
				cost3 = x * 100;
				totalCost = cost1 + cost2 +cost3;
				printf("Cust ID : %d \n",iD);
				printf("profession - Days - cost\n");
				printf("-------------------------\n");
				printf("Networker - %d - %f\n",m,cost1);
				printf("Office - %d - %f\n",n,cost2);
				printf("Programmer - %d - %f\n",x,cost3);
				printf("-------------------------\n");
				printf("Total cost : %f\n",totalCost);
}
void chucnang2(){
	int snc;
				float luongCung, heSo, luongThuong, luongnv;
				printf("So ngay cong cua nhan vien : ");
				scanf("%d",&snc);
				printf("He so luong cua nhan vien la :");
				scanf("%f",&heSo);
				printf("Luong cung cua nhan vien la :");
				scanf("%f",&luongCung);
				luongnv = luongCung * heSo;
				if (snc >=25){
					luongThuong = (luongnv * 20)/100;
				}
				else if (snc>=22){
					luongThuong = (luongnv * 10)/100;
				}
				else {
					luongThuong = 0;
				}
				printf("--------------------------\n");
				printf ("luong cua nhan vien la : %.2f\n",luongnv);
				printf("luong thuong cua nhan vien la : %.2f\n",luongThuong);
}
void chucnang3(){
	char tenHs[30];
				int toan, ly, hoa, anh, sinh, choice;
				float diemTb;
				printf("nhap ten hoc sinh : ");
				scanf("%s",&tenHs);
				do {
				printf("nhap diem toan : ");
				scanf("%d",&toan);
				printf("nhap diem ly : ");
				scanf("%d",&ly);
				printf("nhap diem hoa : ");
				scanf("%d",&hoa);
				printf("nhap diem anh : ");
				scanf("%d",&anh);
				printf("nhap diem sinh : ");
				scanf("%d",&sinh);
				}
				while (toan>0||toan<10 && ly>0||ly<10&&hoa>0||hoa<10&&anh>0||anh<10&&sinh>0||sinh<10);
				int tongDiem = toan + ly + hoa + sinh + anh;
				diemTb = tongDiem/5;
				printf("diem trung binh : %.2f\n",diemTb);
				printf("Xep loai :");
				switch ((int)diemTb){
					case 0 ... 2 :
                            printf("Hoc sinh Kem\n");
                            break;
                    case 3 ... 4 :
                            printf("Hoc sinh Yeu\n");
                            break;
                    case 5 ... 6 :
                            printf("Hoc sinh Trung binh\n");
                            break;
                    case 7 ... 8 :
                            printf("Hoc sinh Kha\n");
                            break;
                    case 9 ... 10 :			
                            printf("Hoc sinh Gioi\n");
                            break;
                    default:
                            printf("Diem khong hop le, moi nhap lai\n");
				}
}
int main(){
	int choice;
	do {
	printf("----+----Menu----+----\n");
	printf("1. Tinh chi phi cap bac luong nhan vien : \n");
	printf("2. Tinh luong & thuong cho nhan vien: \n ");
	printf("3. Tinh diem 5 mon cua hoc sinh: \n");
	printf("0. Thoat\n");
	printf("Moi ban nhap lua chon cua minh: ");
	scanf("%d",&choice);
		switch (choice){
			case 1 :{
				chucnang1();
				break;
			}
			case 2: {
				chucnang2();
				break;
			}
			case 3: {
				chucnang3();
				break;
			}
		}
	}
	while (choice!=0);
	return 0;
}
