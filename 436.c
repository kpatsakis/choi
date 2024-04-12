void fun()
{
  int entity_7 = 17;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_8;
  char* entity_4;
  memset(entity_5, 'R', entity_7-1);
  entity_5[entity_7-1]='';
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[29-1]='';
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[55-1]='';
  entity_7 = 13;
  memcpy(entity_8, entity_5, entity_7*sizeof(char));
}