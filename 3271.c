void fun()
{
  int entity_8 = 35;
  char* entity_1;
  char* entity_3;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', entity_8-1);
  entity_9[entity_8-1]='';
  entity_1 = (char*)malloc(31*sizeof(char));
  entity_1[31-1]='';
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  strcpy(entity_1, entity_9);
}