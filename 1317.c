void fun()
{
  char entity_9[63] = "";
  entity_9 = NULL;
  memset(entity_9, 'T', 63-1);
  entity_9[63-1]='';
  entity_9[9] = 'e';
}