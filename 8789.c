void fun()
{
  int entity_3 = 35;
  char* entity_8;
  char* entity_7;
  char entity_9[19] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'D', 19-1);
  entity_9[19-1]='';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  strcpy(entity_8, entity_9);
}