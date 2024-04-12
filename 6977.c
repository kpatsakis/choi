void fun()
{
  int entity_5 = 39;
  int entity_7 = 93;
  int entity_0 = 11;
  char* entity_4;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  memset(entity_9, 'O', entity_7-1);
  entity_9[entity_7-1]='';
  strcpy(entity_4, entity_9);
}