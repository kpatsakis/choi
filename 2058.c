void fun()
{
  int entity_5 = 75;
  char* entity_4;
  char entity_2[71] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_8[41] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(2*sizeof(char));
  entity_7[2-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_8, 'D', 41-1);
  entity_8[41-1]='';
  memset(entity_2, 'C', 71-1);
  entity_2[71-1]='';
  strcpy(entity_4, entity_2);
}