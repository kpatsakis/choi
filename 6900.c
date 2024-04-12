void fun()
{
  int entity_1 = 83;
  char entity_9[7] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(100*sizeof(char));
  entity_4[100-1]='';
  memset(entity_9, 'B', 7-1);
  entity_9[7-1]='';
  memset(entity_0, 'W', entity_1-1);
  entity_0[entity_1-1]='';
  strcpy(entity_4, entity_0);
}