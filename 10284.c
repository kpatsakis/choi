void fun()
{
  char entity_3[32] = "";
  memset(entity_3, 'g', 32-1);
  entity_3[32-1]='0';
  entity_3[25] = 'a';
}