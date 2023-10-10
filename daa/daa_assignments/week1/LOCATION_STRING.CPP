#include <iostream>
using namespace std;
int compareStr(string s1, string s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    if (s1[i] > s2[i])
        return -1;
    return (s1[i] < s2[i]);
}
int searchStr(string s[], string str, int first, int last)
{
    if (first > last)
        return -1;
    int mid = (first + last) / 2;
    if (s[mid].empty())
    {
        int left = mid - 1;
        int right = mid + 1;
        while (true)
        {
            if (left < right && right > last)
                return -1;
            if (right <= last && !s[right].empty())
            {
                mid = right;
                break;
            }
            if (left >= first && !s[left].empty())
            {
                mid = left;
                break;
            }
            right++;
            left--;
        }
    }
    if (compareStr(str, s[mid]) == 0)
        return mid;
    else if (compareStr(str, s[mid]) < 0)
        return searchStr(s, str, mid + 1, last);
    return searchStr(s, str, first, mid - 1);
}
int main()
{
    string s[] = {"at", "", "", "ball", "", "", "car", "",
                  "", "dad", "", ""};
    string str = "ball";
    int n = sizeof(s) / sizeof(s[0]);
    cout << "string to find: " << str << endl;
    if (searchStr(s, str, 0, n - 1) == -1)
        cout << "given string is not present.";
    else
        cout << "given string is present at index: " << searchStr(s, str, 0, n - 1);
    return 0;
}
