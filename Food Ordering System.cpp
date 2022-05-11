#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char name[30], pizza1[] = "Cheesy Chicken ", pizza2[] = "Hawaian", pizza3[] = "Peperoni", pizza4[] = "Creamy Cheese", roll1[] = "Chicken Chatni Roll", roll2[] = "Chicken Mayo Roll", roll3[] = "Veg Roll With Fries", bur1[] = "Roast Burger", bur2[] = "Chicken Burger", bur3[] = "Beef Burger";
    char sand1[] = "Club Sandwich", sand2[] = "Chicken Sandwich", sand3[] = "Extream Veg Sandwich";
    char bir1[] = "Chicken Biryani", bir2[] = "Prawn Biryani", bir3[] = "Beef Biryani", gotostart;
    int choice = 0, pchoice, pchoice1, quantity; // time=40;
beginning:
    system("CLS");
    cout << "\t\t\t----------FOOD ORDERING SYSTEM-----------\n\n";
    cout << "Please Enter Your Name: ";
    cin.getline(name, 20);
    cout << "Hello " << name << "\n\nWhat would you like to order?\n\n";

    cout << "\t\t\t\t--------Menu--------\n\n";

    cout << "1) Pizzas\n";
    cout << "2) Burgers\n";
    cout << "3) Sandwich\n";
    cout << "4) Rolls\n";
    cout << "5) Biryani\n\n";
    cout << "\nPlease Enter your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\n1) " << pizza1 << "\n";
        cout << "2) " << pizza2 << "\n";
        cout << "3) " << pizza3 << "\n";
        cout << "4) " << pizza4 << "\n";
        cout << "\nPlease Enter which Flavour would you like to have?:";
        cin >> pchoice;
        if (pchoice >= 1 && pchoice <= 5)
        {
            cout << "\n1) Small $11\n"
                 << "2) Regular $14\n"
                 << "3) Large $16\n";
            cout << "\nChoose Size Please:";
            cin >> pchoice1;
            if (pchoice1 >= 1 && pchoice1 <= 3)
                cout << "\nPlease Enter Quantity: ";
            cin >> quantity;
            switch (pchoice1)
            {
            case 1:
                choice = 11 * quantity;
                break;

            case 2:
                choice = 14 * quantity;
                break;

            case 3:
                choice = 16 * quantity;
                break;
            }
            system("CLS");
            switch (pchoice1)
            {
            case 1:
                cout << "\t\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << pizza1;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\n\nThank you For Ordering\n";
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << "  " << pizza2;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << pizza3;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 4:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << pizza4;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            }
            cout << "Would you like to order anything else? Y / N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
                // return 0;
            }
        }
    }

    else if (choice == 2)
    {
        cout << "\n1 " << bur1 << " $2"
             << "\n";
        cout << "2 " << bur2 << " %4"
             << "\n";
        cout << "3 " << bur3 << " $6"
             << "\n";
        // cout<<"4 "<<pizza4<<"\n";
        cout << "\nPlease Enter which Burger you would like to have?: ";
        cin >> pchoice1;
        if (pchoice1 >= 1 && pchoice1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> quantity;
            switch (pchoice1)
            {
            case 1:
                choice = 2 * quantity;
                break;

            case 2:
                choice = 4 * quantity;
                break;

            case 3:
                choice = 6 * quantity;
                break;
            }
            system("CLS");
            switch (pchoice1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << bur1;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << "  " << bur2;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << bur3;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            }
            cout << "\nWould you like to order anything else? Y / N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
                // return 0;
            }
        }
    }
    else if (choice == 3)
    {
        cout << "\n1  " << sand1 << " $2"
             << "\n";
        cout << "2  " << sand2 << " $3"
             << "\n";
        cout << "3  " << sand3 << " $4"
             << "\n";
        // cout<<"4 "<<pizza4<<"\n";
        cout << "\nPlease Enter which Sandwich you would like to have?:";
        cin >> pchoice1;
        if (pchoice1 >= 1 && pchoice1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> quantity;
            switch (pchoice1)
            {
            case 1:
                choice = 2 * quantity;
                break;

            case 2:
                choice = 3 * quantity;
                break;

            case 3:
                choice = 4 * quantity;
                break;
            }
            system("CLS");
            switch (pchoice1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << sand1;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << "  " << sand2;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << sand2;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            }
            cout << "Would you like to order anything else? Y / N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
                // return 0;
            }
        }
    }

    else if (choice == 4)
    {
        cout << "\n1 " << roll1 << " $1"
             << "\n";
        cout << "2 " << roll2 << " $2"
             << "\n";
        cout << "3 " << roll3 << " $3"
             << "\n";
        // cout<<"4 "<<pizza4<<"\n";
        cout << "\nPlease Enter which you would like to have?: ";
        cin >> pchoice1;
        if (pchoice1 >= 1 && pchoice1 <= 3)
        {
            cout << "\nHow Much Rolls Do you want: ";
            cin >> quantity;
            switch (pchoice1)
            {
            case 1:
                choice = 1 * quantity;
                break;

            case 2:
                choice = 2 * quantity;
                break;

            case 3:
                choice = 3 * quantity;
                break;
            }
            system("CLS");
            switch (pchoice1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << roll1;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << "  " << roll2;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << roll3;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            }
        }
    }
    else if (choice == 5)
    {
        cout << "\n1 " << bir1 << " $2"
             << "\n";
        cout << "2 " << bir2 << " $3"
             << "\n";
        cout << "3 " << bir3 << " $4"
             << "\n";
        // cout<<"4 "<<pizza4<<"\n";
        cout << "\nPlease Enter which Biryani you would like to have?:";
        cin >> pchoice1;
        if (pchoice1 >= 1 && pchoice1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> quantity;
            switch (pchoice1)
            {
            case 1:
                choice = 2 * quantity;
                break;

            case 2:
                choice = 3 * quantity;
                break;

            case 3:
                choice = 4 * quantity;
                break;
            }
            system("CLS");
            switch (pchoice1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << bir1;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << "  " << bir2;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << bir3;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered in 40 Minutes";
                cout << "\nThank you For Ordering\n";
                break;
            }
            cout << "Would you like to order anything else? Y / N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
                // return 0;
            }
        }
    }

    else
    {
        system("CLS");
        cout << "Please Select Right Option: \n";
        cout << "Would You like to Start the program again? Y / N: ";
        cin >> gotostart;

        if (gotostart == 'Y' || gotostart == 'y')
        {
            goto beginning;
            // return 0;
        }
    }

    getch();
}
