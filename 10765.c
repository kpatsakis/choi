void fun()
{
  char entity_3[99] = "";
  memset(entity_3, 'M', 99-1);
  entity_3[99-1]='0';
  entity_3[99] = 'x';
}