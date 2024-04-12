void fun()
{
  int entity_7 = 83;
  int entity_9 = 58;
  entity_7 = 74;
  char* entity_4;
  char entity_3[75] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_6[38] = "";
  entity_6 = NULL;
  memset(entity_3, 'C', 75-1);
  entity_3[75-1]='';
  entity_4 = (char*)malloc(95*sizeof(char));
  entity_4[95-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_6, 'r', 38-1);
  entity_6[38-1]='';
  strcpy(entity_5, entity_3);
}