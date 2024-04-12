void fun()
{
  int entity_5 = 58;
  char* entity_8;
  char* entity_4;
  char* entity_9;
  char entity_7[20] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_7, 'P', 20-1);
  entity_7[20-1]='';
  entity_8 = (char*)malloc(71*sizeof(char));
  entity_8[71-1]='';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  memcpy(entity_4, entity_7, 20*sizeof(char));
}