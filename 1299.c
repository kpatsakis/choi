void fun()
{
  char entity_4 = 'J';
  char entity_9[56] = "";
  entity_9 = NULL;
  memset(entity_9, 'n', 56-1);
  entity_9[56-1]='';
  entity_9[64] = 'x';
}