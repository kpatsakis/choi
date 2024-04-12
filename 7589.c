void fun()
{
  int entity_1 = 74;
  char* entity_0;
  char entity_4[46] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_9[73] = "";
  entity_9 = NULL;
  memset(entity_4, 'Q', 46-1);
  entity_4[46-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  entity_0 = (char*)malloc(86*sizeof(char));
  entity_0[86-1]='';
  memset(entity_9, 'O', 73-1);
  entity_9[73-1]='';
  entity_1 = 32;
  strcpy(entity_7, entity_4);
}