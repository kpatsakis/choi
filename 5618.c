void fun()
{
  int entity_2 = 96;
  int entity_5 = 55;
  char* entity_8;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'u', entity_2-1);
  entity_1[entity_2-1]='';
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[29-1]='';
  strcpy(entity_8, entity_1);
}