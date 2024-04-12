void fun()
{
  int entity_3 = 45;
  int entity_1 = 78;
  char entity_5[12] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_6[75] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(21*sizeof(char));
  entity_2[21-1]='';
  memset(entity_5, 'd', 12-1);
  entity_5[12-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_6, 'n', 75-1);
  entity_6[75-1]='';
  strcpy(entity_7, entity_5);
}