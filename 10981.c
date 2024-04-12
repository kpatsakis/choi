void fun()
{
  char entity_3[98] = "";
  char entity_1 = 'A';
  memset(entity_3, 'a', 98-1);
  entity_3[98-1]='0';
  entity_3[55] = 'D';
}