void fun()
{
  int entity_9 = 38;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'o', entity_9-1);
  entity_3[entity_9-1]='';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[77-1]='';
  entity_9 = 63;
  memcpy(entity_0, entity_3, entity_9*sizeof(char));
}