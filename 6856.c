void fun()
{
  int entity_3 = 19;
  entity_3 = 59;
  char* entity_5;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'v', entity_3-1);
  entity_9[entity_3-1]='';
  entity_5 = (char*)malloc(38*sizeof(char));
  entity_5[38-1]='';
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[1-1]='';
  memcpy(entity_5, entity_9, entity_3*sizeof(char));
}