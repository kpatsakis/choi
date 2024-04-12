void fun()
{
  char entity_2[78] = "";
  entity_2 = NULL;
  char entity_8[28] = "";
  entity_8 = NULL;
  char entity_5[41] = "";
  entity_5 = NULL;
  memset(entity_2, 'y', 78-1);
  entity_2[78-1]='';
  memset(entity_8, 'k', 28-1);
  entity_8[28-1]='';
  memset(entity_5, 'A', 41-1);
  entity_5[41-1]='';
  entity_2[61] = 'U';
}