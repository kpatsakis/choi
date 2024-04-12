void fun()
{
  int entity_6 = 19;
  char* entity_8;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(66*sizeof(char));
  entity_8[66-1]='';
  memset(entity_0, 'l', entity_6-1);
  entity_0[entity_6-1]='';
  entity_6 = 6;
  memcpy(entity_8, entity_0, entity_6*sizeof(char));
}