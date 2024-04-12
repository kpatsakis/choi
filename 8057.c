void fun()
{
  char entity_4[4] = "";
  entity_4 = NULL;
  memset(entity_4, 'C', 4-1);
  entity_4[4-1]='';
  entity_4[90] = 'e';
}