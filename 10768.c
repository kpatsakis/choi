void fun()
{
  char entity_4 = 'X';
  char entity_9[9] = "";
  char* entity_1;
  entity_1 = (char*)malloc(35*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'b', 9-1);
  entity_9[9-1]='0';
  entity_9[20] = 'O';
}