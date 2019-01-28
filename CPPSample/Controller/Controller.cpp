//
//  Controller.cpp
//  CPPSample
//
//  Created by Durham, Zachary on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 123456;
}

void Controller :: start()
{
    cout << "This is inside the start method!" << endl;
    cout << "Its puffin up." << endl;
    cout << "This is how you access a variable: " << specialNumber << endl;
    string answer;
    cout << "Type in your name!" << endl;
    getline(cin, answer);
    cout << "You typed: " << answer << endl;
}
