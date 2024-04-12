void fun()
{
  int entity_4 = 4;
  char* entity_0;
  char entity_1[59] = "";
  entity_1 = NULL;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'K', entity_4-1);
  entity_9[entity_4-1]='';
  entity_0 = (char*)malloc(27*sizeof(char));
  entity_0[27-1]='';
  memset(entity_1, 'F', 59-1);
  entity_1[59-1]='';
  strcpy(entity_0, entity_9);
}