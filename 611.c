void fun()
{
  int entity_1 = 81;
  int entity_4 = 87;
  entity_4 = 8;
  char* entity_9;
  char* entity_2;
  char entity_7[60] = "";
  entity_7 = NULL;
  char entity_8[88] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[15-1]='';
  memset(entity_7, 'O', 60-1);
  entity_7[60-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_8, 'o', 88-1);
  entity_8[88-1]='';
  strcpy(entity_2, entity_8);
}