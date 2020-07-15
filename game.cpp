#include<iostream>
#include<iomanip>
#include<ctime>
#include<vector>
#include<array>
#include<cstdlib>
#include <Windows.h>

using namespace std;

//1.为父女取名字
//2.为女儿录入初始信息生日,星座
//  根据女儿的星座,设置基本参数(体力,智力,魅力,道德,气质)
//3.开始游戏大循环
//  游戏从1660.1开始
//4.根据各项参数,判定游戏结果
void Loading()
{
	cout << "Loading" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "■";
		Sleep(500);
	}
	cout << endl;
}

	

int main()
{
	/*父亲的姓名*/
	string value_father_name;
	/*女儿的姓名*/
	string value_daughter_name;
	/*女儿生日的月份*/
	int value_birth_mouth = 0;
	/*女儿生日的日期*/
	int value_birth_date = 0;
	/*女儿的星座*/
	string value_daugter_constell;
	/*女儿的五项基本信息:体力,智力,魅力,道德,气质*/
	array<int, 5> value_daughter_baseinfos;
	/*五基本属性:体力, 智力, 魅力, 道德, 气质 */
	array<string, 5> value_array_baseinfos_names = { "体力","智力","魅力","道德","气质" };
	/*金币余额*/
	int value_daughter_money = 500;
	/*旬*/
	string month_part[3] = { "上旬","中旬","下旬" };
	/*总值*/
	int sum = 0;
	/*星座二维数组*/
	string constell_names[12][2] =
	{
		{"摩羯座","水瓶座"},//一月
		{"水瓶座","双鱼座"},//二月
		{"双鱼座","白羊座"},//三月
		{"白羊座","金牛座"},//四月
		{"金牛座","双子座"},//五月
		{"双子座","巨蟹座"},//六月
		{"巨蟹座","狮子座"},//七月
		{"狮子座","处女座"},//八月
		{"处女座","天秤座"},//九月
		{"天平座","天蝎座"},//十月
		{"天蝎座","射手座"},//十一月
		{"射手座","摩羯座"}//十二月
	};
	int choice = 0, temp1 = 0, temp2 = 0, temp3 = 0;
	cout << "女儿养成计划开始啦!" << endl;
	cout << "父亲的姓名: ";
	cin >> value_father_name;
	cout << "女儿的姓名: ";
	cin >> value_daughter_name;
	cout << "女儿的生日(MM DD): ";
	cin >> value_birth_mouth >> value_birth_date;
	Loading();

	/*各月份的跨星座日期*/
	int constell_dates[] = { 20,19,21,20,21,22,23,23,23,23,24,23,22 };
	value_daugter_constell = constell_names[value_birth_mouth - 1][value_birth_date / constell_dates[value_birth_mouth - 1]];

	cout << "女儿的信息: ";
	cout << "姓名: " << value_daughter_name << endl;
	cout << "生日: 1659-" << value_birth_mouth << "-" << value_birth_date << endl;
	cout << "星座: " << value_daugter_constell << endl;

	if (value_daugter_constell == "摩羯座")
	{
		value_daughter_baseinfos[0] = 56;//体力
		value_daughter_baseinfos[1] = 21;//智力
		value_daughter_baseinfos[2] = 16;//魅力
		value_daughter_baseinfos[3] = 25;//道德
		value_daughter_baseinfos[4] = 23;//气质
	}
	else if (value_daugter_constell == "水瓶座")
	{
		value_daughter_baseinfos[0] = 43;//体力
		value_daughter_baseinfos[1] = 43;//智力
		value_daughter_baseinfos[2] = 20;//魅力
		value_daughter_baseinfos[3] = 23;//道德
		value_daughter_baseinfos[4] = 17;//气质
	}
	else if (value_daugter_constell == "双鱼座")
	{
		value_daughter_baseinfos[0] = 41;//体力
		value_daughter_baseinfos[1] = 20;//智力
		value_daughter_baseinfos[2] = 29;//魅力
		value_daughter_baseinfos[3] = 23;//道德
		value_daughter_baseinfos[4] = 32;//气质
	}
	else if (value_daugter_constell == "白羊座")
	{
		value_daughter_baseinfos[0] = 80;//体力
		value_daughter_baseinfos[1] = 15;//智力
		value_daughter_baseinfos[2] = 15;//魅力
		value_daughter_baseinfos[3] = 11;//道德
		value_daughter_baseinfos[4] = 21;//气质
	}
	else if (value_daugter_constell == "金牛座")
	{
		value_daughter_baseinfos[0] = 46;//体力
		value_daughter_baseinfos[1] = 30;//智力
		value_daughter_baseinfos[2] = 28;//魅力
		value_daughter_baseinfos[3] = 20;//道德
		value_daughter_baseinfos[4] = 29;//气质
	}
	else if (value_daugter_constell == "双子座")
	{
		value_daughter_baseinfos[0] = 50;//体力
		value_daughter_baseinfos[1] = 35;//智力
		value_daughter_baseinfos[2] = 23;//魅力
		value_daughter_baseinfos[3] = 8;//道德
		value_daughter_baseinfos[4] = 20;//气质
	}
	else if (value_daugter_constell == "巨蟹座")
	{
		value_daughter_baseinfos[0] = 40;//体力
		value_daughter_baseinfos[1] = 31;//智力
		value_daughter_baseinfos[2] = 33;//魅力
		value_daughter_baseinfos[3] = 17;//道德
		value_daughter_baseinfos[4] = 33;//气质
	}
	else if (value_daugter_constell == "狮子座")
	{
		value_daughter_baseinfos[0] = 85;//体力
		value_daughter_baseinfos[1] = 9;//智力
		value_daughter_baseinfos[2] = 11;//魅力
		value_daughter_baseinfos[3] = 20;//道德
		value_daughter_baseinfos[4] = 37;//气质
	}
	else if (value_daugter_constell == "处女座")
	{
		value_daughter_baseinfos[0] = 35;//体力
		value_daughter_baseinfos[1] = 28;//智力
		value_daughter_baseinfos[2] = 36;//魅力
		value_daughter_baseinfos[3] = 18;//道德
		value_daughter_baseinfos[4] = 40;//气质
	}
	else if (value_daugter_constell == "天秤座")
	{
		value_daughter_baseinfos[0] = 42;//体力
		value_daughter_baseinfos[1] = 33;//智力
		value_daughter_baseinfos[2] = 25;//魅力
		value_daughter_baseinfos[3] = 32;//道德
		value_daughter_baseinfos[4] = 28;//气质
	}
	else if (value_daugter_constell == "天蝎座")
	{
		value_daughter_baseinfos[0] = 50;//体力
		value_daughter_baseinfos[1] = 25;//智力
		value_daughter_baseinfos[2] = 40;//魅力
		value_daughter_baseinfos[3] = 18;//道德
		value_daughter_baseinfos[4] = 17;//气质
	}
	else if (value_daugter_constell == "射手座")
	{
		value_daughter_baseinfos[0] = 57;//体力
		value_daughter_baseinfos[1] = 31;//智力
		value_daughter_baseinfos[2] = 15;//魅力
		value_daughter_baseinfos[3] = 19;//道德
		value_daughter_baseinfos[4] = 23;//气质
	}


	/*for (int i = 0; i < 5; i++)
	{
		cout << value_daughter_baseinfos[i] << endl;
	}*/
	for (int year = 1659; year < 1659 + 2; year++)
	{
		for (int month = (year == 1659) ? 6 : 1; month <= 12; month++)
		{
			//判断本月是否是女儿的生日
			if (month == value_birth_mouth)
			{
				cout << "本月是" << value_daughter_name << "生日,要不要送礼物?" << endl;
				//根据用户进行判断
			}
			//显示游戏主菜单
			cout << "\n1.查看状态\n2.安排行程\n3.亲子谈话\n4.存档\n5.读档" << endl;
			cin >> choice;
			Loading();
			switch (choice)
			{
			case 1:
				cout << "女儿的信息: ";
				cout << "姓名: " << value_daughter_name << endl;
				cout << "生日: 1659-" << value_birth_mouth << "-" << value_birth_date << endl;
				cout << "星座: " << value_daugter_constell << endl;
				cout << "金钱: " << value_daughter_money << endl;
				//打印核心属性
				cout << left;
				for (int i = 0; i < 5; i++)
				{
					cout << value_array_baseinfos_names[i] << " : " << setw(6) << value_daughter_baseinfos[i];
					int solidcount = value_daughter_baseinfos[i] / 10;
					for (int j = 0; j < 10; j++)
					{
						if (j < solidcount)
							cout << "■";
						else
							cout << "□";
					}
					cout << endl;
				}
				cout << endl;
				break;
			case 2://安排行程:一个月最多三个行程
				for (int i = 0; i < 3; i++)
				{
					cout << "---" << month << "月 ---" << month_part[i] << "---" << endl;
					cout << "1. 学习武艺\n2. 上学\n3. 学习礼仪\n4. 出城修行\n5. 打工赚钱" << endl;
					cout << "请选择: ";
					cin >> choice;
					Loading();
					//判断没钱的情况,没钱打工
					if (value_daughter_money <= 50)
					{
						cout << "抱歉,您没钱了,只能打工" << endl;
						temp3 = rand() % 50 + 20;
						value_daughter_money += temp3;
						cout << "真想念有钱的日子" << endl;
						cout << "金钱+" << temp3 << endl;
					}
					srand(time(NULL));
					switch (choice)
					{
					case 1://学习武艺:+体力 +魅力 -金钱
						temp1 = rand() % 15;
						temp2 = rand() % 11;
						temp3 = rand() % 51;
						value_daughter_baseinfos[0] += temp1;
						value_daughter_baseinfos[2] += temp2;
						value_daughter_money -= temp3;
						cout << "学习张无忌好榜样!!!!" << endl;
						cout << "体力+" << temp1 << "," << "魅力+" << temp2 << "," << "金钱-" << temp3 << endl;
						break;
					case 2://上学:+智力 +道德 -金钱
						temp1 = rand() % 15;
						temp2 = rand() % 11;
						temp3 = rand() % 51;
						value_daughter_baseinfos[1] += temp1;
						value_daughter_baseinfos[3] += temp2;
						value_daughter_money -= temp3;
						cout << "好好学习,天天向上,加油奥利给" << endl;
						cout << "智力+" << temp1 << "," << "道德+" << temp2 << "," << "金钱-" << temp3 << endl;
						break;
					case 3://学习礼仪:+道德 +气质 -金钱
						temp1 = rand() % 11;
						temp2 = rand() % 11;
						temp3 = rand() % 51;
						value_daughter_baseinfos[3] += temp1;
						value_daughter_baseinfos[4] += temp2;
						value_daughter_money -= temp3;
						cout << "Manners maketh man" << endl;
						cout << "道德+" << temp1 << "," << "气质+" << temp2 << "," << "金钱-" << temp3 << endl;
						break;
					case 4://出城修行:+魅力 +气质 -金钱
						temp1 = rand() % 11;
						temp2 = rand() % 11;
						temp3 = rand() % 51;
						value_daughter_baseinfos[2] += temp1;
						value_daughter_baseinfos[4] += temp2;
						value_daughter_money -= temp3;
						cout << "心如止水,心坚石穿" << endl;
						cout << "魅力+" << temp1 << "," << "气质+" << temp2 << "," << "金钱-" << temp3 << endl;
						break;
					case 5:
						temp3 = rand() % 50 + 20;
						value_daughter_money += temp3;
						cout << "撸起袖子加油干" << endl;
						cout << "金钱+" << temp3 << endl;
						break;
					default:
						cout << "什么也没干~~~" << endl;
						break;
					}
					cout << endl;
				}
				break;
			case 3:
				cout << "功能待开发" << endl;
				break;
			case 4:
				cout << "功能待开发" << endl;
				break;
			case 5:
				cout << "功能待开发" << endl;
				break;
			default:
				cout << "哎呀,出错了!" << endl;
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
		cout << "恭喜你达到最优游戏结果,登基成为女王陛下" << endl;
	}
	else if (sum >= 1800 && sum <= 2000)
	{
		cout << "达到次优游戏结果,成为王妃" << endl;
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
		if ("道德" == value_array_baseinfos_names[maxIndex] && value_daughter_baseinfos[2] > value_daughter_baseinfos[4])
		{
			cout << "经过长期的训练, " << value_daughter_name << "成为一名光荣的高级祭祀!" << endl;
		}
		if ("智力" == value_array_baseinfos_names[maxIndex] && value_daughter_baseinfos[0] > value_daughter_baseinfos[4])
		{
			cout << "在尔虞我诈官场上不断拼搏, " << value_daughter_name << "成为睿智的皇家学院总裁!" << endl;
		}
		if ("体力" == value_array_baseinfos_names[maxIndex] && value_daughter_baseinfos[4] > value_daughter_baseinfos[2])
		{
			cout << "每日辛苦的操练, " << value_daughter_name << "成为英勇的近卫骑士团长!" << endl;
		}
		if ("魅力" == value_array_baseinfos_names[maxIndex] && value_daughter_baseinfos[4] > value_daughter_baseinfos[3])
		{
			cout << "得到皇帝的宠幸, " << value_daughter_name << "成为国王的宠妃!" << endl;
		}
	}
	else if (sum < 1200)
	{
		cout << "能力平庸, " << value_daughter_name << "作为一个普通的妇女,度过了其平凡的一生" << endl;
	}
	cout << "游戏结束" << endl;
	return 0;
}