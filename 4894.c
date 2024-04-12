void fun()
{
  int entity_4 = 43;
  char* entity_5;
  char* entity_6;
  char entity_3[20] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[88-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_6 = (char*)malloc(65*sizeof(char));
  entity_6[65-1]='';
  memset(entity_3, 'Q', 20-1);
  entity_3[20-1]='';
  strcpy(entity_7, entity_3);
}