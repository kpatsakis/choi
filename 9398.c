void fun()
{
  int entity_7 = 69;
  int entity_3 = 62;
  char entity_8[50] = "";
  entity_8 = NULL;
  char entity_5[63] = "";
  entity_5 = NULL;
  char entity_1[83] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 'k', 83-1);
  entity_1[83-1]='';
  memset(entity_8, 'i', 50-1);
  entity_8[50-1]='';
  memset(entity_5, 'x', 63-1);
  entity_5[63-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  entity_3 = 71;
  memcpy(entity_6, entity_5, 63*sizeof(char));
}