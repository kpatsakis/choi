void fun()
{
  char entity_4[83] = "";
  entity_4 = NULL;
  memset(entity_4, 'h', 83-1);
  entity_4[83-1]='';
  entity_4[60] = 'E';
}