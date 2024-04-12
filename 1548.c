void fun()
{
  int entity_0 = 31;
  entity_0 = 31;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'R', entity_0-1);
  entity_6[entity_0-1]='';
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[29-1]='';
  strcpy(entity_7, entity_6);
}