void fun()
{
  int entity_3 = 76;
  char entity_4[92] = "";
  entity_4 = NULL;
  memset(entity_4, 'I', 92-1);
  entity_4[92-1]='';
  entity_3 = 63;
  entity_4[entity_3] = 'N';
}