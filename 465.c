void fun()
{
  int entity_4 = 63;
  char entity_8 = 'V';
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_6[11] = "";
  entity_6 = NULL;
  memset(entity_7, 'i', entity_4-1);
  entity_7[entity_4-1]='';
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  memset(entity_6, 'Z', 11-1);
  entity_6[11-1]='';
  memcpy(entity_5, entity_7, entity_4*sizeof(char));
}