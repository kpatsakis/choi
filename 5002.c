void fun()
{
  int entity_4 = 71;
  char* entity_0;
  char entity_5[28] = "";
  entity_5 = NULL;
  memset(entity_5, 'x', 28-1);
  entity_5[28-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  entity_4 = 85;
  memcpy(entity_0, entity_5, 28*sizeof(char));
}