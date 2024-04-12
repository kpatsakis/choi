void fun()
{
  int entity_7 = 46;
  entity_7 = 46;
  char* entity_0;
  char entity_8[46] = "";
  entity_8 = NULL;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[19-1]='';
  memset(entity_6, 'h', entity_7-1);
  entity_6[entity_7-1]='';
  memset(entity_8, 'E', 46-1);
  entity_8[46-1]='';
  strcpy(entity_0, entity_6);
}