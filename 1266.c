void fun()
{
  int entity_4 = 54;
  entity_4 = 23;
  char entity_6[100] = "";
  entity_6 = NULL;
  memset(entity_6, 'O', 100-1);
  entity_6[100-1]='';
  entity_6[entity_4] = 'n';
}