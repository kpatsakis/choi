void fun()
{
  int entity_5 = 99;
  int entity_8 = 98;
  char* entity_1;
  char entity_2 = 'T';
  char entity_4[17] = "";
  entity_4 = NULL;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(21*sizeof(char));
  entity_1[21-1]='';
  memset(entity_4, 'y', 17-1);
  entity_4[17-1]='';
  memset(entity_7, 'j', entity_5-1);
  entity_7[entity_5-1]='';
  strcpy(entity_1, entity_7);
}