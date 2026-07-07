# Teste do LED RGB – ESP-2432S028

Este projeto realiza um teste básico de funcionamento do LED RGB integrado à placa **ESP-2432S028**, utilizando o framework **ESP-IDF**.

## Objetivo

O objetivo deste teste é validar o funcionamento dos três canais do LED RGB da placa, acionando sequencialmente as cores:

* 🔴 Vermelho
* 🟢 Verde
* 🔵 Azul

Este projeto faz parte do processo de aprendizado e validação inicial de hardware, seguindo boas práticas de desenvolvimento de sistemas embarcados com o ESP-IDF.

## Hardware Utilizado

* Placa ESP-2432S028
* Cabo USB para alimentação e gravação
* Ambiente de desenvolvimento ESP-IDF configurado

## Compilação e Gravação

Defina o alvo da placa:

```bash
idf.py set-target esp32
```

Compile, grave e monitore a execução:

```bash
idf.py -p PORT flash monitor
```

Substitua `PORT` pela porta serial correspondente à sua placa.

## Funcionamento Esperado

Após a gravação do firmware, o LED RGB integrado executará continuamente a seguinte sequência:

1. Vermelho
2. Verde
3. Azul

O monitor serial exibirá mensagens indicando qual cor está sendo acionada.

Exemplo de saída:

```text
I (315) rgb_test: Iniciando teste do LED RGB
I (1315) rgb_test: LED VERMELHO LIGADO
I (2315) rgb_test: LED VERDE LIGADO
I (3315) rgb_test: LED AZUL LIGADO
```

## Finalidade

Este projeto representa uma etapa inicial de validação da plataforma ESP-2432S028, servindo como base para o desenvolvimento de aplicações embarcadas mais avançadas e futuros experimentos relacionados à segurança e cibersegurança em dispositivos embarcados.
