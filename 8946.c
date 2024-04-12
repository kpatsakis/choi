void fun()
{
  char entity_7[10] = "";
  entity_7 = NULL;
  memset(entity_7, 's', 10-1);
  entity_7[10-1]='';
  entity_7[82] = 'a';
}