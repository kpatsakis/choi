void fun()
{
  int entity_3 = 62;
  char* entity_0;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', entity_3-1);
  entity_6[entity_3-1]='';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[84-1]='';
  memcpy(entity_0, entity_6, entity_3*sizeof(char));
}