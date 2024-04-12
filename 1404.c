void fun()
{
  int entity_3 = 41;
  char entity_2[63] = "";
  entity_2 = NULL;
  char entity_7[81] = "";
  entity_7 = NULL;
  char entity_4[75] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(60*sizeof(char));
  entity_1[60-1]='';
  memset(entity_7, 'Y', 81-1);
  entity_7[81-1]='';
  memset(entity_2, 'm', 63-1);
  entity_2[63-1]='';
  memset(entity_4, 'h', 75-1);
  entity_4[75-1]='';
  entity_4[entity_3] = 'l';
}