void fun()
{
  int entity_4 = 28;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'r', entity_4-1);
  entity_9[entity_4-1]='';
  entity_6 = (char*)malloc(46*sizeof(char));
  entity_6[46-1]='';
  entity_4 = 12;
  entity_9[66] = 'R';
}