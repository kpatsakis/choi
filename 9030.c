void fun()
{
  char entity_5[53] = "";
  entity_5 = NULL;
  memset(entity_5, 'A', 53-1);
  entity_5[53-1]='';
  entity_5[5] = 'e';
}