#include <iostream>
#include <string>

using namespace std;

class Sach {
private:
    string tenSach;
    string tacGia;
    int namXuatBan;
    int soLuong;
public:
    Sach(string ten, string tg, int nam, int sl) {
        tenSach = ten;
        tacGia = tg;
        namXuatBan = nam;
        soLuong = sl;
    }
    void inThongTin() {
        cout << "Ten sach: " << tenSach << endl;
        cout << "Tac gia: " << tacGia << endl;
        cout << "Nam xuat ban: " << namXuatBan << endl;
        cout << "So luong: " << soLuong << endl;
    }
    void muonSach() {
        if (soLuong > 0) {
            soLuong--;
            cout << "Muon sach thanh cong" << endl;
        }
        else {
            cout << "Sach da het, khong the muon" << endl;
        }
    }
    void traSach() {
        soLuong++;
        cout << "Tra sach thanh cong" << endl;
    }
};

int main() {
    Sach sach1("Toi thay hoa vang tren co xanh", "Nguyen Nhat Anh", 2000, 5);
    sach1.inThongTin();

    sach1.muonSach();
    sach1.inThongTin();

    sach1.traSach();
    sach1.inThongTin();

    return 0;
}
