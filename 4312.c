void fun()
{
  char entity_5 = 'g';
  char entity_8[89] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', 89-1);
  entity_8[89-1]='';
  entity_8[87] = 'G';
}