void fun()
{
  int entity_8 = 52;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_4;
  memset(entity_5, 'g', entity_8-1);
  entity_5[entity_8-1]='';
  entity_4 = (char*)malloc(95*sizeof(char));
  entity_4[95-1]='';
  entity_8 = 12;
  memcpy(entity_4, entity_5, entity_8*sizeof(char));
}