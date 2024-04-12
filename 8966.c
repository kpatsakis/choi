void fun()
{
  char entity_3[77] = "";
  entity_3 = NULL;
  char entity_6[97] = "";
  entity_6 = NULL;
  memset(entity_3, 'X', 77-1);
  entity_3[77-1]='';
  memset(entity_6, 'c', 97-1);
  entity_6[97-1]='';
  entity_3[88] = 'Y';
}