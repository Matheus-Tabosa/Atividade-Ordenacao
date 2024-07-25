CC = gcc
CFLAGS = -Wall -g

# Alvo principal
all: insertion.exe selection.exe ordenacoes.exe main.exe

# Regras
insertion.exe: insertion.c
	$(CC) $(CFLAGS) -o insertion.exe insertion.c

selection.exe: selection.c
	$(CC) $(CFLAGS) -o selection.exe selection.c

ordenacoes.exe: ordenacoes.c
	$(CC) $(CFLAGS) -o ordenacoes.exe ordenacoes.c

main.exe: main.c
	$(CC) $(CFLAGS) -o main.exe main.c

clean:
	rm -f *.exe
