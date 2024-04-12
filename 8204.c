void fun()
{
  int entity_0 = 42;
  entity_0 = 79;
  char* entity_3;
  char entity_8[49] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_8, 'D', 49-1);
  entity_8[49-1]='';
  memcpy(entity_3, entity_8, 49*sizeof(char));
}