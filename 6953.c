void fun()
{
  int entity_1 = 17;
  int entity_8 = 29;
  int entity_3 = 84;
  char* entity_9;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[40-1]='';
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  memset(entity_7, 'J', entity_3-1);
  entity_7[entity_3-1]='';
  memcpy(entity_9, entity_7, entity_3*sizeof(char));
}