void fun()
{
  char entity_5[82] = "";
  entity_5 = NULL;
  memset(entity_5, 'M', 82-1);
  entity_5[82-1]='';
  entity_5[100] = 'J';
}