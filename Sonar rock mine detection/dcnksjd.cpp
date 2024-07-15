int c = 0;
int start = 1000;
int comma = 1;

int n = input1;
while (start <= n)
{
    int end = start * 1000 - 1;
    if (end > n)
        end = n;
    int nc = end - start + 1;
    c += nc * comma;

    start *= 1000;
    comma++;
}

return c;

string str = input1;
int n = str.size();

for (int i = 0; i < n; i++)
{
    string a = str.substr(0, i);
    string b = str.substr(i);

    string c = b;

    for (int j = 0; j < c.size(); j++)
    {
        if (c[j] == 'i')
        {
            c.erase(j, 1);
            j--;
        }
    }
    if (c == a)
    {
        return b;
    }
}

return "notpossible";