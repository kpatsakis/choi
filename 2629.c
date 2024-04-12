void fun()
{
  char entity_1[99] = "";
  entity_1 = NULL;
  memset(entity_1, 'i', 99-1);
  entity_1[99-1]='';
  entity_1[63] = 'r';
}