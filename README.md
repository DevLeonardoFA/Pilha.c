# Pilha.c
Projeto pilha

![Screenshot](pilha.png)

*Feito na aula de estrutura de dados da Fatec Americana

25/10/2019:<br>
 - Criação do Doc.c
 - Criação da Função PUSH (Insert)
 - Criação da Função TOP  (View)
 - Criação da função POP  (Delete)
 - *extra* View All

Bugs:
 * se cadastrar um nome com espaços (nomes compostos) o sistema vai cadastrar o numero de vezes que o nome se divide, por exemplo:
  
  - Código: 123
  - Nome: Leonardo Fernandes Alonso
  
  resultado:
  <table>
   <tr>
    <td>código</td>
    <td>nome</td>
   </tr>
   <tr>
    <td>123</td>
    <td>Leonardo</td>
   </tr>
   <tr>
    <td>random</td>
    <td>Fernandes</td>
   </tr>
 <tr>
    <td>random</td>
    <td>Alonso</td>
   </tr>
  </table>
