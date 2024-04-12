void fun()
{
  int entity_9 = 41;
  int entity_4 = 14;
  char* entity_3;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_7[48] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(11*sizeof(char));
  entity_6[11-1]='';
  memset(entity_7, 'A', 48-1);
  entity_7[48-1]='';
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[95-1]='';
  memset(entity_8, 'q', entity_9-1);
  entity_8[entity_9-1]='';
  entity_9 = 86;
  memcpy(entity_6, entity_8, entity_9*sizeof(char));
}