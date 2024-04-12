void fun()
{
  char entity_7[25] = "";
  entity_7 = NULL;
  memset(entity_7, 'h', 25-1);
  entity_7[25-1]='';
  entity_7[52] = 'I';
}