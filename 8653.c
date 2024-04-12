void fun()
{
  int entity_7 = 60;
  char* entity_6;
  char* entity_9;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[18-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  memset(entity_3, 'F', entity_7-1);
  entity_3[entity_7-1]='';
  entity_7 = 80;
  strcpy(entity_6, entity_3);
}