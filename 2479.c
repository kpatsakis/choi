void fun()
{
  int entity_9 = 29;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_1;
  char* entity_3;
  char* entity_7;
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  entity_7 = (char*)malloc(46*sizeof(char));
  entity_7[46-1]='';
  memset(entity_8, 'u', entity_9-1);
  entity_8[entity_9-1]='';
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[84-1]='';
  strcpy(entity_7, entity_8);
}