void fun()
{
  int entity_1 = 72;
  char* entity_0;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'x', entity_1-1);
  entity_5[entity_1-1]='';
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[32-1]='';
  entity_1 = 89;
  memcpy(entity_0, entity_5, entity_1*sizeof(char));
}