void fun()
{
  int entity_3 = 46;
  entity_3 = 61;
  char entity_6[52] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'i', 52-1);
  entity_6[52-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  strcpy(entity_0, entity_6);
}