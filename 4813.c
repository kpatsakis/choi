void fun()
{
  int entity_5 = 11;
  int entity_7 = 5;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_4;
  char* entity_9;
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  memset(entity_2, 'h', entity_5-1);
  entity_2[entity_5-1]='';
  entity_5 = 55;
  memcpy(entity_9, entity_2, entity_5*sizeof(char));
}