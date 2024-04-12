void fun()
{
  int entity_0 = 40;
  entity_0 = 58;
  char entity_5[4] = "";
  entity_5 = NULL;
  char entity_4[61] = "";
  entity_4 = NULL;
  memset(entity_4, 'Z', 61-1);
  entity_4[61-1]='';
  memset(entity_5, 'g', 4-1);
  entity_5[4-1]='';
  entity_5[entity_0] = 'S';
}