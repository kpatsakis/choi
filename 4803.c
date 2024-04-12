void fun()
{
  int entity_8 = 22;
  int entity_7 = 4;
  char* entity_2;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'K', entity_7-1);
  entity_5[entity_7-1]='';
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[46-1]='';
  entity_7 = 89;
  entity_5[66] = 'x';
}