void fun()
{
  int entity_4 = 13;
  char* entity_8;
  char* entity_9;
  char entity_1[10] = "";
  entity_1 = NULL;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[67-1]='';
  memset(entity_7, 'D', entity_4-1);
  entity_7[entity_4-1]='';
  memset(entity_1, 'E', 10-1);
  entity_1[10-1]='';
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  strcpy(entity_9, entity_7);
}