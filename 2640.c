void fun()
{
  int entity_9 = 42;
  char entity_5[11] = "";
  entity_5 = NULL;
  char entity_0[33] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_0, 't', 33-1);
  entity_0[33-1]='';
  memset(entity_5, 'v', 11-1);
  entity_5[11-1]='';
  entity_9 = 60;
  memcpy(entity_8, entity_5, 11*sizeof(char));
}