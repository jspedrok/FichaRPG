#include <iostream>
using namespace std;
int main(){
   int personagem; 
   //Atributos iniciam abaixo//
   int pontos=20;
   int reducao=0;
   int forca=1; //Força//
   int des=1; //Destreza//
   int con=1; //Constituição//
   int intl=1; //Inteligência//
   int sab=1; //Sabedoria//
   int car=1; //Carisma//
   //Habilidades iniciam abaixo//
   int pontosB =40;
   int reducaoB = 0;
   int af=1; //Armas de Fogo//
   int ab=1; //Armas Brancas//
   int atl=1; //Atletismo//
   int fur=1; //Furtividade//
   int inf=1; //Infiltração//
   int lut=1; //Lutar//
   int med=1; //Medicina//
   int per=1; //Persuasão//
   int tec=1; //Tecnologia//
   int cond=1; //Condução//
   int eti=1; //Etiqueta//
   int idi=1; //Idiomas//
   //O implante cibernetico começa abaixo//
   int imp; //Nome do implante cibernetico//
   int loc; //Localização do implante no corpo//
   int funcao; //Função do Implante//
   int custo; //Custo do Implante//

   
    cout<<"Voce vive em um mundo cyberpunk,na cidade de Uberaba, em 2052, onde o consumismo eh o dono de tudo e de todos. O governo eh totalmente controlado por empresas ricas enquanto a maior parte do povo vive numa constante miseria\n
    Voce tem a opcao de escolher entre tres personagens para viver essa aventura."<<endl;
    cout<<"Escolha seu personagem:"<<endl;
    cout<<"1-Angelo Moriuchi, 2-: Maxine Alekseeva e 3-A Louca"<<endl;
    cin>>personagem;
    
    switch(personagem){
        case 1:
        cout<<"Nome: Angelo Moriuchi\n
       Apelido: Angel of the Night \n 
       Origem: Filho de pai brasileiro e mae japonesa, nasceu eu SP capital \n 
       Data de nascimento: Nasceu dia 13/07/2033 \n 
       Sexo:Masculino\n
       Classe Social:Pertence a uma classe social baixa, e luta diariamente para sobreviver\n
       Ocupacao: Rebelde e fugitivo \n
       Historia: Angelo teve uma infancia conturbada, seus pais foram mortos pelo governo quando ele ainda era crianca, por isso todo seu odio pelo sistema.\n
       Ele ajuda os mais necessitados roubando itens que sao necessarios para sobreviver e os distribui, como uma especie de Robin Hood futurista.\n
       Por a maioria de suas boas acoes serem realizadas a noite, ele ganhou o apelido de Angel of the Night\n
       Motivacao: Sua principal motivacao eh dar um fim a era do consumismo cyberpunk e estabelcer uma sociedade mais justa. Mesmo que nao consiga mudar o mundo, Angelo quer fazer o melhor possivel para garantir uma boa qualidade de vida a todos\n
       Aparencia: Angelo mede 1,85, possui cabelos avermelhados, eh de pele branca, possui um nariz fino e olhos grandes na cor castanha. Geralmente ele utiliza mascaras facias para esconder sua identidade, ja que ele eh um fugitivo do governo.";
    
        break;
        case 2:
        cout<<"
Nome: Maxine Alekseeva\n
Apelido: Max\n
Origem: Sao Petersburgo,Russia, filha de Alexei, um Russo refugiado, que ao chegar teve um caso com uma brasileira de familia rica.\n
Data de Nascimento:31/07/2040\n
Sexo: Feminino\n
Classe Social: Media, ela e o pai vivem com o dinheiro da pensao dada pela familia da mae.\n
Ocupacao: Saiu da escola para cuidar do pai.\n
Historia: Max eh uma crianca atentada que aprendeu todas as artimanhas que sabe com o pai, agora ela cuida dele apos o grupo ditador da regiao onde ela vive deixar ele acamado para dar uma licao por ir contra seus valores, ela nao ha contato com a familia por parte de mae, alem do dinheiro que ela recebe mensalmente.\n
Passa maior parte do tempo pregando pecas e indo contra as gangues que dominam a regiao aonde ela mora, mesmo que sempre saia machucada nesses confrontos, quanto mais ela cresce mais sua sede de vinganca aumenta, e mais hipocrita e igual aos lideres das gangues ela se torna. \n
Motivacao: Achar uma cura para o pai e fazer ele se sentir orgulhoso da filha.\n
Aparencia: Max mede 1,42cm, eh parda com cabelos uma mistura de ruivo com castanho, cortado curto estilo Pixie, usa roupas desleixadas e nao se preocupa com sua aparencia, muitas vezes eh confundida com um menino e ate tira proveito disso.\n
"<<endl;
        break;
        case 3:
        cout<<"
       Nome: Mary Josie\n
       Apelido: Chatinha\n 
       Origem: Foi abandonada em um orfanato no Rio Grande do Sul \n 
       Data de nascimento: 31/03/2024 \n 
       Sexo: Feminino\n
       Classe Social: Ela se tornou muito rica por causa de seua pais adotivos\n
       Ocupacao: Nao trabalha, por causa da quantidade absurda de dinheiro\n
       Historia: Ela eh uma mulher que ja cansou de sua vida, nao ver razao para viver, se envolveu nas drogas, nunca achou um parceiro para dividir seu sonho e quase nao teve nenhum amigo em sua vida por causa dos seguranças que seus pais pcontrataram,que no momento devem estar mortos, seus pais sempre tentaram controlar ela e o seu futuro, no momento do acontecimento eles nao estavam na cidade de Uberaba e nem conseguem voltar por causa do bloqueio que fizeram em todas as entradas possiveis.\n
       Porem neste momento ela se sente uma pessoa livre apesar do caos pela cidade.\n
       Motivacao: Seu objetivo e conseguir sobreviver sozinha, algo que ela nunca precisou, ter sua liberdade e tentar sonhar denovo!\n
       Aparencia: Bem alta, magra, com o cabelo curto, preto e com franja, suas roupas de grife sempre muito elegante, olhos castanhos e cor de pele branca.\n
       "<<endl;
        break;
        default:
        cout<<"voce e sem graca!"<<endl;
        break;
    }
    //Comeco da distribuiaoo dos atributos
    cout<<"Agora que voce ja escolheu seu personagem, voce escolhera seus atributos entre Forca, Destreza, Constituicao, Inteligencia, Sabedoria e Carisma\n
    Voce tera ate 20 pontos para gastar entre as habilidades escolhidas,com o limite de 5 pontos por habilidade, com todas iniciando em 1.\n"<<endl;
    cout<<"Escolha seus pontos de forca: \n"<<endl;
    cin>>forca;
    if (forca>0 &&<5)
    {
     reducao = reducao + forca;
     pontos = pontos - reducao;
     cout>> forca <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
cout<<"Escolha seus pontos de destreza: "<<endl;
    cin>>des;
    if (des>0 &&<5)
    {
     reducao = reducao + des;
     pontos= pontos - reducao;
     cout>> 'des' <<endl;
    }
    else{
cout>>"opcao invalida"<<endl;
    }
    
    cout<<"Escolha seus pontos de constituicao : "<<endl;
    cin>>con;
    if (des>0 &&<5)
    {
     reducao = reducao + con;
     pontos= pontos - reducao;
     cout>> con <<endl;
    }
    else{
cout>>"opcao invalida"<<endl;
    }

       cout<<"Escolha seus pontos de inteligencia : "<<endl;
    cin>>intl;
    if (intl>0 &&<5)
    {
     reducao = reducao + intl;
     pontos= pontos - reducao;
     cout>> intl <<endl;
    }
    else{
cout>>"opcao invalida"<<endl;
    }
       cout<<"Escolha seus pontos de sabedoria: "<<endl;
    cin>> sab;
    if (sab>0 &&<5)
    {
     reducao = reducao + sab;
     pontos= pontos - reducao;
     cout>> sab <<endl;
    }
    else{
cout>>"opcao invalida"<<endl;
    }
       cout<<"Escolha seus pontos de carisma: "<<endl;
    cin>> car;
    if (car>0 &&<5)
    {
     reducao = reducao + car;
     pontos= pontos - reducao;
     cout>> car <<endl;
    }
    else{
cout>>"opcao invalida"<<endl;
    }
    //Comeco da distribuicao das habilidades
    cout<<"Agora que voce ja escolheu seus atributos, voce escolhera suas habilidades entre Arma de Fogo, Arma Branca, Atletismo, Furtividade, Infiltracao, Lutar, Medicina, Persuasao, Tecnologia, Condução, Etiqueta e Idiomas\n
    Voce tera ate 40 pontos para gastar entre as habilidades escolhidas,com o limite de 5 pontos por habilidade, com todas iniciando em 1.\n"<<endl;
    cout<<"Escolha seus pontos de Arma de Fogo:\n "<<endl;
    cin>>ab;
    if (ab>0 &&<10)
    {
     reducaoB = reducaoB + ab;
     pontosB = pontosB - reducaoB;
     cout>> ab <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
    cout<<"Escolha seus pontos de Arma Branca: "<<endl;
    cin>>ab;
    if (ab>0 &&<10)
    {
     reducaoB = reducaoB + ab;
     pontosB = pontosB - reducaoB;
     cout>> ab <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
    cout<<"Escolha seus pontos de Atletismo: "<<endl;
    cin>>atl;
    if (atl>0 &&<10)
    {
     reducaoB = reducaoB + atl;
     pontosB = pontosB - reducaoB;
     cout>> atl <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
    cout<<"Escolha seus pontos de Furtividade: "<<endl;
    cin>>fur;
    if (fur>0 &&<10)
    {
     reducaoB = reducaoB + fur;
     pontosB = pontosB - reducaoB;
     cout>> fur <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
cout<<"Escolha seus pontos de Infiltracao: "<<endl;
    cin>>inf;
    if (inf>0 &&<10)
    {
     reducaoB = reducaoB + inf;
     pontosB = pontosB - reducaoB;
     cout>> inf <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }

    cout<<"Escolha seus pontos de Lutar: "<<endl;
    cin>>in;
    if (lut>0 &&<10)
    {
     reducaoB = reducaoB + lut;
     pontosB = pontosB - reducaoB;
     cout>> lut <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
    cout<<"Escolha seus pontos de Medicina: "<<endl;
    cin>>med;
    if (med>0 &&<10)
    {
     reducaoB = reducaoB + med;
     pontosB = pontosB - reducaoB;
     cout>> med <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
cout<<"Escolha seus pontos de Persuasao: "<<endl;
    cin>>per;
    if (per>0 &&<10)
    {
     reducaoB = reducaoB + per;
     pontosB = pontosB - reducaoB;
     cout>> per <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
cout<<"Escolha seus pontos de Tecnologia: "<<endl;
    cin>>tec;
    if (med>0 &&<10)
    {
     reducaoB = reducaoB + tec;
     pontosB = pontosB - reducaoB;
     cout>> tec <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
    cout<<"Escolha seus pontos de Conducao: "<<endl;
    cin>>cond;
    if (cond>0 &&<10)
    {
     reducaoB = reducaoB + cond;
     pontosB = pontosB - reducaoB;
     cout>> cond <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
      cout<<"Escolha seus pontos de Etiqueta: "<<endl;
    cin>>eti;
    if (eti>0 &&<10)
    {
     reducaoB = reducaoB + eti;
     pontosB = pontosB - reducaoB;
     cout>> eti <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
    cout<<"Escolha seus pontos de Idiomas: "<<endl;
    cin>>idi;
    if (idi>0 &&<10)
    {
     reducaoB = reducaoB + idi;
     pontosB = pontosB - reducaoB;
     cout>> idi <<endl;
    }
    else{
cout>>"opcao invalida\n"<<endl;
    }
