void fun()
{
  int entity_0 = 21;
  char entity_3[79] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_5;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  memset(entity_3, 'Y', 79-1);
  entity_3[79-1]='';
  entity_0 = 75;
  strcpy(entity_9, entity_3);
}