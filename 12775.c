void fun()
{
  int entity_1 = 99;
  int entity_3 = 41;
  char entity_8[entity_3] = "";
  char* entity_0;
  char entity_6[23] = "";
  memset(entity_8, 'h', entity_3-1);
  entity_8[entity_3-1]='0';
  memset(entity_6, 'G', 23-1);
  entity_6[23-1]='0';
  entity_0 = (char*)malloc(74*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_8);
}