void fun()
{
  int entity_4 = 73;
  int entity_3 = 71;
  char* entity_0;
  char entity_6[15] = "";
  entity_6 = NULL;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_1 = 'U';
  entity_0 = (char*)malloc(26*sizeof(char));
  entity_0[26-1]='';
  memset(entity_8, 'F', entity_3-1);
  entity_8[entity_3-1]='';
  memset(entity_6, 'a', 15-1);
  entity_6[15-1]='';
  memcpy(entity_0, entity_8, entity_3*sizeof(char));
}