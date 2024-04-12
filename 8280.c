void fun()
{
  int entity_5 = 29;
  char entity_4[87] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_6;
  memset(entity_4, 'N', 87-1);
  entity_4[87-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[95-1]='';
  memcpy(entity_0, entity_4, 87*sizeof(char));
}