void fun()
{
  int entity_5 = 5;
  int entity_7 = 96;
  char* entity_4;
  char entity_0[91] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_0, 'd', 91-1);
  entity_0[91-1]='';
  entity_5 = 62;
  memcpy(entity_4, entity_0, 91*sizeof(char));
}