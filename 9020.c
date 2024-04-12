void fun()
{
  int entity_8 = 77;
  char* entity_0;
  char entity_4 = 'W';
  char entity_9[54] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'l', 54-1);
  entity_9[54-1]='';
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[55-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  entity_8 = 72;
  memcpy(entity_5, entity_9, 54*sizeof(char));
}