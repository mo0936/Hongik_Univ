#include<stdio.h>

/*
    function name: calculateAvg(score[])
    function task:  This function will calculate the average of
        score in array.
    parameter: score[]
*/
float calculateAvg(int score[]) {
    //declare variable for allocating sum of scores.
    int totalScore = 0;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        totalScore += score[i];
        //totalScore = totalScore + score[1];
        count++;
    }
    //calculate avg
    float avg = totalScore / count;
    return avg;
}

float max(int score[]) {
    float max = score[0];
    for (int i = 0; i < 10; i++) {
        if (score[i] > max) {
            max = score[i];
        }
    }
    return max;
}

float min(int score[]) {
    float min = score[0];
    for (int i = 0; i < 10; i++) {
        if (score[i] < min) {
            min = score[i];
        }
    }
    return min;
}

int main() {
    // declare score array with scores.
    int score[10] = { 40, 35, 70, 65, 99, 42, 78, 85, 100, 5 };

    float resultAvg = calculateAvg(score);
    float resultMax = max(score);
    float resultMin = min(score);
    printf("평균: %f\n", resultAvg);
    printf("최대: %f\n", resultMax);
    printf("최소: %f\n", resultMin);
    return 0;
}