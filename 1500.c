void fun()
{
  int entity_3 = 74;
  char entity_8 = 'l';
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'B', entity_3-1);
  entity_4[entity_3-1]='';
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  memcpy(entity_5, entity_4, entity_3*sizeof(char));
}