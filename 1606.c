void fun()
{
  char entity_5[40] = "";
  entity_5 = NULL;
  memset(entity_5, 'M', 40-1);
  entity_5[40-1]='';
  entity_5[53] = 'H';
}