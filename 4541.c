void fun()
{
  int entity_9 = 94;
  entity_9 = 59;
  char* entity_2;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_7;
  char* entity_4;
  entity_7 = (char*)malloc(49*sizeof(char));
  entity_7[49-1]='';
  memset(entity_8, 's', entity_9-1);
  entity_8[entity_9-1]='';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[81-1]='';
  entity_2 = (char*)malloc(71*sizeof(char));
  entity_2[71-1]='';
  memcpy(entity_2, entity_8, entity_9*sizeof(char));
}