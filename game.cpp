#include<iostream>
#include<iomanip>
#include<ctime>
#include<vector>
#include<array>
#include<cstdlib>
#include <Windows.h>

using namespace std;

//1.Ϊ��Ůȡ����
//2.ΪŮ��¼���ʼ��Ϣ����,����
//  ����Ů��������,���û�������(����,����,����,����,����)
//3.��ʼ��Ϸ��ѭ��
//  ��Ϸ��1660.1��ʼ
//4.���ݸ������,�ж���Ϸ���
void Loading()
{
	cout << "Loading" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "��";
		Sleep(500);
	}
	cout << endl;
}

	

int main()
{
	/*���׵�����*/
	string value_father_name;
	/*Ů��������*/
	string value_daughter_name;
	/*Ů�����յ��·�*/
	int value_birth_mouth = 0;
	/*Ů�����յ�����*/
	int value_birth_date = 0;
	/*Ů��������*/
	string value_daugter_constell;
	/*Ů�������������Ϣ:����,����,����,����,����*/
	array<int, 5> value_daughter_baseinfos;
	/*���������:����, ����, ����, ����, ���� */
	array<string, 5> value_array_baseinfos_names = { "����","����","����","����","����" };
	/*������*/
	int value_daughter_money = 500;
	/*Ѯ*/
	string month_part[3] = { "��Ѯ","��Ѯ","��Ѯ" };
	/*��ֵ*/
	int sum = 0;
	/*������ά����*/
	string constell_names[12][2] =
	{
		{"Ħ����","ˮƿ��"},//һ��
		{"ˮƿ��","˫����"},//����
		{"˫����","������"},//����
		{"������","��ţ��"},//����
		{"��ţ��","˫����"},//����
		{"˫����","��з��"},//����
		{"��з��","ʨ����"},//����
		{"ʨ����","��Ů��"},//����
		{"��Ů��","�����"},//����
		{"��ƽ��","��Ы��"},//ʮ��
		{"��Ы��","������"},//ʮһ��
		{"������","Ħ����"}//ʮ����
	};
	int choice = 0, temp1 = 0, temp2 = 0, temp3 = 0;
	cout << "Ů�����ɼƻ���ʼ��!" << endl;
	cout << "���׵�����: ";
	cin >> value_father_name;
	cout << "Ů��������: ";
	cin >> value_daughter_name;
	cout << "Ů��������(MM DD): ";
	cin >> value_birth_mouth >> value_birth_date;
	Loading();

	/*���·ݵĿ���������*/
	int constell_dates[] = { 20,19,21,20,21,22,23,23,23,23,24,23,22 };
	value_daugter_constell = constell_names[value_birth_mouth - 1][value_birth_date / constell_dates[value_birth_mouth - 1]];

	cout << "Ů������Ϣ: ";
	cout << "����: " << value_daughter_name << endl;
	cout << "����: 1659-" << value_birth_mouth << "-" << value_birth_date << endl;
	cout << "����: " << value_daugter_constell << endl;

	if (value_daugter_constell == "Ħ����")
	{
		value_daughter_baseinfos[0] = 56;//����
		value_daughter_baseinfos[1] = 21;//����
		value_daughter_baseinfos[2] = 16;//����
		value_daughter_baseinfos[3] = 25;//����
		value_daughter_baseinfos[4] = 23;//����
	}
	else if (value_daugter_constell == "ˮƿ��")
	{
		value_daughter_baseinfos[0] = 43;//����
		value_daughter_baseinfos[1] = 43;//����
		value_daughter_baseinfos[2] = 20;//����
		value_daughter_baseinfos[3] = 23;//����
		value_daughter_baseinfos[4] = 17;//����
	}
	else if (value_daugter_constell == "˫����")
	{
		value_daughter_baseinfos[0] = 41;//����
		value_daughter_baseinfos[1] = 20;//����
		value_daughter_baseinfos[2] = 29;//����
		value_daughter_baseinfos[3] = 23;//����
		value_daughter_baseinfos[4] = 32;//����
	}
	else if (value_daugter_constell == "������")
	{
		value_daughter_baseinfos[0] = 80;//����
		value_daughter_baseinfos[1] = 15;//����
		value_daughter_baseinfos[2] = 15;//����
		value_daughter_baseinfos[3] = 11;//����
		value_daughter_baseinfos[4] = 21;//����
	}
	else if (value_daugter_constell == "��ţ��")
	{
		value_daughter_baseinfos[0] = 46;//����
		value_daughter_baseinfos[1] = 30;//����
		value_daughter_baseinfos[2] = 28;//����
		value_daughter_baseinfos[3] = 20;//����
		value_daughter_baseinfos[4] = 29;//����
	}
	else if (value_daugter_constell == "˫����")
	{
		value_daughter_baseinfos[0] = 50;//����
		value_daughter_baseinfos[1] = 35;//����
		value_daughter_baseinfos[2] = 23;//����
		value_daughter_baseinfos[3] = 8;//����
		value_daughter_baseinfos[4] = 20;//����
	}
	else if (value_daugter_constell == "��з��")
	{
		value_daughter_baseinfos[0] = 40;//����
		value_daughter_baseinfos[1] = 31;//����
		value_daughter_baseinfos[2] = 33;//����
		value_daughter_baseinfos[3] = 17;//����
		value_daughter_baseinfos[4] = 33;//����
	}
	else if (value_daugter_constell == "ʨ����")
	{
		value_daughter_baseinfos[0] = 85;//����
		value_daughter_baseinfos[1] = 9;//����
		value_daughter_baseinfos[2] = 11;//����
		value_daughter_baseinfos[3] = 20;//����
		value_daughter_baseinfos[4] = 37;//����
	}
	else if (value_daugter_constell == "��Ů��")
	{
		value_daughter_baseinfos[0] = 35;//����
		value_daughter_baseinfos[1] = 28;//����
		value_daughter_baseinfos[2] = 36;//����
		value_daughter_baseinfos[3] = 18;//����
		value_daughter_baseinfos[4] = 40;//����
	}
	else if (value_daugter_constell == "�����")
	{
		value_daughter_baseinfos[0] = 42;//����
		value_daughter_baseinfos[1] = 33;//����
		value_daughter_baseinfos[2] = 25;//����
		value_daughter_baseinfos[3] = 32;//����
		value_daughter_baseinfos[4] = 28;//����
	}
	else if (value_daugter_constell == "��Ы��")
	{
		value_daughter_baseinfos[0] = 50;//����
		value_daughter_baseinfos[1] = 25;//����
		value_daughter_baseinfos[2] = 40;//����
		value_daughter_baseinfos[3] = 18;//����
		value_daughter_baseinfos[4] = 17;//����
	}
	else if (value_daugter_constell == "������")
	{
		value_daughter_baseinfos[0] = 57;//����
		value_daughter_baseinfos[1] = 31;//����
		value_daughter_baseinfos[2] = 15;//����
		value_daughter_baseinfos[3] = 19;//����
		value_daughter_baseinfos[4] = 23;//����
	}


	/*for (int i = 0; i < 5; i++)
	{
		cout << value_daughter_baseinfos[i] << endl;
	}*/
	for (int year = 1659; year < 1659 + 2; year++)
	{
		for (int month = (year == 1659) ? 6 : 1; month <= 12; month++)
		{
			//�жϱ����Ƿ���Ů��������
			if (month == value_birth_mouth)
			{
				cout << "������" << value_daughter_name << "����,Ҫ��Ҫ������?" << endl;
				//�����û������ж�
			}
			//��ʾ��Ϸ���˵�
			cout << "\n1.�鿴״̬\n2.�����г�\n3.����̸��\n4.�浵\n5.����" << endl;
			cin >> choice;
			Loading();
			switch (choice)
			{
			case 1:
				cout << "Ů������Ϣ: ";
				cout << "����: " << value_daughter_name << endl;
				cout << "����: 1659-" << value_birth_mouth << "-" << value_birth_date << endl;
				cout << "����: " << value_daugter_constell << endl;
				cout << "��Ǯ: " << value_daughter_money << endl;
				//��ӡ��������
				cout << left;
				for (int i = 0; i < 5; i++)
				{
					cout << value_array_baseinfos_names[i] << " : " << setw(6) << value_daughter_baseinfos[i];
					int solidcount = value_daughter_baseinfos[i] / 10;
					for (int j = 0; j < 10; j++)
					{
						if (j < solidcount)
							cout << "��";
						else
							cout << "��";
					}
					cout << endl;
				}
				cout << endl;
				break;
			case 2://�����г�:һ������������г�
				for (int i = 0; i < 3; i++)
				{
					cout << "---" << month << "�� ---" << month_part[i] << "---" << endl;
					cout << "1. ѧϰ����\n2. ��ѧ\n3. ѧϰ����\n4. ��������\n5. ��׬Ǯ" << endl;
					cout << "��ѡ��: ";
					cin >> choice;
					Loading();
					//�ж�ûǮ�����,ûǮ��
					if (value_daughter_money <= 50)
					{
						cout << "��Ǹ,��ûǮ��,ֻ�ܴ�" << endl;
						temp3 = rand() % 50 + 20;
						value_daughter_money += temp3;
						cout << "��������Ǯ������" << endl;
						cout << "��Ǯ+" << temp3 << endl;
					}
					srand(time(NULL));
					switch (choice)
					{
					case 1://ѧϰ����:+���� +���� -��Ǯ
						temp1 = rand() % 15;
						temp2 = rand() % 11;
						temp3 = rand() % 51;
						value_daughter_baseinfos[0] += temp1;
						value_daughter_baseinfos[2] += temp2;
						value_daughter_money -= temp3;
						cout << "ѧϰ���޼ɺð���!!!!" << endl;
						cout << "����+" << temp1 << "," << "����+" << temp2 << "," << "��Ǯ-" << temp3 << endl;
						break;
					case 2://��ѧ:+���� +���� -��Ǯ
						temp1 = rand() % 15;
						temp2 = rand() % 11;
						temp3 = rand() % 51;
						value_daughter_baseinfos[1] += temp1;
						value_daughter_baseinfos[3] += temp2;
						value_daughter_money -= temp3;
						cout << "�ú�ѧϰ,��������,���Ͱ�����" << endl;
						cout << "����+" << temp1 << "," << "����+" << temp2 << "," << "��Ǯ-" << temp3 << endl;
						break;
					case 3://ѧϰ����:+���� +���� -��Ǯ
						temp1 = rand() % 11;
						temp2 = rand() % 11;
						temp3 = rand() % 51;
						value_daughter_baseinfos[3] += temp1;
						value_daughter_baseinfos[4] += temp2;
						value_daughter_money -= temp3;
						cout << "Manners maketh man" << endl;
						cout << "����+" << temp1 << "," << "����+" << temp2 << "," << "��Ǯ-" << temp3 << endl;
						break;
					case 4://��������:+���� +���� -��Ǯ
						temp1 = rand() % 11;
						temp2 = rand() % 11;
						temp3 = rand() % 51;
						value_daughter_baseinfos[2] += temp1;
						value_daughter_baseinfos[4] += temp2;
						value_daughter_money -= temp3;
						cout << "����ֹˮ,�ļ�ʯ��" << endl;
						cout << "����+" << temp1 << "," << "����+" << temp2 << "," << "��Ǯ-" << temp3 << endl;
						break;
					case 5:
						temp3 = rand() % 50 + 20;
						value_daughter_money += temp3;
						cout << "ߣ�����Ӽ��͸�" << endl;
						cout << "��Ǯ+" << temp3 << endl;
						break;
					default:
						cout << "ʲôҲû��~~~" << endl;
						break;
					}
					cout << endl;
				}
				break;
			case 3:
				cout << "���ܴ�����" << endl;
				break;
			case 4:
				cout << "���ܴ�����" << endl;
				break;
			case 5:
				cout << "���ܴ�����" << endl;
				break;
			default:
				cout << "��ѽ,������!" << endl;
				break;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		sum += value_daughter_baseinfos[i];
	}
	if (sum >= 2000)
	{
		cout << "��ϲ��ﵽ������Ϸ���,�ǻ���ΪŮ������" << endl;
	}
	else if (sum >= 1800 && sum <= 2000)
	{
		cout << "�ﵽ������Ϸ���,��Ϊ����" << endl;
	}
	else if (sum >= 1200 && sum < 1600)
	{
		int maxvalue = value_daughter_baseinfos[0];
		int maxIndex = 1;
		for (int i = 1; i < 5; i++)
		{
			if (maxvalue < value_daughter_baseinfos[i])
			{
				maxvalue = value_daughter_baseinfos[i];
				maxIndex = i;
			}
		}
		if ("����" == value_array_baseinfos_names[maxIndex] && value_daughter_baseinfos[2] > value_daughter_baseinfos[4])
		{
			cout << "�������ڵ�ѵ��, " << value_daughter_name << "��Ϊһ�����ٵĸ߼�����!" << endl;
		}
		if ("����" == value_array_baseinfos_names[maxIndex] && value_daughter_baseinfos[0] > value_daughter_baseinfos[4])
		{
			cout << "�ڶ�����թ�ٳ��ϲ���ƴ��, " << value_daughter_name << "��Ϊ��ǵĻʼ�ѧԺ�ܲ�!" << endl;
		}
		if ("����" == value_array_baseinfos_names[maxIndex] && value_daughter_baseinfos[4] > value_daughter_baseinfos[2])
		{
			cout << "ÿ������Ĳ���, " << value_daughter_name << "��ΪӢ�µĽ�����ʿ�ų�!" << endl;
		}
		if ("����" == value_array_baseinfos_names[maxIndex] && value_daughter_baseinfos[4] > value_daughter_baseinfos[3])
		{
			cout << "�õ��ʵ۵ĳ���, " << value_daughter_name << "��Ϊ�����ĳ���!" << endl;
		}
	}
	else if (sum < 1200)
	{
		cout << "����ƽӹ, " << value_daughter_name << "��Ϊһ����ͨ�ĸ�Ů,�ȹ�����ƽ����һ��" << endl;
	}
	cout << "��Ϸ����" << endl;
	return 0;
}