void fun()
{
  int entity_5 = 8;
  char* entity_1;
  char entity_8[91] = "";
  entity_8 = NULL;
  char entity_0[55] = "";
  entity_0 = NULL;
  char entity_4 = 'z';
  memset(entity_8, 'z', 91-1);
  entity_8[91-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_0, 'g', 55-1);
  entity_0[55-1]='';
  strcpy(entity_1, entity_0);
}