void fun()
{
  char entity_7[99] = "";
  memset(entity_7, 'q', 99-1);
  entity_7[99-1]='0';
  entity_7[89] = 'y';
}