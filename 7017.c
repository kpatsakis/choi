void fun()
{
  int entity_1 = 56;
  int entity_4 = 77;
  char entity_6[47] = "";
  entity_6 = NULL;
  char entity_8[83] = "";
  entity_8 = NULL;
  char entity_9[32] = "";
  entity_9 = NULL;
  memset(entity_6, 'V', 47-1);
  entity_6[47-1]='';
  memset(entity_8, 'W', 83-1);
  entity_8[83-1]='';
  memset(entity_9, 'H', 32-1);
  entity_9[32-1]='';
  entity_6[entity_1] = 'Y';
}