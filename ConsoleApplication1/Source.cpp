#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, exit;
	do
	{
		cout << "enter exemple number: ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
		{
			/*������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������. ������������ ������ ������ �� ������������� �� ����������� �������� ����� ��������*/
			int a[9], b[7], c[16];
			int i, j,m;
			for (i = 0;i < 9;i++)
				a[i] = 5 + rand() % 50;
			for (i = 0;i < 7;i++)
				b[i] = 5 + rand() % 50;
			for (i = 0;i < 16;i++)
			{
				for (j = 0;j < 9;j++)
				{
					c[i] = a[j];
					i++;
				}
				for (m = 0;m < 7;m++)
				{
					c[i] = b[m];
					i++;
				}
			}
			for (i = 0;i < 16;i++)
				cout << i << " - " << c[i] << "\t\n";
			cout << "-----------------------------------" << endl;
			for (i = 0;i < 16;i++)
			{
				for (j = 15;j > i;j--)
				{
					if (c[j] < c[j - 1])
					{
						m = c[j];
						c[j] = c[j - 1];
						c[j - 1] = m;
					}
				}
				cout << i << " - " << c[i] << endl;
			}
			
		}
		break;
		case 2:
		{
			/*2.� �������� ������������� ������� R(9) ���������� ������ ����������� �� �������� �� �������� ������������� ���������*/
			int R[9];
			int i,j;
			int max = 0;
			for (i = 0;i < 9;i++)
			{
				if (i % 2 != 0)
				{
					R[i] = -5 + rand() % 10;
					if (R[i] > max)
					{
						max = R[i];
						j = i;
					}
				}
				else
					R[i] = 0;
				cout << i << " - " << R[i] << endl;
			}
			cout << "maximum number index R[" << j << "]" << endl;
		}
		break;
		case 3:
		{
			/*3.������ ������, ��������� �� 9 ��������� (������ ���������� �����) ������ ����. �������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������*/
			int a[9], b[9];
			int i,c,d;
			cout << "[ � ] [ b ]" << endl;
			for (i = 0;i < 9;i++)
			{
				a[i] = 10 + rand() % 89;
				c = a[i] / 10;
				d = a[i] % 10;
				b[i] = c + d;
				cout << i << " - " << a[i] << " - " << b[i] << endl;
			}
		}
		break;
		case 4:
		{
			/*4.���� �������������� ����� c1, c2, �, cn. ����� ������������ ����� ����� � ������� ��������� � ����� ����� � ��������� ���������.*/
			int a[9];
			int i, c, d;
			int summ = 0;
			int proiz = 1;
			int proiz1 = 1;
			for (i = 0;i < 9;i++)
			{
				summ = 0;
				a[i] = 10 + rand() % 89;
				if (i % 2 == 0)
				{
					c = a[i] / 10;
					d = a[i] % 10;
					summ = c + d;
					proiz *= summ;
				}
				else
				{
					c = a[i] / 10;
					d = a[i] % 10;
					summ = c + d;
					proiz1 *= summ;
				}
			}
			cout << "������������ ����� ����� � ������� ��������� ����� " << proiz << " ������������ ����� ����� � ��������� ��������� ����� " << proiz1 << endl;
		}
		break;
		case 5:
		{
			/*5.������ ������, ��������� �� 14 ��������� ��������������� ����. �������� ������� ������ �������� �� ������. ���������� ���������� ������������� ��� ���� ������������.*/
			int a[14];
			int i,j,m;
			int schet = 0;
			for (i = 0;i < 14;i++)
			{
				a[i] = 10 + rand() % 8999;
				cout << a[i] << endl;
			}	
			cout << endl;
			for (j = 0;j < 7;j++);
			{
				m = a[j];
				a[j] = a[j + 7];
				a[j + 7] = m;
				cout << a[j] << endl;
			}
		}
		break;
		case 6:
		{
			/*6.	���������� ���������� ��������� ���������� � �������� �������� �������.
			(��������� �������� � �������� ������� � ��� ������������������ ���� ����� ������� �����,
			� ������� ������� ����� ������ ������� ����� � ������ �� ����).*/
			int a[20];
			int schet = 0;
			int i;
			for (i = 0; i < 20; i++)
			{
				a[i] = 10 + rand() % 100;
				cout << i << " - " << a[i] << endl;
			}
			for (i = 1; i < 19; i++)
			{
				if ((a[i - 1] < a[i]) && (a[i] > a[i + 1]))
					schet++;
			}
			cout << endl;
			cout << schet << endl;
		}
		break;
		case 7:
		{
			/*7.	� �������� �������� ������� ���������� � ������� ������� ������������������� �����,
			������� ��������� ������� (������ ��������� ����� ������ �����������).*/
			int a[20];
			int i;
			for (i = 0; i < 20; i++)
			{
				a[i] = 10 + rand() % 100;
				cout << i << " - " << a[i] << endl;
			}
			cout << "----------------------\n";
			for (i = 0; i < 20; i++)
			{
				if (a[i] > a[i + 1])
					cout << i << " \t";
				else
					cout << " - \t -";
		}
			break;
		case 8:
		{
			/*8.������ ������, ��������� �� 10 ��������� (������ ���������� �����) ������ ����. �������� ����� ������, ��������� �� ��������� ���� ��������� ��������� �������.*/
			int a[10];
			int i,c,d;
			int b[10];
			cout << "   [a] [b]" << endl;
			for (i = 0;i < 10;i++)
			{
				a[i] = 10 +rand() % 89;
				c = a[i] % 10;
				d = a[i] / 10;
				b[i] = d - c;
				cout << i << " - " << a[i] << " " << b[i] << endl;
			}
		}
		break;
		case 9:
		{
			/*9.	����� ������������� ������. ���������� ���������� �������� �������, �� ������� �������� ��������� ���������� (������ ��������� ����� ������ �����������)*/
			int a[20];
			int i;
			for (i = 0; i < 20; i++)
			{
				a[i] = 10 + rand() % 100;
				cout << i << " - " << a[i] << endl;
			}
			cout << "----------------------\n";
			for (i = 0; i < 20; i++)
			{
				if (a[i] < a[i + 1])
					cout << i << " \t";
				else
					cout << " - \t -";
		}
		break;
		case 10:
		{
			/*10.������ ��� ������� �������������� �����. ���������� ������������ �������� � ������ ������� � �������� �� �������.0*/
			int a[10];
			int i, j, m;
			int b[10];
			cout << "   [a] [b]" << endl;
			for (i = 0;i < 10;i++)
			{
				a[i] = 10 + rand() % 89;
				b[i] = 10 + rand() % 89;
			}
			for (i = 0;i < 10;i++)
			{
				for (j = 9;j > i;j--)
				{
					if (a[j] < a[j - 1])
					{
						m = a[j];
						a[j] = a[j - 1];
						a[j - 1] = m;
					}
					if (b[j] < b[j - 1])
					{
						m = b[j];
						b[j] = b[j - 1];
						b[j - 1] = m;
					}
				}
				cout << i<<" - "<<a[i] << " - " <<b[i]<< endl;
			}
			m = a[9];
			a[9] = b[9];
			b[9] = m;
			cout << "���������� �������" << endl;
			for (i = 0;i < 10;i++)
				cout << i << " - " << a[i] << " - " << b[i] << endl;
		}
		break;
		default:cout << "no exemple" << endl;
			break;
		}
		cout << "�� ������ ���������� 1 - �� 2 - ��� ";
		cin >> exit;
		cout << endl;
	} while (exit == 1);
}