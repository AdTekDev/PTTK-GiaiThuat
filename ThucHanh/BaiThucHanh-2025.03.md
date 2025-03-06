
# Bài thực hành môn Phân tích và Thiết kế giải thuật

## Mô tả 

Trong mật mã học, mật mã Caesar (còn được gọi là mật mã của Caesar, mật mã chuyển vị, mã của Caesar hay chuyển vị Caesar) là một trong những kỹ thuật mã hóa đơn giản và phổ biến nhất. 
Đây là một dạng mật mã thay thế, trong đó mỗi ký tự trên bản rõ sẽ được thay bằng một ký tự khác, có vị trí cách nó một khoảng xác định trong bảng chữ cái.

Bảng chữ cái latin với 26 chữ cái: 
- Chữ thường:  abcdefghijklmnopqrstuvwxyz
- Chữ hoa: ABCDEFGHIJKLMNOPQRSTUVWXYZ 

Quá trình mã hóa là quá trình dịch K ký tự (dạng vòng tròn, sau z là a; sau Z là A) trên bảng chữ cái.  
Ký tự khác được giữ nguyên. 

Quá trình giải mã là quá trình ngược lại, dịch K ký tự từ ký tự đã mã hóa.

Ví dụ:  

K=1   
- Mã hóa A là B
- Mã hóa z là a
- Mã hóa T là U

K=3
- Mã hóa A là D
- Mã hóa Z là C


## Bài toán

Cho chương trình thực hiện việc giải mã bằng việc cung cấp thông tin sau:  
- Chuỗi ký tự đã mã hóa  encryptedText 
- Giá trị K thực hiện phép dịch ngược trong biến shift  

## Yêu cầu thực hiện 
1. (2đ) Phác họa lưu đồ giải thuật cho hàm giải mã  decryptCaesarCipher
2. (2đ) Lập công thức và Xác định độ phức tạp số phép so sánh theo N ký tự
3. (2đ) Lập công thức và Xác định độ phức tạp số phép gán theo N ký tự
4. (2đ) Thêm các biến đếm trong chương trình để thực hiện đếm các phép toán trên
5. (2đ) Lập bảng so sánh 10 tình huống của encryptedText với N=10. Rút ra quy luật tình huống nào thực hiện nhiều phép toán nhất và trường hợp nào ít nhất.
   


