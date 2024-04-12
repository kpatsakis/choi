void fun()
{
  int entity_7 = 76;
  char* entity_8;
  char entity_0[52] = "";
  entity_0 = NULL;
  memset(entity_0, 'e', 52-1);
  entity_0[52-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  entity_7 = 75;
  strcpy(entity_8, entity_0);
}