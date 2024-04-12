void fun()
{
  int entity_1 = 7;
  char* entity_3;
  char* entity_9;
  char entity_2[81] = "";
  entity_2 = NULL;
  char entity_6 = 'n';
  char entity_7[61] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(86*sizeof(char));
  entity_9[86-1]='';
  memset(entity_7, 'H', 61-1);
  entity_7[61-1]='';
  memset(entity_2, 'u', 81-1);
  entity_2[81-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memcpy(entity_3, entity_7, 61*sizeof(char));
}