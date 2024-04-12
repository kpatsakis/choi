void fun()
{
  char entity_1[90] = "";
  entity_1 = NULL;
  memset(entity_1, 'x', 90-1);
  entity_1[90-1]='';
  entity_1[5] = 'V';
}