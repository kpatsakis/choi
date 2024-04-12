void fun()
{
  char entity_6[14] = "";
  entity_6 = NULL;
  memset(entity_6, 'v', 14-1);
  entity_6[14-1]='';
  entity_6[82] = 'b';
}