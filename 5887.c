void fun()
{
  char entity_5[42] = "";
  entity_5 = NULL;
  memset(entity_5, 't', 42-1);
  entity_5[42-1]='';
  entity_5[67] = 'b';
}