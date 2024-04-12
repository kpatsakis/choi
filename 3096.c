void fun()
{
  int entity_8 = 56;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'r', entity_8-1);
  entity_9[entity_8-1]='';
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[77-1]='';
  strcpy(entity_1, entity_9);
}