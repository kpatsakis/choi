void fun()
{
  char entity_6[27] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 27-1);
  entity_6[27-1]='';
  entity_6[6] = 'J';
}