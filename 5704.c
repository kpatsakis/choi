void fun()
{
  char entity_7[83] = "";
  entity_7 = NULL;
  char entity_4[92] = "";
  entity_4 = NULL;
  char* entity_9;
  char* entity_8;
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[52-1]='';
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[55-1]='';
  memset(entity_4, 'v', 92-1);
  entity_4[92-1]='';
  memset(entity_7, 'J', 83-1);
  entity_7[83-1]='';
  strcpy(entity_8, entity_7);
}