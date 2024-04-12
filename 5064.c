void fun()
{
  int entity_0 = 61;
  char* entity_6;
  char entity_7[18] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_8;
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[58-1]='';
  memset(entity_7, 'H', 18-1);
  entity_7[18-1]='';
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[57-1]='';
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[54-1]='';
  memcpy(entity_6, entity_7, 18*sizeof(char));
}