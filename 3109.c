void fun()
{
  int entity_2 = 82;
  int entity_5 = 71;
  char* entity_0;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'Y', entity_2-1);
  entity_9[entity_2-1]='';
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[32-1]='';
  entity_2 = 94;
  strcpy(entity_0, entity_9);
}