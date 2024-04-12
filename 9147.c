void fun()
{
  int entity_5 = 14;
  int entity_7 = 29;
  char* entity_3;
  char* entity_6;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_9, 'E', entity_7-1);
  entity_9[entity_7-1]='';
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[47-1]='';
  entity_3 = (char*)malloc(69*sizeof(char));
  entity_3[69-1]='';
  memcpy(entity_3, entity_9, entity_7*sizeof(char));
}