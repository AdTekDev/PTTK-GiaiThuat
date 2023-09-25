
# Bài tập - Phần 1. Tổng quan


P1.01. Cho đoạn Code sau, xác định có bao nhiêu phép tính toán(++,--,+,-,*,/) 

A = b++ + c+d - --e; 

 

P1.02. Cho đoạn Code sau, xác định có bao nhiêu phép tính toán(++,--,+,-,*,/) 

if (a > b) 

	a = a - b; 

else 

	b = b - a; 

P1.03. Cho đoạn Code sau, xác định có bao nhiêu phép tính toán(++,--,+,-,*,/), phép gán, phép so sánh: 

tong = 0; 

for(int i=0;i<3;i++) { 

	tong = tong + i*i; 

} 

 

P1.04. Chèn thêm các biến đếm cho đoạn Code sau để xác định có bao nhiêu phép tính toán(++,--,+,-,*,/), phép gán, phép so sánh: 

CODE nguyên mẫu: 

int tong = 0; 

int N = 10; 

for(int i=0;i<N;i++) { 

	tong = tong + i*i; 

} 

 

CODE đã thêm các biến để ghi nhận  

int PhemTinh=0,  

PhepSoSanh=0, 

PhepGan=0; 

int tong = 0;  PhepGan++; 

int N = 10;  PhepGan++; 

PhepGan++; // I=0 

for(int i=0;i<N;i++) {  

	PhepSoSanh++; //  FOR I<N TRUE 

 

	tong = tong + i*i;  

	PhepGan++; 

	PhemTinh += 2; // 1 *, 1 + 

	 

	PhemTinh++; // I++ 

} 

PhepSoSanh++; //  FOR I<N FALSE (I=N) 

 

 
