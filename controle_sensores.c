#include <stdio.h>

#define SENSOR_TEMPERATURA 0b00000001 // Bit 0
#define SENSOR_UMIDADE 0b00000010    // Bit 1
#define SENSOR_PRESSAO 0b00000100    // Bit 2
#define SENSOR_LUMINOSIDADE 0b00001000 // Bit 3
#define SENSOR_MOVIMENTO 0b00010000  // Bit 4

unsigned char SENSOR_REG = 0x00;

inline void ligar_sensor(unsigned char *sensor_reg, unsigned char sensor) {
    *sensor_reg |= sensor;
}

inline void desligar_sensor(unsigned char *sensor_reg, unsigned char sensor) {
    *sensor_reg &= ~sensor;
}

inline int verificar_sensor(unsigned char sensor_reg, unsigned char sensor) {
    return (sensor_reg & sensor) ? 1 : 0;
}

int main() {
    ligar_sensor(&SENSOR_REG, SENSOR_TEMPERATURA);
    ligar_sensor(&SENSOR_REG, SENSOR_MOVIMENTO);
    printf("Sensor de Temperatura e Movimento ligados: 0x%02X\n", SENSOR_REG);

    desligar_sensor(&SENSOR_REG, SENSOR_TEMPERATURA);
    printf("Sensor de Temperatura desligado: 0x%02X\n", SENSOR_REG);

    if (verificar_sensor(SENSOR_REG, SENSOR_PRESSAO)) {
        printf("Sensor de Pressao está ligado\n");
    } else {
        printf("Sensor de Pressao está desligado\n");
    }

    return 0;
}
