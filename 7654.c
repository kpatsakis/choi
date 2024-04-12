void fun()
{
  int entity_6 = 29;
  int entity_4 = 96;
  char* entity_5;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  memset(entity_3, 'Q', entity_4-1);
  entity_3[entity_4-1]='';
  strcpy(entity_5, entity_3);
}