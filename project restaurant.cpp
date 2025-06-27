#include<bits/stdc++.h>
using namespace std;
int main()
{

    string name,pizza1="Chicken Fazita",pizza2="Chicken BBQ",pizza3="Motorolla Special";
    string burger1="Chicken Burger",burger2="Chicken BBQ Burger",burger3="Meat Smooky";
    string sand1="Chicken sandwich",sand2="Meat Sandwich",sand3="Onion special";
    string rolls1="Fatty roll",rolls2="Chicken rolls",rolls3="Meat rolls";
    string biriyani1="Chicken Biriyani",biriyani2="Meat Biriyani",biriyani3="Mutton biriyani";
    int choice=0,pchoice,pchoice1,quantity;
    beginning:
        system("CLS");
        cout<<"\t\t\t -----Savar Food Center----\n\n";
        cout<<"Enter your name: ";
        getline(cin,name);
        cout<<"\n\n What you would like to order ?\n\n";
        cout<<"\t\t\t\t -----MENU------\n\n";

        cout<<"1)Pizzas\n";
        cout<<"2)Burger\n";
        cout<<"3)Sandwich\n";
        cout<<"4)Rolls\n";
        cout<<"5)biriyani\n";

        cout<<"\nPlease enter your choice: ";
        cin>>choice;


        if(choice==1)
        {
            cout<<"\n1)"<<pizza1<<endl;
            cout<<"\n2)"<<pizza2<<endl;
            cout<<"\n3)"<<pizza3<<endl;
            cout<<"\n\n Please enter which falvoured you would like to have? :";
            cin>>pchoice;
            if(pchoice>=1 && pchoice<=3)
            {
                cout<<"\n1)small tk.280\n"<<"\n2)medium tk 480\n"<<"\n3)large 800\n";
                cout<<"Choose size plz: \n";
                cin>>pchoice1;
                if(pchoice>=1 && pchoice<=3)
                {
                    cout<<"\nPlease enter Quantity: ";
                    cin>>quantity;
                    switch(quantity)
                    {
                    case 1: choice=250*quantity;
                        break;
                    case 2: choice=480*quantity;
                    break;
                    case 3: choice=800*quantity;
                    break;

                    }
                    system("CLS");
                    switch(pchoice1)
                    {
                    case 1:
                        cout<<"\t\t\t----Your Order----\n";
                        cout<<quantity<<" "<<pizza1;
                        cout<<"\nYour total bill is"<<choice<<"Your order will be delivered in 30 minutes";
                        cout<<"Thank you from ordering Savar Food Center\n";
                        break;
                    case 2:
                        cout<<"\t\t\t----Your Order----\n";
                        cout<<quantity<<" "<<pizza2;
                        cout<<"\nYour total bill is"<<choice<<"Your order will be delivered in 30 minutes";
                        cout<<"Thank you from ordering Savar Food Center\n";
                        break;
                     case 3:
                        cout<<"\t\t\t----Your Order----\n";
                        cout<<quantity<<" "<<pizza3;
                        cout<<"\nYour total bill is"<<choice<<"Your order will be delivered in 30 minutes";
                        cout<<"Thank you from ordering Savar Food Center\n";
                        break;
                    }
                    cout<<"Would you like to order anything else?";
                    char gotostart;
                    cin>>gotostart;
                    if(gotostart=='Y'|| gotostart=='y')
                    {
                        goto beginning;
                    }

                }
            }
        }
        if(choice==2)
        {
            cout<<"\n1)"<<burger1<<endl;
            cout<<"\n2)"<<burger2<<endl;
            cout<<"\n3)"<<burger3<<endl;
            cout<<"\n\n Please enter which falvoured you would like to have? :";
          cin>>pchoice;
            if(pchoice>=1 && pchoice<=3)
            {
                cout<<"\n1)small tk.280\n"<<"\n2)medium tk 480\n"<<"\n3)large 800\n";
                cout<<"Choose size plz: \n";
                cin>>pchoice1;
                if(pchoice>=1 && pchoice<=3)
                {
                    cout<<"\nPlease enter Quantity: ";
                    cin>>quantity;
                    switch(quantity)
                    {
                    case 1: choice=250*quantity;
                        break;
                    case 2: choice=480*quantity;
                    break;
                    case 3: choice=800*quantity;
                    break;

                    }
                    system("CLS");
                    switch(pchoice1)
                    {
                    case 1:
                        cout<<"\t\t\t----Your Order----\n";
                        cout<<quantity<<" "<<burger1;
                        cout<<"\nYour total bill is"<<choice<<"Your order will be delivered in 30 minutes";
                        cout<<"Thank you from ordering Savar Food Center\n";
                        break;
                    case 2:
                        cout<<"\t\t\t----Your Order----\n";
                        cout<<quantity<<" "<<burger2;
                        cout<<"\nYour total bill is"<<choice<<"Your order will be delivered in 30 minutes";
                        cout<<"Thank you from ordering Savar Food Center\n";
                        break;
                     case 3:
                        cout<<"\t\t\t----Your Order----\n";
                        cout<<quantity<<" "<<burger3;
                        cout<<"\nYour total bill is"<<choice<<"Your order will be delivered in 30 minutes";
                        cout<<"Thank you from ordering Savar Food Center\n";
                        break;
                    }
                    cout<<"Would you like to order anything else?";
                    char gotostart;
                    cin>>gotostart;
                    if(gotostart=='Y' || gotostart=='y')
                    {
                        goto beginning;
                    }

                }
            }
        }





}
