void fun()
{
  char entity_5[8] = "";
  entity_5 = NULL;
  memset(entity_5, 'W', 8-1);
  entity_5[8-1]='';
  entity_5[53] = 'D';
}