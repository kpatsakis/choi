void fun()
{
  int entity_0 = 80;
  int entity_3 = 3;
  entity_0 = 78;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char entity_7[6] = "";
  entity_7 = NULL;
  memset(entity_7, 'r', 6-1);
  entity_7[6-1]='';
  memset(entity_4, 'd', entity_0-1);
  entity_4[entity_0-1]='';
  entity_4[73] = 'u';
}