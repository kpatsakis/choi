void fun()
{
  int entity_2 = 21;
  char entity_5[52] = "";
  entity_5 = NULL;
  memset(entity_5, 'o', 52-1);
  entity_5[52-1]='';
  entity_5[entity_2] = 'K';
}