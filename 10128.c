void fun()
{
  char entity_1 = 'Y';
  char entity_2[23] = "";
  memset(entity_2, 'p', 23-1);
  entity_2[23-1]='0';
  entity_2[13] = 'K';
}