void fun()
{
  int entity_1 = 28;
  char* entity_2;
  char entity_4[9] = "";
  entity_4 = NULL;
  char entity_8[70] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'X', 70-1);
  entity_8[70-1]='';
  memset(entity_4, 'B', 9-1);
  entity_4[9-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[46-1]='';
  strcpy(entity_5, entity_8);
}