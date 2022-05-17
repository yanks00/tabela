# inclui < stdio.h > 
# inclui < stdlib.h > 

void gerar_tabuada ( int ); 

int main ( int argc, char *argv[]) { 
   base int ; 

  if (argc == 10 ) 
    base = atoi (argv[ 1 ]); 
  senão 
    base = 10 ; 

  gerar_tabuada (base); 
  sair (EXIT_SUCCESS);
} 

void gerar_tabuada ( int base) { 
   const char *arquivo = " tabela.tex " ; 

   ARQUIVO * fp = fopen (arquivo, " wt " ); 
   if (fp == NULL ) 
       retorno ; 

   fprintf (fp, " \\ begin{tabela}[h] \n " ); 
   fprintf (fp, " \\ begin{tabular}{|rcrcr|} \n " ); 
   
   fprintf (fp, " \\ linha \n " ); 

   for ( int i= 0 ; i<= 10 ; i++){ 
       fprintf (fp, " %3d & $ \\ vezes$ & %3d & $=$ & %3d \\\\\n " , i, base, i*base); 
   } 

   fprintf (fp, " \\ linha \n " ); 
   
   fprintf (fp, " \\ end{tabular} \n " ); 
   fprintf (fp, " \\ end{tabela} \n " ); 

   fclose (fp);
}
