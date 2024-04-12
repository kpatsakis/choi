void fun()
{
  char entity_9[16] = "";
  entity_9 = NULL;
  memset(entity_9, 'L', 16-1);
  entity_9[16-1]='';
  entity_9[68] = 'K';
}