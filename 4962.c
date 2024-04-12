void fun()
{
  int entity_1 = 66;
  int entity_5 = 12;
  char entity_0[5] = "";
  entity_0 = NULL;
  char entity_8[40] = "";
  entity_8 = NULL;
  memset(entity_0, 'N', 5-1);
  entity_0[5-1]='';
  memset(entity_8, 'd', 40-1);
  entity_8[40-1]='';
  entity_5 = 61;
  entity_8[entity_5] = 'C';
}