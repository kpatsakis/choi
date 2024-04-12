void fun()
{
  int entity_7 = 26;
  entity_7 = 6;
  char* entity_0;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  memset(entity_6, 'v', entity_7-1);
  entity_6[entity_7-1]='';
  memcpy(entity_0, entity_6, entity_7*sizeof(char));
}