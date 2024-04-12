void fun()
{
  int entity_1 = 5;
  entity_1 = 97;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_2 = 'w';
  memset(entity_0, 'X', entity_1-1);
  entity_0[entity_1-1]='';
  entity_0[62] = 'D';
}