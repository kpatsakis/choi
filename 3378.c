void fun()
{
  char entity_3[37] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', 37-1);
  entity_3[37-1]='';
  entity_3[54] = 'z';
}