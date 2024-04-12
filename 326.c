void fun()
{
  int entity_0 = 12;
  char* entity_7;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[29-1]='';
  memset(entity_3, 'k', entity_0-1);
  entity_3[entity_0-1]='';
  entity_0 = 84;
  strcpy(entity_7, entity_3);
}