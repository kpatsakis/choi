void fun()
{
  int entity_7 = 38;
  char entity_1[92] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_8[19] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(18*sizeof(char));
  entity_3[18-1]='';
  memset(entity_8, 'U', 19-1);
  entity_8[19-1]='';
  memset(entity_1, 'q', 92-1);
  entity_1[92-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memcpy(entity_5, entity_1, 92*sizeof(char));
}