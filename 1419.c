void fun()
{
  int entity_7 = 61;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'P', entity_7-1);
  entity_3[entity_7-1]='';
  entity_0 = (char*)malloc(29*sizeof(char));
  entity_0[29-1]='';
  entity_7 = 74;
  memcpy(entity_0, entity_3, entity_7*sizeof(char));
}