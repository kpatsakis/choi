void fun()
{
  int entity_5 = 38;
  char entity_9[39] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_9, 'z', 39-1);
  entity_9[39-1]='';
  entity_5 = 44;
  strcpy(entity_4, entity_9);
}