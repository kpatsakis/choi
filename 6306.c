void fun()
{
  int entity_5 = 28;
  char entity_3[41] = "";
  entity_3 = NULL;
  char* entity_4;
  char* entity_2;
  char entity_7[14] = "";
  entity_7 = NULL;
  memset(entity_7, 'e', 14-1);
  entity_7[14-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_3, 'l', 41-1);
  entity_3[41-1]='';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  entity_5 = 29;
  memcpy(entity_2, entity_3, 41*sizeof(char));
}