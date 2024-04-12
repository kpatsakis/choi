void fun()
{
  int entity_2 = 88;
  entity_2 = 88;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_8[75] = "";
  entity_8 = NULL;
  memset(entity_8, 'j', 75-1);
  entity_8[75-1]='';
  entity_0 = (char*)malloc(29*sizeof(char));
  entity_0[29-1]='';
  memset(entity_7, 'i', entity_2-1);
  entity_7[entity_2-1]='';
  strcpy(entity_0, entity_7);
}