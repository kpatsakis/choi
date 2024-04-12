void fun()
{
  int entity_5 = 81;
  int entity_7 = 13;
  char* entity_2;
  char* entity_4;
  char entity_1[15] = "";
  entity_1 = NULL;
  char entity_8[10] = "";
  entity_8 = NULL;
  memset(entity_1, 'm', 15-1);
  entity_1[15-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  memset(entity_8, 'A', 10-1);
  entity_8[10-1]='';
  entity_4 = (char*)malloc(25*sizeof(char));
  entity_4[25-1]='';
  memcpy(entity_2, entity_8, 10*sizeof(char));
}