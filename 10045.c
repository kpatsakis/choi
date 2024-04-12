void fun()
{
  char entity_2 = 'Z';
  char entity_4[35] = "";
  memset(entity_4, 'o', 35-1);
  entity_4[35-1]='0';
  entity_4[81] = 'x';
}