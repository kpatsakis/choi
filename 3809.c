void fun()
{
  char entity_3[28] = "";
  entity_3 = NULL;
  memset(entity_3, 'H', 28-1);
  entity_3[28-1]='';
  entity_3[36] = 'p';
}