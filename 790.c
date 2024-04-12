void fun()
{
  char entity_9[14] = "";
  entity_9 = NULL;
  char entity_3[38] = "";
  entity_3 = NULL;
  memset(entity_9, 'w', 14-1);
  entity_9[14-1]='';
  memset(entity_3, 'Q', 38-1);
  entity_3[38-1]='';
  entity_3[67] = 's';
}