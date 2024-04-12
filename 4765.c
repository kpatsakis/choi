void fun()
{
  char entity_6[77] = "";
  entity_6 = NULL;
  memset(entity_6, 'b', 77-1);
  entity_6[77-1]='';
  entity_6[79] = 'a';
}