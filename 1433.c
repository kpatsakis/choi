void fun()
{
  int entity_4 = 5;
  int entity_5 = 62;
  int entity_9 = 82;
  entity_9 = 30;
  char* entity_7;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[39-1]='';
  memset(entity_3, 'g', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_7, entity_3, entity_9*sizeof(char));
}