void fun()
{
  char entity_6[21] = "";
  entity_6 = NULL;
  memset(entity_6, 'z', 21-1);
  entity_6[21-1]='';
  entity_6[67] = 'I';
}