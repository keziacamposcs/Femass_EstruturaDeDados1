@echo Compilando Projeto...

@echo 1) Remover arquivos objs e exe
del *.o *.exe

@echo 2) Compilando cpps para objs
g++ -c *.cpp

@echo 3) Ligar objs para exe
g++ *.o -o Projeto.exe
 
