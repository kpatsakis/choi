void fun()
{
  char entity_3[33] = "";
  entity_3 = NULL;
  memset(entity_3, 'V', 33-1);
  entity_3[33-1]='';
  entity_3[5] = 'o';
}