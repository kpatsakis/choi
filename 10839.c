void fun()
{
  char entity_1[77] = "";
  memset(entity_1, 'f', 77-1);
  entity_1[77-1]='0';
  entity_1[93] = 'A';
}