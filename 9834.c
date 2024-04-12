void fun()
{
  char entity_8[43] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', 43-1);
  entity_8[43-1]='';
  entity_8[76] = 'E';
}