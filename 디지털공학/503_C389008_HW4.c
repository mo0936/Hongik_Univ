#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* generateCRC(const char data[], const char generator[]);

char* generateCRC(const char data[], const char generator[]) {
    int dataLen = strlen(data);
    int generatorLen = strlen(generator);
    char* newData = (char*)malloc((dataLen + generatorLen) * sizeof(char)); 

    // 데이터 복사
    strcpy(newData, data);

    // 다항식 차수
    for (int i = 0; i < generatorLen - 1; i++) {
        newData[dataLen + i] = '0';
    }
    newData[dataLen + generatorLen - 1] = '\0';

    // CRC 계산
    for (int i = 0; i < dataLen; i++) {
        if (newData[i] == '1') {
            for (int j = 0; j < generatorLen; j++) {
                newData[i + j] = (newData[i + j] == generator[j]) ? '0' : '1'; // XOR 연산
            }
        }
    }

    
    char* crc = (char*)malloc(generatorLen * sizeof(char));
    strcpy(crc, &newData[dataLen]);

    
    free(newData);

    return crc;
}

int main() {
    char generator[5];
    char data[11];
    char* crc;

    printf("Please, type 4-bit generation code: ");
    scanf("%s", generator);
    printf("Please, type 10-bit Data: ");
    scanf("%s", data);

    crc = generateCRC(data, generator);

    printf("The data with CRC is %s%s\n", data, crc);

    free(crc);
    return 0;
}

