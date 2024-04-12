void fun()
{
  int entity_9 = 24;
  char entity_5 = 'l';
  char* entity_7;
  char entity_4[99] = "";
  entity_4 = NULL;
  char entity_1[72] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_7 = (char*)malloc(67*sizeof(char));
  entity_7[67-1]='';
  memset(entity_4, 'z', 99-1);
  entity_4[99-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_1, 'K', 72-1);
  entity_1[72-1]='';
  entity_9 = 7;
  strcpy(entity_6, entity_4);
}