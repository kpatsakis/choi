void fun()
{
  char entity_6[16] = "";
  entity_6 = NULL;
  memset(entity_6, 's', 16-1);
  entity_6[16-1]='';
  entity_6[77] = 'e';
}