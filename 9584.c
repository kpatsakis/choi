void fun()
{
  int entity_0 = 69;
  entity_0 = 1;
  char entity_8[91] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'A', 91-1);
  entity_8[91-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memcpy(entity_5, entity_8, 91*sizeof(char));
}