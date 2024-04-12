void fun()
{
  char entity_3[24] = "";
  entity_3 = NULL;
  memset(entity_3, 'P', 24-1);
  entity_3[24-1]='';
  entity_3[99] = 'P';
}