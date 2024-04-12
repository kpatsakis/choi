void fun()
{
  int entity_7 = 39;
  char* entity_0;
  char entity_6[entity_7] = "";
  memset(entity_6, 'k', entity_7-1);
  entity_6[entity_7-1]='0';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_6, entity_7*sizeof(char));
}