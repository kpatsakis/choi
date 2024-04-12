void fun()
{
  int entity_5 = 43;
  int entity_0 = 83;
  char* entity_8;
  char entity_6[35] = "";
  entity_6 = NULL;
  memset(entity_6, 'Y', 35-1);
  entity_6[35-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  strcpy(entity_8, entity_6);
}