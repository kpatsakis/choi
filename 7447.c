void fun()
{
  int entity_5 = 45;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  memset(entity_0, 'y', entity_5-1);
  entity_0[entity_5-1]='';
  strcpy(entity_9, entity_0);
}