void fun()
{
  int entity_5 = 67;
  char* entity_7;
  char* entity_2;
  char entity_8[70] = "";
  entity_8 = NULL;
  char entity_4[65] = "";
  entity_4 = NULL;
  memset(entity_8, 'q', 70-1);
  entity_8[70-1]='';
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[60-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_4, 'l', 65-1);
  entity_4[65-1]='';
  entity_5 = 14;
  memcpy(entity_2, entity_8, 70*sizeof(char));
}