#include "Macro.h"
#include "Person.h"
#include "News.h"

void main()
{
	int iSelect;
	string strName, strNews, strTime;

	while (1)
	{
		system("cls");
		cout << "===Breaking News===" << endl;
		cout << "1. �����" << endl;
		cout << "2. News ����" << endl;
		cout << "3. News ������Ʈ" << endl;
		cout << "4. News ��û" << endl;
		cout << "5. ����" << endl;
		cout << "���� : ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
		{
			Person* tmp = new Person;

			cout << endl << "������ �̸��� �Է��ϼ��� : ";
			cin >> strName;

			tmp->Update(strName);
			News::GetInstance()->AddObserver(tmp);
			system("pause");
			break;
		}
		case 2:
			News::GetInstance()->NotifyObserver();
			system("pause");
			break;
		case 3:
		{
			cout << "���ο� ��� ������ �Է� �ϼ��� : " << endl;
			cin.ignore();
			getline(cin, strNews);

			strTime = News::GetInstance()->currentDateTime();
			News::GetInstance()->SetInfo(strNews, strTime);
			system("pause");
			break;
		}
		case 4:
			News::GetInstance()->ShowObserverInfo();
			system("pause");
			break;
		case 5:
			News::InitObject();
			return;

		}
	}

}