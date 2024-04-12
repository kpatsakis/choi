void fun()
{
  int entity_1 = 9;
  entity_1 = 9;
  char entity_4 = 'J';
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'g', entity_1-1);
  entity_7[entity_1-1]='';
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  strcpy(entity_5, entity_7);
}