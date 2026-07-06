# Teste do Wi-Fi (SoftAP) – ESP-2432S028

Este projeto realiza um teste básico da funcionalidade **Wi-Fi SoftAP** da placa **ESP-2432S028**, utilizando o framework **ESP-IDF**.

## Objetivo

O objetivo deste teste é validar o funcionamento do módulo Wi-Fi da placa, configurando a ESP-2432S028 para operar como um **Ponto de Acesso (Access Point - AP)**.

Este projeto faz parte do processo de aprendizado, validação inicial de hardware e aplicação de boas práticas de desenvolvimento de sistemas embarcados utilizando o ambiente oficial da Espressif.

## Hardware Utilizado

* Placa **ESP-2432S028**
* Cabo USB para alimentação e gravação
* Ambiente de desenvolvimento **ESP-IDF** configurado
* Dispositivo com Wi-Fi (computador ou smartphone) para conexão ao ponto de acesso

## Configuração

No menu **Example Configuration**, configure:

* Nome da rede Wi-Fi (**SSID**);
* Senha da rede Wi-Fi (**Password**);
* Demais parâmetros conforme necessário.

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

Após a gravação do firmware, a ESP-2432S028 iniciará uma rede Wi-Fi no modo **SoftAP**, permitindo que outros dispositivos se conectem a ela.

O monitor serial exibirá mensagens indicando a inicialização do Wi-Fi e as conexões realizadas.

Exemplo de saída:

```text
I (917) wifi: mode : softAP
I (917) wifi softAP: wifi_init_softap finished. SSID:MeuESP32 password:minhasenha
I (26457) wifi: station: xx:xx:xx:xx:xx:xx join, AID=1
I (27657) esp_netif_lwip: DHCP server assigned IP to a station, IP is: 192.168.4.2
```

