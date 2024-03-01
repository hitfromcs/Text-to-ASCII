//Text to ASCII

#include <iostream>
#include<string>
using namespace std;

int main()
{
    int i;
    char temp;
    string text;

    cout << "Enter your text: ";
    getline(cin, text);

    char ch[100];

    cout << "\nCiphered code: ";

    for (i = 0; i < sizeof(ch); i++)
    {
      ch[i] = text[i];

      if(ch[i]==0)
      {
        i = sizeof(ch);
      }
      else
      {
        temp = ch[i];
        if(temp<100)
        {
          cout << "0" << int(temp) << " ";
        }
        else
        {
          cout << int(temp) << " ";
        }
      }
    }

    return 0;
}