void fun()
{
  int entity_8 = 97;
  int entity_1 = 45;
  char* entity_5;
  char entity_3[95] = "";
  entity_3 = NULL;
  char* entity_4;
  char entity_9[57] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_3, 'H', 95-1);
  entity_3[95-1]='';
  entity_4 = (char*)malloc(16*sizeof(char));
  entity_4[16-1]='';
  memset(entity_9, 'p', 57-1);
  entity_9[57-1]='';
  entity_1 = 35;
  strcpy(entity_5, entity_3);
}