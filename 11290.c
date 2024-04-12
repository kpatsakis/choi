void fun()
{
  char* entity_9;
  char entity_3[23] = "";
  char entity_5[96] = "";
  char* entity_1;
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[0]='0';
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'u', 96-1);
  entity_5[96-1]='0';
  memset(entity_3, 'O', 23-1);
  entity_3[23-1]='0';
  strcpy(entity_1, entity_3);
}