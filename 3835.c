void fun()
{
  char entity_3[34] = "";
  entity_3 = NULL;
  memset(entity_3, 'X', 34-1);
  entity_3[34-1]='';
  entity_3[33] = 'w';
}