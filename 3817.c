void fun()
{
  int entity_7 = 76;
  entity_7 = 58;
  char* entity_0;
  char entity_6[99] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_6, 'y', 99-1);
  entity_6[99-1]='';
  memcpy(entity_0, entity_6, 99*sizeof(char));
}