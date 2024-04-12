void fun()
{
  char entity_1 = 'T';
  char entity_7[50] = "";
  memset(entity_7, 'a', 50-1);
  entity_7[50-1]='0';
  entity_7[71] = 'd';
}