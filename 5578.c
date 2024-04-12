void fun()
{
  int entity_7 = 42;
  char entity_0[28] = "";
  entity_0 = NULL;
  char* entity_1;
  char* entity_9;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  entity_9 = (char*)malloc(89*sizeof(char));
  entity_9[89-1]='';
  memset(entity_0, 'S', 28-1);
  entity_0[28-1]='';
  strcpy(entity_1, entity_0);
}