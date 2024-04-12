void fun()
{
  char* entity_4;
  char entity_5[31] = "";
  char* entity_9;
  entity_4 = (char*)malloc(26*sizeof(char));
  entity_4[0]='0';
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'X', 31-1);
  entity_5[31-1]='0';
  entity_5[60] = 'A';
}