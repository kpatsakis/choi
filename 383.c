void fun()
{
  int entity_7 = 77;
  char entity_8[38] = "";
  entity_8 = NULL;
  char entity_1[28] = "";
  entity_1 = NULL;
  memset(entity_1, 'q', 28-1);
  entity_1[28-1]='';
  memset(entity_8, 'z', 38-1);
  entity_8[38-1]='';
  entity_8[entity_7] = 'R';
}