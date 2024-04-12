void fun()
{
  char entity_5[97] = "";
  entity_5 = NULL;
  memset(entity_5, 'z', 97-1);
  entity_5[97-1]='';
  entity_5[7] = 'T';
}