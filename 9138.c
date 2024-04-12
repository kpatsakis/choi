void fun()
{
  int entity_3 = 81;
  entity_3 = 10;
  char entity_4[60] = "";
  entity_4 = NULL;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_4, 'J', 60-1);
  entity_4[60-1]='';
  entity_7 = (char*)malloc(61*sizeof(char));
  entity_7[61-1]='';
  memset(entity_8, 'g', entity_3-1);
  entity_8[entity_3-1]='';
  memcpy(entity_7, entity_8, entity_3*sizeof(char));
}