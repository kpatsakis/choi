void fun()
{
  int entity_2 = 7;
  int entity_4 = 94;
  int entity_8 = 98;
  entity_2 = 7;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[29-1]='';
  memset(entity_6, 'u', entity_2-1);
  entity_6[entity_2-1]='';
  strcpy(entity_1, entity_6);
}