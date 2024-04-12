void fun()
{
  int entity_3 = 82;
  char* entity_6;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  memset(entity_8, 'm', entity_3-1);
  entity_8[entity_3-1]='';
  entity_3 = 77;
  memcpy(entity_6, entity_8, entity_3*sizeof(char));
}