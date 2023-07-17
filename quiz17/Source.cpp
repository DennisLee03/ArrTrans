#include<iostream>
void FillIn(int data[][5]);
void Transpose(int data1[][5], int data2[][5]);
void Process(int data[][5]);
void Output(int data[][5]);
void main() {
	int data1[5][5], data2[5][5];
	FillIn(data1);
	printf("= FillIn初始化後的陣列 =\n");
	Output(data1);
	Transpose(data1, data2);
	printf("= Transpose轉置後的陣列 =\n");
	Output(data2);
	Process(data2);
	printf("= Process變號後的陣列 =\n");
	Output(data2);
}
void FillIn(int data[][5]) {
	srand(87);
	for (int i = 0;i < 5;i++)
		for (int j = 0;j < 5;j++)
			data[i][j] = 0 + rand() % (49 - 0);
}
void Transpose(int data1[][5], int data2[][5]) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5;j++) 
			data2[i][j] = data1[j][i];
}
void Process(int data[][5]) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5;j++) {
			if (data[i][j] < 25)
				data[i][j] = -1 * data[i][j];
			else data[i][j] = data[i][j];
		}
}
void Output(int data[][5]) {
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++)
			printf("%3d ", data[i][j]);
		printf("\n");}
	printf("==========\n");
}

