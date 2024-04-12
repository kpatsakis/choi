void fun()
{
  int entity_8 = 63;
  char* entity_0;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(44*sizeof(char));
  entity_0[44-1]='';
  memset(entity_6, 'Z', entity_8-1);
  entity_6[entity_8-1]='';
  memcpy(entity_0, entity_6, entity_8*sizeof(char));
}