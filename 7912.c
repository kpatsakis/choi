void fun()
{
  int entity_3 = 44;
  int entity_1 = 66;
  char entity_2 = 'm';
  char entity_6[41] = "";
  entity_6 = NULL;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_6, 'Y', 41-1);
  entity_6[41-1]='';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[25-1]='';
  memset(entity_5, 'l', entity_3-1);
  entity_5[entity_3-1]='';
  memcpy(entity_8, entity_5, entity_3*sizeof(char));
}