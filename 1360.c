void fun()
{
  int entity_0 = 0;
  int entity_8 = 73;
  entity_8 = 76;
  char entity_5[51] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(42*sizeof(char));
  entity_9[42-1]='';
  memset(entity_4, 'F', entity_8-1);
  entity_4[entity_8-1]='';
  memset(entity_5, 'x', 51-1);
  entity_5[51-1]='';
  memcpy(entity_9, entity_4, entity_8*sizeof(char));
}