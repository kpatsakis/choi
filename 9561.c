void fun()
{
  char entity_3[86] = "";
  entity_3 = NULL;
  memset(entity_3, 'd', 86-1);
  entity_3[86-1]='';
  entity_3[46] = 'F';
}