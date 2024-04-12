void fun()
{
  int entity_5 = 33;
  entity_5 = 27;
  char* entity_6;
  char entity_1 = 'q';
  char* entity_9;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(91*sizeof(char));
  entity_9[91-1]='';
  memset(entity_3, 'I', entity_5-1);
  entity_3[entity_5-1]='';
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[5-1]='';
  entity_3[38] = 'm';
}