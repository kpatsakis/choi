void fun()
{
  char entity_4[47] = "";
  char entity_3[14] = "";
  memset(entity_4, 'c', 47-1);
  entity_4[47-1]='0';
  memset(entity_3, 'A', 14-1);
  entity_3[14-1]='0';
  entity_4[42] = 'A';
}