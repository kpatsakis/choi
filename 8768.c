void fun()
{
  char entity_3[97] = "";
  entity_3 = NULL;
  memset(entity_3, 'o', 97-1);
  entity_3[97-1]='';
  entity_3[19] = 'J';
}