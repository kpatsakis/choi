void fun()
{
  int entity_4 = 22;
  char entity_0[91] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_0, 'w', 91-1);
  entity_0[91-1]='';
  memcpy(entity_6, entity_0, 91*sizeof(char));
}