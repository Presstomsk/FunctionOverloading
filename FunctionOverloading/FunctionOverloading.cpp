
#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 10;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void FillRand(char arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);
void Print(char arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);
void Sort(double arr[ROWS][COLS], const int m, const int n);
void Sort(char arr[ROWS][COLS], const int m, const int n);

int Sum(int arr[],const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);
double Sum(double arr[ROWS][COLS], const int m, const int n);
int Sum(char arr[ROWS][COLS], const int m, const int n);

double Avg(int arr[],const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);
double Avg(char arr[ROWS][COLS], const int m, const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(char arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int m, const int n);
double minValueIn(double arr[ROWS][COLS], const int m, const int n);
int minValueIn(char arr[ROWS][COLS], const int m, const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(char arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int m, const int n);
double maxValueIn(double arr[ROWS][COLS], const int m, const int n);
int maxValueIn(char arr[ROWS][COLS], const int m, const int n);


void main()
{
    setlocale(LC_ALL,"");
    /*Одномерный массив типа int*/
    const int n= 10;
    int arr[n];
    
    FillRand(arr,n);
    Print(arr, n);
    cout << endl;
    Sort(arr,n);
    Print(arr,n);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(arr, n) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(arr, n) << endl;
    cout << endl;
    /*Одномерный массив типа double*/
    double arr_double[n];
    FillRand(arr_double, n);
    Print(arr_double, n);
    cout << endl;
    Sort(arr_double, n);
    Print(arr_double, n);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(arr_double, n) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(arr_double, n) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(arr_double, n) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(arr_double, n) << endl;
    cout << endl;
    /*Одномерный массив типа char*/
  
    char arr_char[n];
    FillRand(arr_char, n);
    Print(arr_char, n);
    cout << endl;
    Sort(arr_char, n);
    Print(arr_char, n);
    cout << endl;
    cout << "Сумма ASCII-кодов элементов массива: " << Sum(arr_char, n) << endl;
    cout << "Среднее арифметическое ASCII-кодов элементов массива: " << Avg(arr_char, n) << endl;
    cout << "Минимальный ASCII-код элемента массива: " << minValueIn(arr_char, n) << endl;
    cout << "Максимальный ASCII-код элемента массива: " << maxValueIn(arr_char, n) << endl;
    cout << endl;

    /*Двумерный массив типа int*/
    int int_arr_2[ROWS][COLS];
    FillRand(int_arr_2, ROWS, COLS);
    Print(int_arr_2, ROWS, COLS);
    Sort(int_arr_2, ROWS, COLS);
    Print(int_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(int_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(int_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(int_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(int_arr_2, ROWS, COLS) << endl;
    cout << endl;

    /*Двумерный массив типа double*/
    double double_arr_2[ROWS][COLS];
    FillRand(double_arr_2, ROWS, COLS);
    Print(double_arr_2, ROWS, COLS);
    Sort(double_arr_2, ROWS, COLS);
    Print(double_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(double_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(double_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(double_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(double_arr_2, ROWS, COLS) << endl;
    cout << endl;

    /*Двумерный массив типа char*/
    char char_arr_2[ROWS][COLS];
    FillRand(char_arr_2, ROWS, COLS);
    Print(char_arr_2, ROWS, COLS);
    Sort(char_arr_2, ROWS, COLS);
    Print(char_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма ASCII-кодов элементов массива: " << Sum(char_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое ASCII-кодов элементов массива: " << Avg(char_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный ASCII-код элемента массива: " << minValueIn(char_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный ASCII-код элемента массива: " << maxValueIn(char_arr_2, ROWS, COLS) << endl;
    cout << endl;
}

void FillRand(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 50;
    }
}
void FillRand(double arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 50;
        arr[i] /= 10;
    }
}
void FillRand(char arr[], const int n)
{
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%127;
        

        
    }
}
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 50;
        }
    }

}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 50;
            arr[i][j] /= 10;
        }
    }
}
void FillRand(char arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 127;
        }
    }
}
void Print(int arr[], const int n)
{
   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void Print(double arr[], const int n)
{
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void Print(char arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (int)arr[i]<<"\t" ;
    }
    cout << endl;
}
void Print(int arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
void Print(double arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
void Print(char arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void Sort(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
}

void Sort(double arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                double buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
}

void Sort(char arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                char buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
}
void Sort(int arr[ROWS][COLS], const int m, const int n)
{
    for (int c = 0; c <= (m * n); c++)
    {
       for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < (n - 1); j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    int buffer = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = buffer;
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (m - 1); j++)
            {
                if (arr[j][i] > arr[j][i + 1])
                {
                    int buffer = arr[j][i];
                    arr[j][i] = arr[j][i + 1];
                    arr[j][i + 1] = buffer;
                }
            }
        }
    }

}
void Sort(double arr[ROWS][COLS], const int m, const int n)
{
    for (int c = 0; c <= (m * n); c++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < (n - 1); j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    double buffer = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = buffer;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (m - 1); j++)
            {
                if (arr[j][i] > arr[j][i + 1])
                {
                    double buffer = arr[j][i];
                    arr[j][i] = arr[j][i + 1];
                    arr[j][i + 1] = buffer;
                }
            }
        }
    }

}
void Sort(char arr[ROWS][COLS], const int m, const int n)
{
    for (int c = 0; c <= (m * n); c++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < (n - 1); j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    char buffer = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = buffer;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (m - 1); j++)
            {
                if (arr[j][i] > arr[j][i + 1])
                {
                    char buffer = arr[j][i];
                    arr[j][i] = arr[j][i + 1];
                    arr[j][i + 1] = buffer;
                }
            }
        }
    }
}
int Sum(int arr[], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double Sum(double arr[], const int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int Sum(char arr[], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int Sum(int arr[ROWS][COLS], const int m, const int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum;
}
double Sum(double arr[ROWS][COLS], const int m, const int n)
{
    double sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
int Sum(char arr[ROWS][COLS], const int m, const int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

double Avg(int arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
    return Sum(arr, n) / n;
}

double Avg(char arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int m, const int n)
{
    return (double)Sum(arr, m, n) / (m * n);
}
double Avg(double arr[ROWS][COLS], const int m, const int n)
{
    return Sum(arr, m, n) / (m * n);
}
double Avg(char arr[ROWS][COLS], const int m, const int n)
{
    return (double)Sum(arr, m, n) / (m * n);
}

int minValueIn(int arr[], const int n)
{
    Sort(arr, n);
    return arr[0];
}

double minValueIn(double arr[], const int n)
{
    Sort(arr, n);
    return arr[0];
}

int minValueIn(char arr[], const int n)
{
    Sort(arr, n);
    return arr[0];
}
int minValueIn(int arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[0][0];

}
double minValueIn(double arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[0][0];

}
int minValueIn(char arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[0][0];
}

int maxValueIn(int arr[], const int n)
{
    Sort(arr, n);
    return arr[n-1];
}

double maxValueIn(double arr[], const int n)
{
    Sort(arr, n);
    return arr[n - 1];
}

int maxValueIn(char arr[], const int n)
{
    Sort(arr, n);
    return arr[n - 1];
}
int maxValueIn(int arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[m-1][n-1];

}
double maxValueIn(double arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[m - 1][n - 1];

}
int maxValueIn(char arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[m - 1][n - 1];
}

