void fun()
{
  int entity_3 = 57;
  int entity_5 = 16;
  entity_3 = 41;
  char* entity_4;
  char entity_8[6] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_8, 'Y', 6-1);
  entity_8[6-1]='';
  memcpy(entity_4, entity_8, 6*sizeof(char));
}