void fun()
{
  int entity_2 = 79;
  int entity_4 = 69;
  char entity_0[95] = "";
  entity_0 = NULL;
  char entity_3[95] = "";
  entity_3 = NULL;
  char* entity_6;
  char* entity_7;
  memset(entity_0, 'C', 95-1);
  entity_0[95-1]='';
  memset(entity_3, 'G', 95-1);
  entity_3[95-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[89-1]='';
  strcpy(entity_6, entity_0);
}