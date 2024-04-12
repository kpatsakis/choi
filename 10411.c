void fun()
{
  char entity_1[18] = "";
  memset(entity_1, 'e', 18-1);
  entity_1[18-1]='0';
  entity_1[20] = 'a';
}