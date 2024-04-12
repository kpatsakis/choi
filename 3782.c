void fun()
{
  char entity_1[7] = "";
  entity_1 = NULL;
  char entity_3 = 'a';
  memset(entity_1, 'f', 7-1);
  entity_1[7-1]='';
  entity_1[57] = 'B';
}