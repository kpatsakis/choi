void fun()
{
  char entity_1[46] = "";
  entity_1 = NULL;
  char entity_3 = 'w';
  memset(entity_1, 'd', 46-1);
  entity_1[46-1]='';
  entity_1[17] = 'h';
}