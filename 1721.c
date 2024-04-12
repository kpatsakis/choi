void fun()
{
  int entity_8 = 37;
  entity_8 = 19;
  char entity_0[29] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'P', 29-1);
  entity_0[29-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_0, 29*sizeof(char));
}