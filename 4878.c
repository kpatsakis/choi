void fun()
{
  int entity_6 = 36;
  int entity_5 = 50;
  char* entity_7;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char entity_9[8] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[1-1]='';
  memset(entity_9, 'n', 8-1);
  entity_9[8-1]='';
  memset(entity_4, 'O', entity_6-1);
  entity_4[entity_6-1]='';
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  entity_6 = 10;
  strcpy(entity_7, entity_4);
}