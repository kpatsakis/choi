void fun()
{
  int entity_8 = 21;
  int entity_1 = 42;
  char* entity_9;
  char entity_5[41] = "";
  entity_5 = NULL;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_0, 'B', entity_8-1);
  entity_0[entity_8-1]='';
  memset(entity_5, 'D', 41-1);
  entity_5[41-1]='';
  entity_9 = (char*)malloc(72*sizeof(char));
  entity_9[72-1]='';
  entity_8 = 30;
  memcpy(entity_9, entity_0, entity_8*sizeof(char));
}