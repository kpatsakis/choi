void fun()
{
  char entity_9[25] = "";
  entity_9 = NULL;
  char entity_8 = 'b';
  memset(entity_9, 'X', 25-1);
  entity_9[25-1]='';
  entity_9[83] = 'v';
}