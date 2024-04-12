void fun()
{
  int entity_5 = 63;
  char* entity_0;
  char entity_6[72] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_6, 'y', 72-1);
  entity_6[72-1]='';
  memcpy(entity_0, entity_6, 72*sizeof(char));
}