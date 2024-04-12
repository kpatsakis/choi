void fun()
{
  int entity_6 = 81;
  entity_6 = 17;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'd', entity_6-1);
  entity_0[entity_6-1]='';
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memcpy(entity_8, entity_0, entity_6*sizeof(char));
}