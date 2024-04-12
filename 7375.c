void fun()
{
  int entity_1 = 23;
  char* entity_5;
  char* entity_9;
  char entity_7[58] = "";
  entity_7 = NULL;
  char entity_8 = 'P';
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[39-1]='';
  memset(entity_7, 'c', 58-1);
  entity_7[58-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  entity_1 = 44;
  memcpy(entity_9, entity_7, 58*sizeof(char));
}