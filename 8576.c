void fun()
{
  int entity_7 = 15;
  entity_7 = 2;
  char entity_6[85] = "";
  entity_6 = NULL;
  memset(entity_6, 'u', 85-1);
  entity_6[85-1]='';
  entity_6[entity_7] = 'T';
}