# Teste do Display LCD e Touch – ESP-2432S028

Este projeto realiza um teste básico de funcionamento do **display LCD** e do **touchscreen** integrados à placa **ESP-2432S028**, utilizando o framework **ESP-IDF** e a biblioteca **LVGL**.

## Objetivo

O objetivo deste teste é validar o funcionamento do display SPI e do controlador touch da placa, verificando a comunicação entre os periféricos e a renderização de uma interface gráfica.

Durante a execução, a aplicação:

* Inicializa o display LCD;
* Inicializa a biblioteca LVGL;
* Exibe uma interface gráfica com animações;
* Permite a interação por toque (quando habilitada);
* Testa a comunicação entre o ESP32, o display e o touchscreen.

Este projeto faz parte do processo de aprendizado, validação inicial de hardware e aplicação de boas práticas de desenvolvimento de sistemas embarcados utilizando o ambiente oficial da Espressif.

## Hardware Utilizado

* Placa **ESP-2432S028**
* Display LCD SPI integrado
* Touchscreen integrado
* Cabo USB para alimentação e gravação
* Ambiente de desenvolvimento **ESP-IDF** configurado

## Configuração

Antes de compilar o projeto, configure o alvo correspondente:

```bash
idf.py set-target esp32
```

Caso necessário, abra o menu de configuração:

```bash
idf.py menuconfig
```

No menu **Example Configuration**, é possível:

* Habilitar ou desabilitar o touchscreen;
* Configurar parâmetros do display;
* Ajustar opções da interface gráfica.

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

Após a gravação do firmware:

* O display LCD será inicializado;
* A interface gráfica criada com **LVGL** será exibida;
* Uma animação será executada continuamente;
* Caso o touch esteja habilitado, será possível interagir com a interface utilizando a tela sensível ao toque.

Exemplo de saída:

```text
I (307) example: Inicializando barramento SPI
I (317) example: Inicializando display LCD
I (447) example: Ligando backlight
I (447) example: Inicializando biblioteca LVGL
I (467) example: Iniciando tarefa do LVGL
I (547) example: Interface gráfica iniciada
```
