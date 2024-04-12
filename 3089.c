void fun()
{
  char entity_9[42] = "";
  entity_9 = NULL;
  memset(entity_9, 'M', 42-1);
  entity_9[42-1]='';
  entity_9[20] = 'r';
}