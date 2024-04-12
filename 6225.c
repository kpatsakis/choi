void fun()
{
  char entity_1[93] = "";
  entity_1 = NULL;
  memset(entity_1, 'v', 93-1);
  entity_1[93-1]='';
  entity_1[58] = 't';
}