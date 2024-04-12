void fun()
{
  int entity_2 = 98;
  char entity_3[97] = "";
  entity_3 = NULL;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_4;
  char* entity_9;
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[12-1]='';
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[67-1]='';
  memset(entity_3, 'M', 97-1);
  entity_3[97-1]='';
  memset(entity_7, 'K', entity_2-1);
  entity_7[entity_2-1]='';
  strcpy(entity_9, entity_7);
}