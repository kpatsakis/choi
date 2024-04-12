void fun()
{
  int entity_3 = 98;
  char entity_8 = 'M';
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_6;
  char* entity_5;
  char entity_7[79] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(88*sizeof(char));
  entity_6[88-1]='';
  memset(entity_7, 'S', 79-1);
  entity_7[79-1]='';
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[39-1]='';
  memset(entity_0, 'J', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 24;
  strcpy(entity_6, entity_0);
}