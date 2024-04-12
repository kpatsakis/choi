void fun()
{
  int entity_3 = 40;
  char* entity_8;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 'd', entity_3-1);
  entity_0[entity_3-1]='';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[25-1]='';
  memcpy(entity_8, entity_0, entity_3*sizeof(char));
}