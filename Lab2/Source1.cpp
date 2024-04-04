#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define N 5

using namespace std;

float findMin(float m[N][N]) {
    float min = m[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (m[i][j] < min) {
                min = m[i][j];
            }
        }
    }
    return min;
}

float findMax(float m[N][N]) {
    float max = m[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (m[i][j] > max) {
                max = m[i][j];
            }
        }
    }
    return max;
}

float findMaxLowerTriangle(float m[N][N]) {
    float max = m[N - 1][0]; 
    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j >= N - i - 1; j--) {
            if (m[i][j] > max) {
                max = m[i][j];
            }
        }
    }
    return max;
}

float findMaxUpperTriangle(float m[N][N]) {
    float max = m[0][1]; 
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (m[i][j] > max) {
                max = m[i][j];
            }
        }
    }
    return max;
}

float findMinLowerTriangle(float m[N][N]) {
    float min = m[N - 1][0]; 
    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j >= N - i - 1; j--) {
            if (m[i][j] < min) {
                min = m[i][j];
            }
        }
    }
    return min;
}

float findMinUpperTriangle(float m[N][N]) {
    float min = m[0][1]; 
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (m[i][j] < min) {
                min = m[i][j];
            }
        }
    }
    return min;
}

float findMinMainDiagonal(float m[N][N]) {
    float min = m[0][0];
    for (int i = 1; i < N; i++) {
        if (m[i][i] < min) {
            min = m[i][i];
        }
    }
    return min;
}

float findMaxMainDiagonal(float m[N][N]) {
    float max = m[0][0];
    for (int i = 1; i < N; i++) {
        if (m[i][i] > max) {
            max = m[i][i];
        }
    }
    return max;
}

float findMinSecondaryDiagonal(float m[N][N]) {
    float min = m[0][N - 1];
    for (int i = 1; i < N; i++) {
        if (m[i][N - 1 - i] < min) {
            min = m[i][N - 1 - i];
        }
    }
    return min;
}

float findMaxSecondaryDiagonal(float m[N][N]) {
    float max = m[0][N - 1];
    for (int i = 1; i < N; i++) {
        if (m[i][N - 1 - i] > max) {
            max = m[i][N - 1 - i];
        }
    }
    return max;
}

float findAverage(float m[N][N]) {
    float sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum += m[i][j];
        }
    }
    return sum / (N * N);
}

float findAverageLowerTriangle(float m[N][N]) {
    float sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            sum += m[i][j];
            count++;
        }
    }
    return sum / count;
}

float findAverageUpperTriangle(float m[N][N]) {
    float sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            sum += m[i][j];
            count++;
        }
    }
    return sum / count;
}

void findRowSums(float m[N][N], float rowSums[N]) {
    for (int i = 0; i < N; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < N; j++) {
            rowSums[i] += m[i][j];
        }
    }
}

void findColumnSums(float m[N][N], float columnSums[N]) {
    for (int j = 0; j < N; j++) {
        columnSums[j] = 0;
        for (int i = 0; i < N; i++) {
            columnSums[j] += m[i][j];
        }
    }
}

void findRowMin(float m[N][N], float rowMin[N]) {
    for (int i = 0; i < N; i++) {
        rowMin[i] = m[i][0];
        for (int j = 1; j < N; j++) {
            if (m[i][j] < rowMin[i]) {
                rowMin[i] = m[i][j];
            }
        }
    }
}

void findColumnMin(float m[N][N], float columnMin[N]) {
    for (int j = 0; j < N; j++) {
        columnMin[j] = m[0][j];
        for (int i = 1; i < N; i++) {
            if (m[i][j] < columnMin[j]) {
                columnMin[j] = m[i][j];
            }
        }
    }
}

void findRowMax(float m[N][N], float rowMax[N]) {
    for (int i = 0; i < N; i++) {
        rowMax[i] = m[i][0];
        for (int j = 1; j < N; j++) {
            if (m[i][j] > rowMax[i]) {
                rowMax[i] = m[i][j];
            }
        }
    }
}

void findColumnMax(float m[N][N], float columnMax[N]) {
    for (int j = 0; j < N; j++) {
        columnMax[j] = m[0][j];
        for (int i = 1; i < N; i++) {
            if (m[i][j] > columnMax[j]) {
                columnMax[j] = m[i][j];
            }
        }
    }
}

void findTriangleSums(float m[N][N], float& lowerTriangleSum, float& upperTriangleSum) {
    lowerTriangleSum = 0;
    upperTriangleSum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i >= j) {
                lowerTriangleSum += m[i][j];
            }
            if (i <= j) {
                upperTriangleSum += m[i][j];
            }
        }
    }
}

float findClosestToAverage(float m[N][N]) {

    float avg = findAverage(m);
    float closest = m[0][0];
    float minDiff = abs(m[0][0] - avg);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            float diff = abs(m[i][j] - avg);
            if (diff < minDiff) {
                closest = m[i][j];
                minDiff = diff;
            }
        }
    }
    return closest;
}


void main() {

    float m[N][N];

    float rowSums[N], columnSums[N];
    float rowMin[N], columnMin[N];
    float rowMax[N], columnMax[N];
    float lowerTriangleSum, upperTriangleSum;
    float findMin(float m[N][N]);
    float findMax(float m[N][N]);
    float findMaxLowerTriangle(float m[N][N]);
    float findMaxUpperTriangle(float m[N][N]);
    float findMinLowerTriangle(float m[N][N]);
    float findMinUpperTriangle(float m[N][N]);
    float findMinMainDiagonal(float m[N][N]);
    float findMaxMainDiagonal(float m[N][N]);
    float findMinSecondaryDiagonal(float m[N][N]);
    float findMaxSecondaryDiagonal(float m[N][N]);
    float findAverage(float m[N][N]);
    float findAverageLowerTriangle(float m[N][N]);
    float findAverageUpperTriangle(float m[N][N]);

    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            m[i][j] = rand() / 10.f;
        }
    }

    cout << "m = ";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(8) << setprecision(5) << m[i][j];
        }
        cout << endl;
    }

    cout << "findMin = " << findMin(m) << endl;
    cout << "findMax = " << findMax(m) << endl;

    cout << "findMaxLowerTriangle = " << findMaxLowerTriangle(m) << endl;
    cout << "findMinLowerTriangle = " << findMinLowerTriangle(m) << endl;

    cout << "findMaxUpperTriangle = " << findMaxUpperTriangle(m) << endl;
    cout << "findMinUpperTriangle = " << findMinUpperTriangle(m) << endl;

    cout << "findMinMainDiagonal = " << findMinMainDiagonal(m) << endl;
    cout << "findMaxMainDiagonal = " << findMaxMainDiagonal(m) << endl;

    cout << "findMinSecondaryDiagonal = " << findMinSecondaryDiagonal(m) << endl;

    cout << "findMaxSecondaryDiagonal = " << findMaxSecondaryDiagonal(m) << endl;

    cout << "findAverage = " << findAverage(m) << endl;
    cout << "findAverageLowerTriangle = " << findAverageLowerTriangle(m) << endl;
    cout << "findAverageUpperTriangle = " << findAverageUpperTriangle(m) << endl;

    findRowSums(m, rowSums);
    findColumnSums(m, columnSums);

    cout << "rowSums = ";
    for (int i = 0; i < N; i++) {
        cout << rowSums[i] << " ";
    }
    cout << endl;
    cout << "columnSums = ";
    for (int j = 0; j < N; j++) {
        cout << columnSums[j] << " ";
    }
    cout << endl;

    findRowMin(m, rowMin);
    findColumnMin(m, columnMin);
    findRowMax(m, rowMax);
    findColumnMax(m, columnMax);

    cout << "rowMin = ";
    for (int i = 0; i < N; i++) {
        cout << rowMin[i] << " ";
    }
    cout << endl;
    cout << "columnMin = ";
    for (int j = 0; j < N; j++) {
        cout << columnMin[j] << " ";
    }
    cout << endl;
    cout << "rowMax = ";
    for (int i = 0; i < N; i++) {
        cout << rowMax[i] << " ";
    }
    cout << endl;
    cout << "columnMax = ";
    for (int j = 0; j < N; j++) {
        cout << columnMax[j] << " ";
    }
    cout << endl;

    findTriangleSums(m, lowerTriangleSum, upperTriangleSum);
    cout << "lowerTriangleSum = " << lowerTriangleSum << endl;
    cout << "upperTriangleSum =" << upperTriangleSum << endl;

    float closestToAverage = findClosestToAverage(m);
    cout << "findClosestToAverage = " << closestToAverage << endl;

    int base;
    cout << "Press Enter to close this window";
    cin >> base;
}
