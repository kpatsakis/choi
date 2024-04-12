void fun()
{
  char entity_7[1] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', 1-1);
  entity_7[1-1]='';
  entity_7[93] = 'K';
}