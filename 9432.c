void fun()
{
  int entity_0 = 78;
  char entity_6 = 'B';
  char entity_7[22] = "";
  entity_7 = NULL;
  memset(entity_7, 'r', 22-1);
  entity_7[22-1]='';
  entity_7[entity_0] = 'p';
}