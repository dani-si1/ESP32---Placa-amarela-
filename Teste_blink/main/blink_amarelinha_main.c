#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

// esse é um projeto para testar todos os elesmento da placa amarela, é muioto bom tewstar tudo antes de usar antes d um projeto final, para evitar problemas futuros, e para isso é bom ter um projeto de teste, que testa todos os elementos da placa amarela, como o led, LCD, o WI-FT, o Bluetooh.  
#define BLINK_GPIO_RED 4
#define BLINK_GPIO_BLUE 17
#define BLINK_GPIO_GREEN 16



void app_main(void)
{
    // Configure the GPIO pin
    gpio_reset_pin(BLINK_GPIO_RED);
    gpio_set_direction(BLINK_GPIO_RED, GPIO_MODE_OUTPUT);

    gpio_reset_pin(BLINK_GPIO_BLUE);
    gpio_set_direction(BLINK_GPIO_BLUE, GPIO_MODE_OUTPUT);

    gpio_reset_pin(BLINK_GPIO_GREEN);
    gpio_set_direction(BLINK_GPIO_GREEN, GPIO_MODE_OUTPUT);


    // Blink loop
    while (1) {
        // LED VERMELHO ON
        printf("LED ON RED\n");
               
        gpio_set_level( BLINK_GPIO_RED, 0);
        gpio_set_level(BLINK_GPIO_BLUE, 1);
        gpio_set_level(BLINK_GPIO_GREEN,1);
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Delay 1 second

        // LED VERDE ON
        printf("LED ON GREEN\n");
        gpio_set_level( BLINK_GPIO_RED, 1);
        gpio_set_level(BLINK_GPIO_BLUE, 1);
        gpio_set_level(BLINK_GPIO_GREEN,0);
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Delay 1 second

        // LED AZUL ON
        printf("LED ON BLUE\n");
        gpio_set_level( BLINK_GPIO_RED, 1);
        gpio_set_level(BLINK_GPIO_BLUE, 0);
        gpio_set_level(BLINK_GPIO_GREEN, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Delay 1 second

    }
}