void fun()
{
  char entity_2[4] = "";
  memset(entity_2, 'S', 4-1);
  entity_2[4-1]='0';
  entity_2[93] = 'i';
}