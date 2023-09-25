
# Phần 2: Các thuật toán về số - Bài 3. Nhân ma trận  


**P2-B3.01.** Tính tổng, hiệu 2 đa thức sau: 



 
**P2-B3.02.** Cho đoạn Code sau, xác định có bao nhiêu phép tính toán(++,--,+,-,*,/), phép gán, phép so sánh: 

double A[2][2] = { {1, 1}, {2, 2} }; 

double B[2][2] = { {1, 2}, {2, 1} }; 

double C[2][2] = { {0, 0}, {0, 0} }; 

for (int i = 0; i < 2; i++) { 

    for (int j = 0; j < 2; j++) { 

        C[i][j] = A[i][j] + B[i][j]; 

    } 

} 



**P2-B3.03.** Cho đoạn Code hiện thực phép nhân ma trận cơ bản, chèn thêm các biến đếm xác định có bao nhiêu phép tính toán(++,--,+,-,*,/), phép gán, phép so sánh: 

const int M = 2, N = 2, K = 2; 

double A[M][N] = { {1, 1}, {2, 2} }; 

double B[N][K] = { {1, 2}, {2, 1} }; 

double C[M][K] = { {0, 0}, {0, 0} }; 

for (int i = 0; i < M; i++) { 

    for (int j = 0; j < K; j++) { 

        double tong = 0; 

        for (int r = 0; r < N; r++) 

            tong += A[i][r] * B[r][j]; 

        C[i][j] = tong; 

    } 

} 



**P2-B3.04.** Hiện thực thuật toán Strassen hiện thực phép nhân ma trận cơ bản, chèn thêm các biến đếm xác định có bao nhiêu phép tính toán(++,--,+,-,*,/), phép gán, phép so sánh. 

 

 
