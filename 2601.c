void fun()
{
  int entity_9 = 17;
  int entity_6 = 81;
  char* entity_5;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(95*sizeof(char));
  entity_8[95-1]='';
  memset(entity_3, 'f', entity_9-1);
  entity_3[entity_9-1]='';
  entity_5 = (char*)malloc(59*sizeof(char));
  entity_5[59-1]='';
  memcpy(entity_5, entity_3, entity_9*sizeof(char));
}