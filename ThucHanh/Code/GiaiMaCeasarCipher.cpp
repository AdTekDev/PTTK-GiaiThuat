#include <iostream>
#include <string>
using namespace std;

// Hàm giải mã Caesar Cipher
string decryptCaesarCipher(string text, int shift) {
    string decryptedText = "";

    // Duyệt qua từng ký tự trong chuỗi
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        // Nếu ký tự là chữ cái hoa
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' - shift + 26) % 26 + 'A'; // Giải mã chữ cái hoa
        }
        // Nếu ký tự là chữ cái thường
        else if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' - shift + 26) % 26 + 'a'; // Giải mã chữ cái thường
        }

        decryptedText += ch; // Thêm ký tự đã giải mã vào chuỗi kết quả
    }

    return decryptedText;
}

int main() {
    string encryptedText;
    int shift;

    // Nhập chuỗi ký tự đã mã hóa
    cout << "Nhập chuỗi ký tự đã mã hóa: ";
    getline(cin, encryptedText);

    // Nhập số dịch chuyển (shift)
    cout << "Nhập độ dịch chuyển (shift): ";
    cin >> shift;

    // Giải mã và hiển thị kết quả
    string decryptedText = decryptCaesarCipher(encryptedText, shift);
    cout << "Chuỗi đã giải mã: " << decryptedText << endl;

    return 0;
}
