void fun()
{
  int entity_7 = 26;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_8;
  char entity_3 = 'o';
  char* entity_6;
  char entity_2[9] = "";
  entity_2 = NULL;
  memset(entity_5, 't', entity_7-1);
  entity_5[entity_7-1]='';
  entity_8 = (char*)malloc(40*sizeof(char));
  entity_8[40-1]='';
  entity_6 = (char*)malloc(29*sizeof(char));
  entity_6[29-1]='';
  memset(entity_2, 'X', 9-1);
  entity_2[9-1]='';
  entity_7 = 39;
  memcpy(entity_8, entity_5, entity_7*sizeof(char));
}