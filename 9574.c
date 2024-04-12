void fun()
{
  char entity_1[12] = "";
  entity_1 = NULL;
  memset(entity_1, 'o', 12-1);
  entity_1[12-1]='';
  entity_1[97] = 'C';
}