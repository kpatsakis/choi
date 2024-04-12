void fun()
{
  char entity_8 = 'O';
  char entity_5[40] = "";
  entity_5 = NULL;
  memset(entity_5, 'V', 40-1);
  entity_5[40-1]='';
  entity_5[99] = 'w';
}