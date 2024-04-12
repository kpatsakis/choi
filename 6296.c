void fun()
{
  int entity_2 = 18;
  char* entity_6;
  char* entity_3;
  char entity_9[44] = "";
  entity_9 = NULL;
  char entity_5[66] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  memset(entity_9, 'S', 44-1);
  entity_9[44-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_5, 'O', 66-1);
  entity_5[66-1]='';
  strcpy(entity_3, entity_9);
}