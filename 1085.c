void fun()
{
  char entity_9[20] = "";
  entity_9 = NULL;
  char entity_5 = 'Y';
  memset(entity_9, 'e', 20-1);
  entity_9[20-1]='';
  entity_9[53] = 'x';
}