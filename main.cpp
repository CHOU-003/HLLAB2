#include <iostream>
using namespace std;

int TongTich(int n){
	 for (int i = 10; i <= 99; i++) {
        int nguyen = n / 10;
        int du = n % 10;
        if (nguyen * du == (nguyen + du)*2) {
            cout << "Thoa dieu kien: ";
            break;
        }else{
            cout << "Khong thoa dieu kien: ";
            break;
        }
    }
    return n;
}

bool KT(int k){
    if(k < 2){
        return false;
    }
    
    for(int i=2; i*i<=k; i++){
        if(k%i == 0){
            return false;
        }
    }
    
    return  true;
}

int SoNT(int k){
    for(int i=0; i<k; i++){
        if(KT(i)){
            cout << "i= " <<i << " ";
        }
    }
    
    return 0;
}

void xuatMa(){
     for (int i = 0; i <= 127; i++) {
        cout << i << ": " << char(i) << endl;
    }
}

int DaoNguoc(int a){
	 for (int i = 10; i <= a; i++) {
        int nguyen = a / 10;
        int du = a % 10;
        int temp = nguyen;
        nguyen = du;
        du = temp;
        cout << "So dao nuoc la: " << nguyen << du;
        break;
    }
    return 0;
}

int DemTong(int b){
    int sum =0, coun =0;
    while(b != 0) {
        sum += (b%10);
        coun++;
        b /=10;
    }
    cout << "So luong cac chu so la: " << coun << "Tong la: " << sum;
    
    return 0;
}

int TienCuoc(double Start, double end) {
    double Tong = end - Start;
    double Tien;
    if(Start >= 7 && end <= 17){
        if(Tong < 6){
          Tien = Tong * 24000;   
        }
        else{
            Tien = (Tong * 24000)*0.1;
        }
    } else if (Start >= 17 && end <= 24){
        if(Tong < 4){
          Tien = Tong * 21000;   
        }
        else{
            Tien = (Tong * 21000)*0.12;
        }
    } else {
        if(Tong < 7){
          Tien = Tong * 18000;   
        }
        else{
            Tien = (Tong * 18000)*0.12;
        }
    }
    
    return Tien;
}

int TienPhong(char Phong, int SoNgay){
    int Tien;
    if(Phong == 'A'){
        if(SoNgay > 12){
            Tien = SoNgay * 250000 * 0.1;
        }else {
            Tien = SoNgay * 250000;
        }
    }else if(Phong == 'B'){
         if(SoNgay > 12){
            Tien = SoNgay * 200000 * 0.8;
        }else {
            Tien = SoNgay * 200000;
        }
    }else {
         if(SoNgay > 12){
            Tien = SoNgay * 150000 * 0.1;
        }else {
            Tien = SoNgay * 150000;
        }
    }
    
    return Tien;
}

int TBC (int To, int Ly, int Ho){
    int TBC = (To+Ly+Ho)/3;
    switch(TBC){
        case 10:
        case 9:
            cout << "Xuất sắc.";
            break;
        case 8:
            cout << "Gioi.";
            break;
        case 7:
        case 6:
            cout << "Khá.";
            break;
        case 5:
            cout << "Trung binh.";
            break;
        case 4:
        case 3:
            cout << "Yếu.";
            break;
         case 2:
        case 1:
        case 0:
            cout << "Kém.";
            break;
    }
    
    return 0;
    
}

int NgayThang(int Ngay, int Thang){
    if(Thang == 1 || Thang == 3 ||Thang == 5 ||Thang == 7 ||Thang == 8 ||Thang == 10 ||Thang == 12){
        if(Thang != 3){
            cout << "Thang " << Thang << " có 31 ngày" << endl; 
            cout << "Thang tiep theo " << Thang+1 << " có 30 ngày"<< endl;
            cout << "Thang truoc " << Thang-1 << " có 30 ngày"<< endl;
        }else {
            cout << "Thang " << Thang << " có 31 ngày"<< endl; 
            cout << "Thang tiep theo " << Thang+1 << " có 30 ngày"<< endl;
            cout << "Thang truoc " << Thang-1 << " có 28 ngày"<< endl;
        }
     }else if(Thang == 2){
        cout << "Thang " << Thang << " có 28 ngày"<< endl; 
        cout << "Thang tiep theo " << Thang+1 << " có 30 ngày"<< endl;
        cout << "Thang truoc " << Thang-1 << " có 30 ngày"<< endl;
    } else {
        cout << "Thang " << Thang << " có 30 ngày"<< endl; 
        cout << "Thang tiep theo " << Thang+1 << " có 31 ngày"<< endl;
        cout << "Thang truoc " << Thang-1 << " có 31 ngày"<< endl;
    }
    
    return 0;
}

int main (){
	int chon;
	cout << "Nhap so cau ban muon xem: "; cin >> chon;
	
	switch(chon) {
		case 1:
		    int n;
		    cout << "Nhap so nguyen: "; cin >> n;
			cout <<  TongTich(n)<< endl;
			break;
		case 2:
		    int k;
		    cout << "Nhap so nguyen: "; cin >> k;
		    SoNT(k);
		    break;
		case 3:
		    xuatMa();
		    break;
		case 4:
		    int a;
		    cout << "Nhap so nguyen: "; cin >> a;
		    DaoNguoc(a);
		    break;
		case 5:
		    int b;
		    cout << "Nhap so nguyen: "; cin >> b;
		    DemTong(b);
		    break;
		case 6:
		    int x, z;
		    cout << "Nhap gio bat dau: "; cin >> x;
		    cout << "Nhap gio ket thuc: "; cin >> z;
		    cout << "So tien tra la: " << TienCuoc(x,z);
		    break;
		case 7:
		    char Phong;
		    int SoNgay;
		    cout << "Nhap phong: "; cin >> Phong;
		    cout << "Nhap so ngay o: "; cin >> SoNgay;
		    cout << "So tien tra la: " << TienPhong(Phong, SoNgay);
		    break;
		case 8:
		    int ngay, Thang;
		    do {
		        cout << "Nhap thang: "; cin >> Thang;
		        if(Thang <= 0 || Thang > 12){
		            cout << "Ngày không hợp lệ.";
		        }
		    } while(Thang <= 0 || Thang > 12);
		    do {
		        cout << "Nhap ngay: "; cin >> ngay;
		        if(ngay < 0 || ngay > 31 && Thang == 1 || Thang == 3 ||Thang == 5 ||Thang == 7 ||Thang == 8 ||Thang == 10 ||Thang == 12){
		            cout << "Ngày không hợp lệ.";
		        }
		    } while(ngay < 0 || ngay > 31 && Thang == 1 || Thang == 3 ||Thang == 5 ||Thang == 7 ||Thang == 8 ||Thang == 10 ||Thang == 12);
		    NgayThang(ngay,Thang);
		    break;
	    case 9:
	        int Toan, Ly, Hoa;
	        cout << "Nhap diem mon toan: "; cin >> Toan;
	        cout << "Nhap diem mon ly: "; cin >> Ly;
	        cout << "Nhap diem mon hoa: "; cin >> Hoa;
	        cout << "Loai la: " << TBC(Toan,Ly,Hoa);
	        break;
	}
	
}