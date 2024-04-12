void fun()
{
  char entity_8[29] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 29-1);
  entity_8[29-1]='';
  entity_8[96] = 'b';
}