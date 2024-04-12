void fun()
{
  char entity_3[88] = "";
  char entity_7[94] = "";
  memset(entity_3, 'D', 88-1);
  entity_3[88-1]='0';
  memset(entity_7, 'Y', 94-1);
  entity_7[94-1]='0';
  entity_3[27] = 'u';
}