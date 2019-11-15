#include <stdio.h>
#include <stdlib.h>
#include "Initialization.h"
#include "PrintToFile.h"

int main(int argc,char *argv[])
{
	int i,j;
	char *Directory1,*Directory2;
	Directory1 = "C:\\Users\\lenove-pc\\Desktop\\Array.txt";
	Directory2 = "C:\\Users\\lenove-pc\\Desktop\\Matrix.txt";

	//************��̬���飨һά��***********//
	//����//
	printf("Please set array size\n");
	scanf_s("%d",&i);
	double *CoordX,*CoordY,*CoordZ;
	CoordX = (double*)malloc(i*sizeof(double));
	CoordY = (double*)malloc(i*sizeof(double));
	CoordZ = (double*)malloc(i*sizeof(double));

	InitializeArray(CoordX,i,0.0);
	InitializeArray(CoordY,i,1.0);
	InitializeArray(CoordZ,i,2.0);

	//************��̬���飨��ά��***********//
	double **Matrix;
	int m = 5,n = 10;

	Matrix = (double**)malloc(m*sizeof(double*));
	for(i=0;i<m;i++)
	{
		*(Matrix+i) = (double*)malloc(n*sizeof(double));
	}

	InitializeMatrix(Matrix,m,n,0.0);
	PrintMatrix(Matrix,Directory2,"BBB",m,n);

	system("pause");

	//************���ļ���ȡ***********//
	FILE *fp;
	double x,y,z;
	for(j=0;j<i;j++)
	{
		fscanf_s(fp,"%lf %lf %lf",&x,&y,&z);
		CoordX[j] = x;
		CoordY[j] = y;
		CoordZ[j] = z;
	}
	fclose(fp);

	printf("Which row would you like to check?\n");
	scanf_s("%d",&i);
	printf("%lf %lf %lf\n",CoordX[i],CoordY[i],CoordZ[i]);

	system("pause");

	//************��������***********//
	//����//
	//char *aaa = "hahahaha";
	//char *bbb = "����ڣ�";
	//double pi = 3.14159265358;
	//int c = 10;
	//int i,j;
	//
	//printf("Hello World.\n\n");
	//printf("%s, %s\n\n",aaa,bbb);
	//printf("%-16.11lf,%16.11lf\n",pi,pi);
	//printf("%f,%20e\n",pi,pi);
	//printf("%d,%10d\n",c,c);

	//************��̬����***********//
	//����//
	//int Array1[10];
	//float Array2[10];
	//double Array3[10];
	////��ʼ��//
	//for(i=0;i<10;i++)
	//{
	//	Array1[i] = 0;
	//	Array2[i] = 0.0;
	//	Array3[i] = (double)i;
	//}
	////����//
	//double Matrix[5][5];
	////��ʼ��//
	//for(i=0;i<5;i++)
	//{
	//	for(j=0;j<5;j++)
	//	{
	//		Matrix[i][j] = 0.0;
	//	}
	//}

	//************�����ж�***********//
	//If Else//
	//for(i=0;i<m;i++)
	//{
	//	for(j=0;j<n;j++)
	//	{
	//		if(i == j)
	//		{
	//			Matrix[i][j] = 1.0;
	//		}
	//		else if(i < j)
	//		{
	//			Matrix[i][j] = 0.0;
	//		}
	//		else
	//		{
	//			Matrix[i][j] = 2.0;
	//		}
	//		printf("%6.2lf ",Matrix[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//Switch//
	//for(i=0;i<m;i++)
	//{
	//	for(j=0;j<n;j++)
	//	{
	//		switch (i)
	//		{
	//		case 0:
	//			Matrix[i][j] = 0.0;
	//			break;
	//		case 1:
	//			Matrix[i][j] = 1.0;
	//			break;
	//		case 2:
	//			Matrix[i][j] = 2.0;
	//			break;
	//		case 3:
	//			Matrix[i][j] = 3.0;
	//			break;
	//		case 4:
	//			Matrix[i][j] = 4.0;
	//			break;
	//		}
	//		printf("%6.2lf ",Matrix[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");

	//************ѭ���ṹ***********//
	//double error = 10.0;
	//int num = 0;
	//while(error > 1.0)
	//{
	//	error -= 1.0;
	//	num++;
	//}
	//printf("%d\n",num);
	//
	//system("pause");

	return 0;
}