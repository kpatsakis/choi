void fun()
{
  int entity_3 = 70;
  char entity_7[82] = "";
  entity_7 = NULL;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_7, 'M', 82-1);
  entity_7[82-1]='';
  memset(entity_9, 'd', entity_3-1);
  entity_9[entity_3-1]='';
  entity_3 = 82;
  entity_9[94] = 'U';
}