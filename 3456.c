void fun()
{
  int entity_9 = 38;
  char* entity_0;
  char* entity_5;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[51-1]='';
  memset(entity_8, 'v', entity_9-1);
  entity_8[entity_9-1]='';
  entity_0 = (char*)malloc(89*sizeof(char));
  entity_0[89-1]='';
  strcpy(entity_5, entity_8);
}