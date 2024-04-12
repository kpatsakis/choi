void fun()
{
  int entity_3 = 44;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'u', entity_3-1);
  entity_6[entity_3-1]='';
  entity_0 = (char*)malloc(50*sizeof(char));
  entity_0[50-1]='';
  entity_3 = 98;
  memcpy(entity_0, entity_6, entity_3*sizeof(char));
}