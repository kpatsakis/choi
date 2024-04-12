void fun()
{
  int entity_5 = 24;
  entity_5 = 88;
  char entity_0[33] = "";
  entity_0 = NULL;
  char entity_3[24] = "";
  entity_3 = NULL;
  char entity_8 = 'y';
  memset(entity_3, 'L', 24-1);
  entity_3[24-1]='';
  memset(entity_0, 'v', 33-1);
  entity_0[33-1]='';
  entity_3[entity_5] = 'x';
}