/*1. Дан двовимірний масив розмірністю 3×4. 
Необхідно знайти кількість елементів, значення яких дорівнює нулю.
2. Дана квадратна матриця порядку n (n рядків, n стовпців).
Знайти найбільше зі значень елементів, розташованих у темно-синіх частинах матриць.
* * * * *   *        * * * * *             * * * * *
  * * * *   * *        * * *                 * * *
    * * *   * * *        *         *           *
      * *   * * * *              * * *       * * *
        *   * * * * *          * * * * *   * * * * *
    a)          b)        c)       d)          e)

*       *   *             *    * * * * *           *
* *   * *   * *         * *    * * * *           * *
* * * * *   * * *     * * *    * * *           * * *
* *   * *   * *         * *    * *           * * * *
*       *   *             *    *           * * * * *
    f)        g)       i)        j)            k)
3. Усі масиви в цьому домашньому завданні заповнюються випадково.*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
    srand(time(NULL));

    int a;
    cout << "Oberite zadachy:\n"
        << "1. Dvovumirnuy masuv\n"
        << "2. Figyru\n";
    cin >> a;
    switch (a) {
    case 1: {
        /*1. Дан двовимірний масив розмірністю 3×4.
             Необхідно знайти кількість елементів, значення яких дорівнює нулю.*/
        const int row = 3;
        const int col = 4;
        int Arr[3][4];
        int n = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                Arr[i][j] = rand() % 5 - 3;
                cout << Arr[i][j] << ' ';
                if (Arr[i][j] == 0) {
                    n++;
                }
            }
            cout << endl;
        }
        cout << "\nKilkist elementiv dorivnye \"0\": " << n << endl;
    }
          break;
    case 2: {
        /*2. Дана квадратна матриця порядку n (n рядків, n стовпців).
             Знайти найбільше зі значень елементів, розташованих у темно-синіх частинах матриць.
             * * * * *   *        * * * * *             * * * * *
               * * * *   * *        * * *                 * * *
                 * * *   * * *        *         *           *
                   * *   * * * *              * * *       * * *
                     *   * * * * *          * * * * *   * * * * *
                 a)          b)        c)       d)          e)

             *       *   *             *    * * * * *           *
             * *   * *   * *         * *    * * * *           * *
             * * * * *   * * *     * * *    * * *           * * *
             * *   * *   * *         * *    * *           * * * *
             *       *   *             *    *           * * * * *
                 f)        g)       i)        j)            k)*/
        const int row = 8;
        const int col = 8;
        int Arr[row][col];
        char h = a;
        int A = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                Arr[i][j] = rand() % 10;
                cout << Arr[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
        while (h != 'q') {
            cout << "\nOberite figyry:\n"
                << "a. Verxnii pravui trukytnuk\n"
                << "b. Nuznii livui trukytnuk\n"
                << "c. Verhnii trukytnuk\n"
                << "d. Nuznii trukytnuk\n"
                << "e. Vertukalnui bant\n"
                << "f. Horizontalnui bant\n"
                << "g. Livui trukytnuk\n"
                << "i. Pravui trukytnuk\n"
                << "j. Verxnii livui trukytnuk\n"
                << "k. Nuznii pravui trukytnuk\n"
                << "q. Vuhid\n";
            cin >> h;
            switch (h) {
            case 'a': {
                /*   * * * * *
                       * * * *
                         * * *
                           * *
                             *
                         a)*/

                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if (i <= j && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'b': {
                /*    *
                      * *
                      * * *
                      * * * *
                      * * * * *
                        b) */
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if (i >= j && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'c': {
                /*  * * * * *
                      * * *
                        *


                       c)  */
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if ((i <= j && i + j <= row - 1) && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'd': {
                /*

                        *
                      * * *
                    * * * * *
                        d)  */
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if ((i >= j && i + j >= row - 1) && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'e': {
                /*   * * * * *
                       * * *
                         *
                       * * *
                     * * * * *
                         e)  */
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if ((i <= j && i + j <= row - 1) || (i >= j && i + j >= row - 1) && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'f': {
                /*  *       *
                    * *   * *
                    * * * * *
                    * *   * *
                    *       *
                        f)*/
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if ((i >= j && i + j <= row - 1) || (i <= j && i + j >= row - 1) && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'g': {
                /*  *
                    * *
                    * * *
                    * *
                    *
                      g)*/
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if ((i >= j && i + j <= row - 1) && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'i': {
                /*          *
                          * *
                        * * *
                          * *
                            *
                          i)*/
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if ((i <= j && i + j >= row - 1) && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'j': {
                /*  * * * * *
                    * * * *
                    * * *
                    * *
                    *
                     j)*/
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if (i + j <= row - 1 && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'k': {
                /*          *
                          * *
                        * * *
                      * * * *
                    * * * * *
                       k)*/
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        if (i >= j  && A < Arr[i][j]) {
                            A = Arr[i][j];
                        }
                        else {
                            continue;
                        }
                    }
                }
                cout << "\nNaibilse chislo v zoni figyru: " << A << endl;
            }
                    break;
            case 'q': {
                break;
            }
                    break;
            default:cout << "Ne virno obrana zadacha!";
            }

        }
    }
          break;
    default:cout << "Ne virno obrana zadacha!\n";
    }

}
