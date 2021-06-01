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
		cout << "1. 고객등록" << endl;
		cout << "2. News 전송" << endl;
		cout << "3. News 업데이트" << endl;
		cout << "4. News 시청" << endl;
		cout << "5. 종료" << endl;
		cout << "선택 : ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
		{
			Person* tmp = new Person;

			cout << endl << "고객님의 이름을 입력하세요 : ";
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
			cout << "새로운 기사 내용을 입력 하세요 : " << endl;
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