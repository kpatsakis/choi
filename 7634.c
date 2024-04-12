void fun()
{
  int entity_5 = 3;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_7 = 'E';
  char* entity_4;
  memset(entity_3, 'Z', entity_5-1);
  entity_3[entity_5-1]='';
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[29-1]='';
  strcpy(entity_4, entity_3);
}