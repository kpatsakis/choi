void fun()
{
  char entity_3[42] = "";
  memset(entity_3, 'A', 42-1);
  entity_3[42-1]='0';
  entity_3[65] = 'Q';
}