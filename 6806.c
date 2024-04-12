void fun()
{
  int entity_2 = 53;
  entity_2 = 53;
  char* entity_1;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_9 = 'X';
  char* entity_5;
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[69-1]='';
  memset(entity_7, 'V', entity_2-1);
  entity_7[entity_2-1]='';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  strcpy(entity_5, entity_7);
}