void fun()
{
  int entity_8 = 34;
  char* entity_6;
  char* entity_7;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(14*sizeof(char));
  entity_6[14-1]='';
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[29-1]='';
  memset(entity_0, 'e', entity_8-1);
  entity_0[entity_8-1]='';
  entity_8 = 66;
  strcpy(entity_7, entity_0);
}