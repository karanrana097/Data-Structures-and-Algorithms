#include <bits/stdc++.h>
using namespace std;
#define MAX 10

char st[MAX];
int top = -1;

void push(char ch) {
    if (top == MAX - 1)
        cout << "Stack Overflow.\n";
    else {
        top++;
        st[top] = ch;
    }
}

char pop()
{
    if(top==-1)
        cout<<"Stack Underflow \n";
    else
        return st[top--];
    return '0';
}


int main() {
    string str;
    int temp, flag = 1;
    cin >> str;
    int l = str.size();
    for (int i = 0; i < l; i++) {
        if (str[i] == '{' || str[i] == '[' || str[i] == '(')
            push(str[i]);
        if (str[i] == '}' || str[i] == ']' || str[i] == ')')
            if (top == -1)
                flag = 0;
            else {
                temp = pop();
                if ((str[i] == '}' && (temp == '(' || temp == '[')) ||
                    (str[i] == ']' && (temp == '{' || temp == '(')) ||
                    (str[i] == ')' && (temp == '[' || temp == '{')))
                    flag = 0;
            }
    }
    if (top >= 0)
        flag = 0;
    if (flag == 1)
        cout << "Valid Expression" << endl;
    else
        cout << "Invalid Expression" << endl;
    return 0;
}
