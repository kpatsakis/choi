void fun()
{
  int entity_0 = 7;
  char entity_2[42] = "";
  entity_2 = NULL;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_2, 'c', 42-1);
  entity_2[42-1]='';
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[29-1]='';
  memset(entity_8, 'E', entity_0-1);
  entity_8[entity_0-1]='';
  entity_0 = 87;
  strcpy(entity_7, entity_8);
}