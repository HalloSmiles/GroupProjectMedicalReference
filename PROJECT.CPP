/*
Name: Clarissa Schuermann
Course: COSC 1436.150FA
PROJECT
Due Date: 12/04/2022
Instructor: K. Caruso

Purpose:

Input:

Output:
*/

#include <iostream>
#include <limits>
using namespace std;

void showMenu();
int amount [4] = {0, 0, 0, 0};
string resource [4] =
    {"BACK ROAD COUNSELING \n"
    "Heritage Campus, Harvin Student Center, Room 233A \n"
    "Phone: 361-698-1586 \n" ,
    "PADRE ISLAND FAMILY SERVICES \n"
    "3245 Whitecap Blvd \n"
    "Phone: 361-543-3425 \n" ,
    "BUCCEE'S COUNSELING \n"
    "2895 Airline Rd \n"
    "Phone: 361-435-5555 \n",
    "FAMILY COUNSELING SERVICE \n"
    "3833 S. Staples St, Suite 203 \n"
    "Phone: 361-852-9665 \n"};

/*
Office Data Relevant for Questionnaire
1. 18+ only, 9-5, No INS, Virtual and In person
2. 12+, 9-5, INS A & B, In person
3. 6+, 24 hours, INS C, Virtual
4. 3+, 9-8, INS A, B, C, No INS, Virtual and In person
*/


main ()
{
int choice;
int choice2;
int choice3;
int choice4;
int choice5;
int choice6;

char again;

bool nocont = true;

    do
    {
       do
        {
        showMenu();
            cin >> choice;

                if (choice > 4 || choice < 1)
                {
                cin.clear();
                cin.ignore(numeric_limits<streamsize> ::max(), '\n');
                cout << "That is not a valid option. Please choose one of the four options.\n";  //input validation
                cin >> choice;
                }

                    switch (choice)
                    {
                    case 1:


                    cout <<
                    "---------------------------------------- \n";
                    "You have chosen: \n"
                    "List of Resources \n"
                    "---------------------------------------- \n";
                        for(int i = 0; i < 4; i++)
                            {
                            cout << "---------------------------------------- \n";
                            cout << resource [i] << endl;
                            cout << "------------\n";
                            }
                    cout <<
                    "Would you like to return to the main menu? Enter Y if yes, otherwise press any other key.\n";
                    cin >> again;

                    if (!(again == 'Y' || again == 'y'))
                    cout << "\nThank you, have a good day.\n\nHello, new user: ";     // to "end session" and then re-display menu for new user

                            break;


                    case 2:

                    cout <<
                    "---------------------------------------- \n"
                    "You have chosen: \n"
                    "Questionnaire \n"
                    "---------------------------------------- \n"
                    "Are you a: \n"
                    "1. New User\n"
                    "2. Old User \n"
                    "3. Exit Program \n"
                    "------------\n";

                    cin >> choice2;

                        if (choice2 > 3 || choice2 < 1)
                        {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize> ::max(), '\n');
                        cout << "That is not a valid option. Please choose one of the three options.\n";  //input validation
                        cin >> choice2;
                        }

                        switch (choice2)
                        {

                        case 1:

                            cout << "Let's make you a file and find out what's right for you. \n"
                            // NEW USER CODE???

                            "---------------------------------------- \n"
                            "What is the client's age? \n"
                            "1. 0-2 \n"
                            "2. 3-5 \n"
                            "3. 6-11 \n"
                            "4. 12-17 \n"
                            "5. Adult \n"
                            "------------\n";

                            cin >> choice3;

                                if (choice3 > 5 || choice3 < 1)
                                    {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize> ::max(), '\n');
                                    cout << "That is not a valid option. Please choose one of the five options.\n";  //input validation
                                    cin >> choice3;
                                    }

                                if (choice3 == 1)
                                    {
                                    amount [0] --;
                                    amount [1] --;
                                    amount [2] --;
                                    amount [3] --;

                                cout << "I'm sorry, your child is too young for counseling.\n"
                                "The program will now exit.\n"
                                "------------\n";
                                nocont = false;
                                break;
                                    }

                                else if (choice3 == 2)
                                    {
                                    amount [0] --;
                                    amount [1] --;
                                    amount [2] --;
                                    amount [3] ++;
                                    }
                                else if (choice3 == 3)
                                    {
                                    amount [0] --;
                                    amount [1] --;
                                    amount [2] ++;
                                    amount [3] ++;
                                    }
                                else if (choice3 == 4)
                                    {
                                    amount [0] --;
                                    amount [1] ++;
                                    amount [2] ++;
                                    amount [3] ++;
                                    }
                                else if (choice3 == 5)
                                    {
                                    amount [0] ++;
                                    amount [1] ++;
                                    amount [2] ++;
                                    amount [3] ++;
                                }
                        cout <<
                        "---------------------------------------- \n"
                        "What is your availability? \n"
                        "1. 9am-12pm \n"
                        "2. 12pm-5pm \n"
                        "3. 5pm-8pm \n"
                        "4. 8pm-9am \n"
                        "------------\n";

                        cin >> choice4;

                            if (choice4 > 3 || choice4 < 1)
                                {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize> ::max(), '\n');
                                cout << "That is not a valid option. Please choose one of the four options.\n";  //input validation
                                cin >> choice4;
                                }
                            if (choice4 == 1)
                                {
                                amount [0] ++;
                                amount [1] ++;
                                amount [2] ++;
                                amount [3] ++;
                                }
                            else if (choice4 == 2)
                                {
                                amount [0] ++;
                                amount [1] ++;
                                amount [2] ++;
                                amount [3] ++;
                                }
                            else if (choice4 == 3)
                                {
                                amount [0] --;
                                amount [1] --;
                                amount [2] ++;
                                amount [3] ++;
                                }
                            else if (choice4 == 1)
                                {
                                amount [0] --;
                                amount [1] --;
                                amount [2] ++;
                                amount [3] --;
                                }
                        cout <<
                        "---------------------------------------- \n"
                        "What insurance do you have? \n"
                        "1. Insurance A \n"
                        "2. Insurance B \n"
                        "3. Insurance C \n"
                        "4. No insurance; Out of Pocket \n"
                        "------------\n";

                        cin >> choice5;

                            if (choice5 > 4 || choice5 < 1)
                                {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize> ::max(), '\n');
                                cout << "That is not a valid option. Please choose one of the four options.\n";  //input validation
                                cin >> choice5;
                                }
                            if (choice5 == 1)
                                {
                                amount [0] --;
                                amount [1] ++;
                                amount [2] --;
                                amount [3] ++;
                                }
                            else if (choice5 == 2)
                                {
                                amount [0] --;
                                amount [1] ++;
                                amount [2] --;
                                amount [3] ++;
                                }
                            else if (choice5 == 3)
                                {
                                amount [0] --;
                                amount [1] --;
                                amount [2] ++;
                                amount [3] ++;
                                }
                            else if (choice5 == 1)
                                {
                                amount [0] ++;
                                amount [1] --;
                                amount [2] --;
                                amount [3] ++;
                                }
                        cout <<
                        "---------------------------------------- \n"
                        "How would you prefer to receive care? \n"
                        "1. In Office \n"
                        "2. Virtually \n"
                        "------------\n";

                        cin >> choice6;

                            if (choice6 > 2 || choice5 < 1)
                                {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize> ::max(), '\n');
                                cout << "That is not a valid option. Please choose one of the two options.\n";  //input validation
                                cin >> choice6;
                                }
                            if (choice6 == 1)
                                {
                                amount [0] --;
                                amount [1] ++;
                                amount [2] --;
                                amount [3] ++;
                                }
                            else if (choice6 == 2)
                                {
                                amount [0] ++;
                                amount [1] ++;
                                amount [2] --;
                                amount [3] ++;
                            }
                        cout <<
                                "You might be best suited for these practices:\n"
                                "--------------Therapy Office Information--------------\n\n";
                        if (amount[0] > 0)
                            cout << resource[0] << endl;
                        if (amount[1] > 0)
                            cout << resource[1] << endl;
                        if (amount[2] > 0)
                            cout << resource[2]  << endl;
                        if (amount[3] > 0)
                            cout << resource[3] << endl;
                        if (amount[0] == 0 && amount[1] == 0 && amount[2] == 0 && amount[3] == 0)
                            cout << "I'm sorry we couldn't help you find anyone today. Please check again when we have updated our list. \n";

                        cout << "-----------------------------------------------\n";
                        cout << "Thank You! Have a Nice Day!" << endl;
                                "------------\n";
                                break;

                            case 2: // OLD USER SIGN IN???
                                break;

                            case 3: nocont = false;
                                break;
                        }

                    case 3: // RELAXATION CODE???
                        break;

                    case 4:
                        nocont = false;


                    }
        }
        while(again == 'Y' || again == 'y');
    }
    while(nocont);
}

        void showMenu()
        {
            cout << "WELCOME TO THERAPY SEARCH \n"
                    "---------------------------------------- \n"
                    "Please select item from menu below.\n"
                    "1. List of Resources\n"
                    "2. Questionnaire\n"
                    "3. Relax Your Mind\n"
                    "4. Exit Program\n"
                    "------------\n";

        }
