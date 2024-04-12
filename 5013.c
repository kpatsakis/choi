void fun()
{
  int entity_4 = 5;
  int entity_5 = 64;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[77-1]='';
  memset(entity_9, 'V', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_1, entity_9, entity_5*sizeof(char));
}