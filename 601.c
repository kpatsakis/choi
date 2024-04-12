void fun()
{
  int entity_2 = 10;
  char entity_7[67] = "";
  entity_7 = NULL;
  char entity_4[40] = "";
  entity_4 = NULL;
  char entity_0[49] = "";
  entity_0 = NULL;
  memset(entity_4, 'i', 40-1);
  entity_4[40-1]='';
  memset(entity_7, 'g', 67-1);
  entity_7[67-1]='';
  memset(entity_0, 'K', 49-1);
  entity_0[49-1]='';
  entity_4[entity_2] = 'Y';
}