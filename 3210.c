void fun()
{
  int entity_6 = 64;
  char entity_7[32] = "";
  entity_7 = NULL;
  memset(entity_7, 'z', 32-1);
  entity_7[32-1]='';
  entity_6 = 22;
  entity_7[entity_6] = 'A';
}