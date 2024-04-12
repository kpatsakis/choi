void fun()
{
  char entity_1[28] = "";
  memset(entity_1, 'z', 28-1);
  entity_1[28-1]='0';
  entity_1[62] = 'y';
}