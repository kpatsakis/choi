void fun()
{
  int entity_5 = 78;
  int entity_3 = 23;
  entity_3 = 73;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  memset(entity_6, 'e', entity_3-1);
  entity_6[entity_3-1]='';
  memcpy(entity_0, entity_6, entity_3*sizeof(char));
}