void fun()
{
  int entity_8 = 87;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_2;
  char entity_5[3] = "";
  entity_5 = NULL;
  memset(entity_3, 'q', entity_8-1);
  entity_3[entity_8-1]='';
  entity_2 = (char*)malloc(95*sizeof(char));
  entity_2[95-1]='';
  memset(entity_5, 'C', 3-1);
  entity_5[3-1]='';
  memcpy(entity_2, entity_3, entity_8*sizeof(char));
}