void fun()
{
  int entity_7 = 18;
  entity_7 = 27;
  char entity_9 = 'R';
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'H', entity_7-1);
  entity_0[entity_7-1]='';
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[77-1]='';
  memcpy(entity_4, entity_0, entity_7*sizeof(char));
}