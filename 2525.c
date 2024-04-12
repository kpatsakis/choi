void fun()
{
  int entity_0 = 11;
  entity_0 = 80;
  char entity_7[11] = "";
  entity_7 = NULL;
  memset(entity_7, 'r', 11-1);
  entity_7[11-1]='';
  entity_7[entity_0] = 'F';
}