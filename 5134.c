void fun()
{
  int entity_0 = 75;
  entity_0 = 99;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_4;
  char entity_1[36] = "";
  entity_1 = NULL;
  memset(entity_8, 'v', entity_0-1);
  entity_8[entity_0-1]='';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  memset(entity_1, 'x', 36-1);
  entity_1[36-1]='';
  memcpy(entity_4, entity_8, entity_0*sizeof(char));
}