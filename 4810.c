void fun()
{
  char entity_3[39] = "";
  entity_3 = NULL;
  memset(entity_3, 'j', 39-1);
  entity_3[39-1]='';
  entity_3[16] = 'W';
}