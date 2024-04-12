void fun()
{
  int entity_9 = 41;
  entity_9 = 41;
  char* entity_1;
  char* entity_5;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(71*sizeof(char));
  entity_1[71-1]='';
  memset(entity_2, 'U', entity_9-1);
  entity_2[entity_9-1]='';
  entity_5 = (char*)malloc(77*sizeof(char));
  entity_5[77-1]='';
  strcpy(entity_1, entity_2);
}