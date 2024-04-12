void fun()
{
  int entity_0 = 40;
  char* entity_8;
  char entity_1[22] = "";
  entity_1 = NULL;
  char entity_9[93] = "";
  entity_9 = NULL;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  memset(entity_1, 'B', 22-1);
  entity_1[22-1]='';
  memset(entity_7, 'q', entity_0-1);
  entity_7[entity_0-1]='';
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[77-1]='';
  memset(entity_9, 'S', 93-1);
  entity_9[93-1]='';
  strcpy(entity_8, entity_7);
}