void fun()
{
  int entity_6 = 38;
  int entity_4 = 10;
  char* entity_5;
  char entity_9[63] = "";
  entity_9 = NULL;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(24*sizeof(char));
  entity_5[24-1]='';
  memset(entity_7, 'X', entity_4-1);
  entity_7[entity_4-1]='';
  memset(entity_9, 'U', 63-1);
  entity_9[63-1]='';
  strcpy(entity_5, entity_7);
}