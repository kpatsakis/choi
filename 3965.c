void fun()
{
  int entity_4 = 47;
  entity_4 = 21;
  char entity_8 = 'a';
  char entity_1[88] = "";
  entity_1 = NULL;
  memset(entity_1, 'b', 88-1);
  entity_1[88-1]='';
  entity_1[entity_4] = 'X';
}