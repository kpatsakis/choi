void fun()
{
  char entity_2[5] = "";
  memset(entity_2, 't', 5-1);
  entity_2[5-1]='0';
  entity_2[78] = 'r';
}