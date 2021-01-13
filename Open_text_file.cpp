#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    /*
    FILE *fptr;
    char line[100];

    // open file
    fptr = fopen("a.txt", "r");

    // check if exist
    if (fptr == NULL)
    {
        cout << "ERROR, NO SUCH FILE IN DIRECTORY";
        exit(1);
    }

    // process
    while (EOF != fscanf(fptr, "%[^\n]\n", line))   // EOF: END OF FILE
    {
        cout << line;
    }
    fclose(fptr);
    */

   /*
   // convert string to integer
   char int_value_string[] = "50";
   int int_value = atoi(int_value_string);
   cout << int_value << endl;

   // convert string to float
   char float_value_string[] = "4.5";
   float float_value;

   // sscanf(const char* buffer, const char* format, argument, …) dùng để đọc dữ liệu từ một chuỗi có thể xác định được định dạng của nó rồi truyền vào các đối số cần thiết
   sscanf(float_value_string, "%f", &float_value);
   cout << float_value;
   */
    FILE *fptr;
    char line[100];

    // open file
    fptr = fopen("a.txt", "r");

    // check if exist
    if (fptr == NULL)
    {
        cout << "ERROR, NO SUCH FILE IN DIRECTORY";
        exit(1);
    }
    
    // ignore the first line
    fscanf(fptr, "%[^\n]\n", line);

    // process
    float area, price;
    while (EOF != fscanf(fptr, "%[^\n]\n", line))
    {
        char *area_str = strtok(line, ",");
        char *price_str = strtok(NULL, ",");

        sscanf(area_str, "%f", &area);
        sscanf(price_str, "%f", &price);

        cout << "area" << "price" << area << price << endl;
    }
    fclose(fptr);
}