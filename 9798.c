void fun()
{
  char entity_6[89] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', 89-1);
  entity_6[89-1]='';
  entity_6[63] = 'y';
}