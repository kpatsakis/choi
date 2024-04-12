void fun()
{
  int entity_9 = 11;
  char entity_8[81] = "";
  entity_8 = NULL;
  char* entity_4;
  char entity_5 = 'U';
  memset(entity_8, 'C', 81-1);
  entity_8[81-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  entity_9 = 95;
  strcpy(entity_4, entity_8);
}