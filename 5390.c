void fun()
{
  int entity_5 = 60;
  int entity_3 = 76;
  char* entity_1;
  char* entity_7;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[5-1]='';
  memset(entity_9, 'H', entity_5-1);
  entity_9[entity_5-1]='';
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[77-1]='';
  strcpy(entity_1, entity_9);
}