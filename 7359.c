void fun()
{
  int entity_8 = 1;
  int entity_9 = 20;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(77*sizeof(char));
  entity_2[77-1]='';
  memset(entity_5, 'P', entity_8-1);
  entity_5[entity_8-1]='';
  memcpy(entity_2, entity_5, entity_8*sizeof(char));
}