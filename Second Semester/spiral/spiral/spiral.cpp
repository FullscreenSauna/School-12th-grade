#include <iostream>

using namespace std;

void generateSpiral(int n)
{
    int x = 0;
    int y = 0;

    // offset progression is: 1 -> -2 -> 3 -> -4 -> 5.....
    int horizontalOffset = 1;
    int verticalOffset = 1;

    if (n == 0)
    {
        cout << "(0, 0)" << endl;
    }
    else
    {
        //resets for the offset so we can control the direction
        int horizontalOffsetReset = abs(horizontalOffset);
        int verticalOffsetReset = abs(verticalOffset);

        for (int i = 1; i <= n; i++)
        {
            //if both the offset resets are at 0 reset them with new values (reset the reset)
            //also update the offset to the next step of the progression
            if (i > 1 && horizontalOffsetReset == 0 && verticalOffsetReset == 0)
            {
                if (horizontalOffset > 0)
                {
                    horizontalOffset = (horizontalOffset + 1) * -1;
                }
                else
                {
                    horizontalOffset = (horizontalOffset - 1) * -1;
                }

                horizontalOffsetReset = abs(horizontalOffset);

                if (verticalOffset > 0)
                {
                    verticalOffset = (verticalOffset + 1) * -1;
                }
                else
                {
                    verticalOffset = (verticalOffset - 1) * -1;
                }

                verticalOffsetReset = abs(verticalOffset);
            }

            if (horizontalOffsetReset != 0)
            {
                //determine the direction of the horizontal change
                if (horizontalOffset > 0)
                {
                    x++;

                }
                else
                {
                    x--;
                }

                horizontalOffsetReset--;
            }
            else
            {
                //determine the direction of the vertical change
                if (verticalOffset > 0)
                {
                    y++;

                }
                else
                {
                    y--;
                }

                verticalOffsetReset--;
            }
        }
    }

    cout << x << ":" << y;
}

int main()
{
    cout << "Enter n:";

    int n;

    cin >> n;

    generateSpiral(n);
}

