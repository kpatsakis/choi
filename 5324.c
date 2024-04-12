void fun()
{
  int entity_3 = 82;
  int entity_7 = 66;
  char entity_8[52] = "";
  entity_8 = NULL;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'S', entity_3-1);
  entity_4[entity_3-1]='';
  memset(entity_8, 'F', 52-1);
  entity_8[52-1]='';
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[39-1]='';
  strcpy(entity_0, entity_4);
}