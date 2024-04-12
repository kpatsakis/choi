void fun()
{
  char entity_0[42] = "";
  memset(entity_0, 'z', 42-1);
  entity_0[42-1]='0';
  entity_0[36] = 'm';
}