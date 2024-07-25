# Atividade-Ordenacao
 Algoritmos de Ordenação

insertion.exe

Uso: insertion.exe [nome do arquivo]
Saída: Imprime o tempo de execução do Insertion Sort para o console. Exemplo:
./insertion.exe num.1000.1.in
0.00088

selection.exe

Uso: selection.exe [nome do arquivo]
Saída: Imprime o tempo de execução do Selection Sort para o console. Exemplo:
./selection.exe num.1000.1.in
0.00132

ordenacoes.exe

Uso: ordenacoes.exe [nome do arquivo]
Saída: Imprime o tempo de execução de ambos os algoritmos para o console, permitindo a comparação. Exemplo:
./ordenacoes.exe num.1000.1.in

Insertion x Selection
0.00070     0.00168

main.exe

Uso: main.exe
Saída: Imprime uma tabela no console com os tempos de execução de todos os casos de teste, comparando os tempos de ambos os algoritmos. Exemplo:
./main.exe

Insertion x Selection
num.1000.1.in: 0.00094     0.00124

num.1000.2.in: 0.00065     0.00155
num.1000.3.in: 0.00064     0.00123

num.1000.4.in: 0.00064     0.00141

num.10000.1.in: 0.09160     0.15639

num.10000.2.in: 0.08055     0.12119

num.10000.3.in: 0.07112     0.12049

num.10000.4.in: 0.07541     0.12927

num.100000.1.in: 9.66665     14.20567

num.100000.2.in: 8.88193     14.63092

num.100000.3.in: 8.41695     15.07896

num.100000.4.in: 7.92914     14.69483

COMO COMPILAR
Para compilar os programas, use o make com o Makefile fornecido. Execute o comando a seguir no terminal no diretório onde o Makefile está localizado:
make
Isso irá gerar os executáveis insertion.exe, selection.exe, ordenacoes.exe e main.exe.

COMO EXECUTAR:
Para executar cada programa, utilize a linha de comando conforme descrito:

insertion.exe:
./insertion.exe [nome do arquivo]
selection.exe:
./selection.exe [nome do arquivo]
ordenacoes.exe:
./ordenacoes.exe [nome do arquivo]
main.exe:
./main.exe
