void fun()
{
  int entity_0 = 90;
  char entity_3 = 'B';
  char entity_4[80] = "";
  entity_4 = NULL;
  char entity_8[88] = "";
  entity_8 = NULL;
  char entity_5[94] = "";
  entity_5 = NULL;
  memset(entity_8, 'x', 88-1);
  entity_8[88-1]='';
  memset(entity_5, 'm', 94-1);
  entity_5[94-1]='';
  memset(entity_4, 'x', 80-1);
  entity_4[80-1]='';
  entity_0 = 34;
  entity_8[entity_0] = 'B';
}