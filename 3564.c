void fun()
{
  int entity_2 = 55;
  int entity_6 = 23;
  char* entity_3;
  char* entity_5;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[93-1]='';
  memset(entity_9, 'U', entity_2-1);
  entity_9[entity_2-1]='';
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[57-1]='';
  entity_2 = 78;
  memcpy(entity_3, entity_9, entity_2*sizeof(char));
}