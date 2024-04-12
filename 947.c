void fun()
{
  int entity_1 = 95;
  entity_1 = 95;
  char* entity_9;
  char* entity_5;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_8 = 'Q';
  memset(entity_0, 'Q', entity_1-1);
  entity_0[entity_1-1]='';
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[89-1]='';
  strcpy(entity_5, entity_0);
}