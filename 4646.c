void fun()
{
  char entity_5[22] = "";
  entity_5 = NULL;
  memset(entity_5, 'E', 22-1);
  entity_5[22-1]='';
  entity_5[3] = 'd';
}