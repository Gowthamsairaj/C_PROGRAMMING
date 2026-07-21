#include <stdio.h>

struct Packet {
    int type;
    union {
        int sensorValue;
        float temperature;
        char status;
    } data;
};

int main() {
    struct Packet p;

    p.type = 1;
    p.data.sensorValue = 100;

    printf("Type: %d\n", p.type);
    printf("Sensor Value: %d\n", p.data.sensorValue);

    return 0;
}