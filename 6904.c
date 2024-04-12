void fun()
{
  int entity_1 = 58;
  char entity_5[7] = "";
  entity_5 = NULL;
  memset(entity_5, 'O', 7-1);
  entity_5[7-1]='';
  entity_5[58] = 'v';
}