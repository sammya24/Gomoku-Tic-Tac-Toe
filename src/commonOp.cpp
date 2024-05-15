//
// Created by Sam Hong on 3/6/23.
//
#include "commonOp.h"
#include <iostream>
using namespace std;

int usageMessage(const string &name, const string &correctInfoFormat) {
    cout << "usage: " << name << endl;
    cout << correctInfoFormat << endl;
    return wrong_command_line_args;
}