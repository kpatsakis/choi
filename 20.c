void fun()
{
  int entity_5 = 17;
  entity_5 = 36;
  char entity_8[95] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'F', 95-1);
  entity_8[95-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memcpy(entity_3, entity_8, 95*sizeof(char));
}