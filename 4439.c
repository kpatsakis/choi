void fun()
{
  int entity_5 = 46;
  char entity_3 = 'z';
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'v', entity_5-1);
  entity_8[entity_5-1]='';
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[29-1]='';
  entity_5 = 30;
  strcpy(entity_7, entity_8);
}