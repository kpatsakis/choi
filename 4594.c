void fun()
{
  char entity_1[57] = "";
  entity_1 = NULL;
  memset(entity_1, 'X', 57-1);
  entity_1[57-1]='';
  entity_1[46] = 'a';
}