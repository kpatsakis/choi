void fun()
{
  int entity_8 = 85;
  int entity_1 = 23;
  int entity_6 = 23;
  char* entity_4;
  char entity_3[88] = "";
  entity_3 = NULL;
  char entity_7[8] = "";
  entity_7 = NULL;
  memset(entity_7, 'C', 8-1);
  entity_7[8-1]='';
  memset(entity_3, 'K', 88-1);
  entity_3[88-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memcpy(entity_4, entity_7, 8*sizeof(char));
}