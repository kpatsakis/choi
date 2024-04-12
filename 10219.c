void fun()
{
  char entity_1[26] = "";
  memset(entity_1, 'Z', 26-1);
  entity_1[26-1]='0';
  entity_1[67] = 'l';
}