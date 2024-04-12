void fun()
{
  int entity_5 = 32;
  int entity_3 = 52;
  char* entity_6;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char entity_7 = 'U';
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[56-1]='';
  memset(entity_0, 'W', entity_3-1);
  entity_0[entity_3-1]='';
  strcpy(entity_6, entity_0);
}