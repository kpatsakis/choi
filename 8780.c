void fun()
{
  int entity_0 = 61;
  char* entity_9;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char entity_3 = 'A';
  memset(entity_7, 'U', entity_0-1);
  entity_7[entity_0-1]='';
  entity_9 = (char*)malloc(77*sizeof(char));
  entity_9[77-1]='';
  strcpy(entity_9, entity_7);
}