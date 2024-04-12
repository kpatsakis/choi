void fun()
{
  int entity_9 = 80;
  char entity_8 = 'o';
  char* entity_5;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_6 = 'h';
  memset(entity_0, 'f', entity_9-1);
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(77*sizeof(char));
  entity_5[77-1]='';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  strcpy(entity_4, entity_0);
}