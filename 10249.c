void fun()
{
  char entity_1[33] = "";
  memset(entity_1, 'p', 33-1);
  entity_1[33-1]='0';
  entity_1[70] = 'a';
}