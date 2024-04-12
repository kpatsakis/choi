void fun()
{
  int entity_5 = 5;
  int entity_8 = 1;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_1;
  char* entity_0;
  memset(entity_9, 't', entity_8-1);
  entity_9[entity_8-1]='';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  strcpy(entity_1, entity_9);
}