FONE : todos

todos : limpar documento principal 

main : main.c	
        gcc main.c -o main -std=c11 -W -Wall -pedantic 

tabela.tex : main	
              ./main $( BASE ) 

doc : tabela.tex	
        tectônica main.tex 

FONE : claro 

limpo :	
        rm -f tabela.tex main
