void fun()
{
  int entity_5 = 25;
  char* entity_8;
  char entity_6 = 'x';
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[29-1]='';
  memset(entity_2, 'V', entity_5-1);
  entity_2[entity_5-1]='';
  strcpy(entity_8, entity_2);
}