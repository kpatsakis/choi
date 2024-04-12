void fun()
{
  char entity_1[77] = "";
  entity_1 = NULL;
  memset(entity_1, 'c', 77-1);
  entity_1[77-1]='';
  entity_1[84] = 'O';
}