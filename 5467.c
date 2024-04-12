void fun()
{
  int entity_9 = 12;
  char* entity_7;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[77-1]='';
  memset(entity_8, 'B', entity_9-1);
  entity_8[entity_9-1]='';
  memcpy(entity_7, entity_8, entity_9*sizeof(char));
}