void fun()
{
  int entity_0 = 18;
  char entity_5[91] = "";
  entity_5 = NULL;
  char* entity_4;
  memset(entity_5, 'j', 91-1);
  entity_5[91-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  entity_0 = 22;
  memcpy(entity_4, entity_5, 91*sizeof(char));
}