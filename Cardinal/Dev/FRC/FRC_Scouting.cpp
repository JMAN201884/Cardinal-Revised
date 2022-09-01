#include <Iostream>

using namespace std;

main()
{
    int choice
    cout <<"Welcome To The 1895 Lambda Core's Scouting App." endl;
    cout <<"1.Login" endl;
    cout <<"\n2.Register" endl;
    cout <<"\n3.Close" endl;
    cout <<"\nEnter Choice" endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            Login();
            break;
        case 2:
            Register();
            break;
        case 3:
            Close();
            break;
        default:
            cout <<"Choice Unavailiable" endl;
            main();
    }
}

void Login()
{

}