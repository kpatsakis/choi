void fun()
{
  char entity_9[24] = "";
  entity_9 = NULL;
  memset(entity_9, 'n', 24-1);
  entity_9[24-1]='';
  entity_9[2] = 'a';
}