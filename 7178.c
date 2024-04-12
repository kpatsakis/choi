void fun()
{
  int entity_3 = 81;
  char* entity_6;
  char entity_5[66] = "";
  entity_5 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_5, 'G', 66-1);
  entity_5[66-1]='';
  entity_6 = (char*)malloc(46*sizeof(char));
  entity_6[46-1]='';
  memset(entity_2, 'S', entity_3-1);
  entity_2[entity_3-1]='';
  strcpy(entity_6, entity_2);
}