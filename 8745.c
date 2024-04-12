void fun()
{
  int entity_5 = 10;
  char* entity_4;
  char entity_1[91] = "";
  entity_1 = NULL;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', entity_5-1);
  entity_9[entity_5-1]='';
  memset(entity_1, 'a', 91-1);
  entity_1[91-1]='';
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  strcpy(entity_4, entity_9);
}