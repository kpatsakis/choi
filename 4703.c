void fun()
{
  int entity_3 = 28;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_4[84] = "";
  entity_4 = NULL;
  char entity_7[15] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  memset(entity_4, 's', 84-1);
  entity_4[84-1]='';
  memset(entity_7, 'K', 15-1);
  entity_7[15-1]='';
  memset(entity_6, 'S', entity_3-1);
  entity_6[entity_3-1]='';
  strcpy(entity_2, entity_6);
}