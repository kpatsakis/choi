void fun()
{
  int entity_1 = 61;
  char* entity_2;
  char* entity_7;
  char entity_6[9] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_7 = (char*)malloc(30*sizeof(char));
  entity_7[30-1]='';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  memset(entity_6, 's', 9-1);
  entity_6[9-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_6);
}