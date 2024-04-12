void fun()
{
  int entity_0 = 78;
  entity_0 = 71;
  char* entity_2;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(77*sizeof(char));
  entity_2[77-1]='';
  memset(entity_9, 'i', entity_0-1);
  entity_9[entity_0-1]='';
  memcpy(entity_2, entity_9, entity_0*sizeof(char));
}