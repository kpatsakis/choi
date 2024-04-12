void fun()
{
  int entity_9 = 14;
  char* entity_4;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[77-1]='';
  memset(entity_0, 'Z', entity_9-1);
  entity_0[entity_9-1]='';
  strcpy(entity_4, entity_0);
}