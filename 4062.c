void fun()
{
  int entity_4 = 53;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(93*sizeof(char));
  entity_0[93-1]='';
  memset(entity_9, 'i', entity_4-1);
  entity_9[entity_4-1]='';
  strcpy(entity_0, entity_9);
}