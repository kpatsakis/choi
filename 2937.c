void fun()
{
  char entity_2[90] = "";
  entity_2 = NULL;
  memset(entity_2, 'H', 90-1);
  entity_2[90-1]='';
  entity_2[98] = 'W';
}