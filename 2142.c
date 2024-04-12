void fun()
{
  int entity_4 = 27;
  char entity_6[6] = "";
  entity_6 = NULL;
  memset(entity_6, 'D', 6-1);
  entity_6[6-1]='';
  entity_6[22] = 'X';
}