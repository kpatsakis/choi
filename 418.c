void fun()
{
  char entity_2[52] = "";
  entity_2 = NULL;
  memset(entity_2, 'P', 52-1);
  entity_2[52-1]='';
  entity_2[70] = 'a';
}