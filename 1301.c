void fun()
{
  int entity_6 = 71;
  char* entity_4;
  char entity_2[81] = "";
  entity_2 = NULL;
  char* entity_9;
  char* entity_8;
  char entity_5[48] = "";
  entity_5 = NULL;
  memset(entity_5, 'k', 48-1);
  entity_5[48-1]='';
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[75-1]='';
  entity_8 = (char*)malloc(92*sizeof(char));
  entity_8[92-1]='';
  memset(entity_2, 'v', 81-1);
  entity_2[81-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  strcpy(entity_9, entity_2);
}