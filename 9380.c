void fun()
{
  int entity_1 = 77;
  char* entity_4;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  entity_4 = (char*)malloc(46*sizeof(char));
  entity_4[46-1]='';
  memset(entity_2, 'Y', entity_1-1);
  entity_2[entity_1-1]='';
  strcpy(entity_3, entity_2);
}