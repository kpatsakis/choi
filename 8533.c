void fun()
{
  int entity_4 = 2;
  char* entity_0;
  char entity_2[2] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_2, 'E', 2-1);
  entity_2[2-1]='';
  memset(entity_9, 'P', entity_4-1);
  entity_9[entity_4-1]='';
  entity_0 = (char*)malloc(41*sizeof(char));
  entity_0[41-1]='';
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[8-1]='';
  memcpy(entity_7, entity_9, entity_4*sizeof(char));
}