void fun()
{
  int entity_1 = 67;
  int entity_3 = 30;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_9[86] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_8, 'n', entity_3-1);
  entity_8[entity_3-1]='';
  memset(entity_9, 'X', 86-1);
  entity_9[86-1]='';
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[7-1]='';
  strcpy(entity_5, entity_8);
}