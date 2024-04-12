void fun()
{
  char entity_3[49] = "";
  entity_3 = NULL;
  char entity_2[84] = "";
  entity_2 = NULL;
  char entity_1[61] = "";
  entity_1 = NULL;
  memset(entity_3, 'P', 49-1);
  entity_3[49-1]='';
  memset(entity_2, 'w', 84-1);
  entity_2[84-1]='';
  memset(entity_1, 'z', 61-1);
  entity_1[61-1]='';
  entity_2[86] = 's';
}