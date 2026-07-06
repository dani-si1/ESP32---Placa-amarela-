# Teste de Conectividade Bluetooth BLE – ESP-2432S028

Este projeto realiza um teste básico de conectividade **Bluetooth Low Energy (BLE)** da placa **ESP-2432S028**, utilizando o framework **ESP-IDF** e a stack **Bluedroid**.

## Objetivo

O objetivo deste teste é validar o funcionamento do módulo Bluetooth da placa, configurando a ESP-2432S028 como um dispositivo BLE anunciável e conectável.

Durante a execução, o dispositivo:

* Inicializa o controlador Bluetooth e a stack Bluedroid;
* Inicia o anúncio (advertising) BLE;
* Permite conexões de dispositivos externos;
* Captura eventos de conexão e desconexão;
* Atualiza e monitora os parâmetros de conexão.

Este projeto faz parte do processo de aprendizado, validação inicial de hardware e aplicação de boas práticas de desenvolvimento de sistemas embarcados utilizando o ambiente oficial da Espressif.

## Configuração

Antes de compilar o projeto, configure o alvo correspondente:

```bash
idf.py set-target esp32
```

Caso necessário, abra o menu de configuração:

```bash
idf.py menuconfig
```

Configure os parâmetros BLE de acordo com a sua aplicação.

## Compilação e Gravação

Compile, grave o firmware e abra o monitor serial:

```bash
idf.py -p PORT flash monitor
```

Substitua `PORT` pela porta serial correspondente à sua placa.

Para sair do monitor serial, pressione:

```text
Ctrl-]
```

## Funcionamento Esperado

Após a gravação do firmware, a ESP-2432S028 iniciará o anúncio BLE (advertising), tornando-se visível para aplicativos de escaneamento Bluetooth.

Ao estabelecer uma conexão, o monitor serial exibirá informações sobre:

1. Inicialização do BLE;
2. Início do advertising;
3. Conexão do dispositivo remoto;
4. Atualização dos parâmetros de conexão;
5. Desconexão e reinício do advertising.

Exemplo de saída:

```text
I (315) BLE_TEST: Inicializando Bluetooth BLE
I (820) BLE_TEST: Advertising iniciado
I (10457) BLE_TEST: Dispositivo conectado
I (10467) BLE_TEST: Atualizando parâmetros de conexão
I (20543) BLE_TEST: Dispositivo desconectado
I (20545) BLE_TEST: Reiniciando advertising
```

## Ferramentas de Teste

Para validar a conectividade BLE, podem ser utilizados aplicativos como:

* nRF Connect
* LightBlue
* BLE Scanner

Esses aplicativos permitem visualizar o dispositivo, estabelecer conexões e monitorar os parâmetros BLE.
