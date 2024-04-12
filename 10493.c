void fun()
{
  char entity_1[42] = "";
  char entity_3 = 'H';
  memset(entity_1, 'z', 42-1);
  entity_1[42-1]='0';
  entity_1[47] = 'B';
}