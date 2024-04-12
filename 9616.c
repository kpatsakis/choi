void fun()
{
  char entity_3[40] = "";
  entity_3 = NULL;
  memset(entity_3, 'y', 40-1);
  entity_3[40-1]='';
  entity_3[31] = 'x';
}