void fun()
{
  char entity_1[17] = "";
  memset(entity_1, 't', 17-1);
  entity_1[17-1]='0';
  entity_1[12] = 'q';
}