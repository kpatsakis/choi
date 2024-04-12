void fun()
{
  int entity_6 = 31;
  int entity_2 = 20;
  char entity_8 = 'o';
  char entity_3[40] = "";
  entity_3 = NULL;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_7;
  memset(entity_9, 'M', entity_2-1);
  entity_9[entity_2-1]='';
  memset(entity_3, 'U', 40-1);
  entity_3[40-1]='';
  entity_7 = (char*)malloc(81*sizeof(char));
  entity_7[81-1]='';
  entity_2 = 3;
  memcpy(entity_7, entity_9, entity_2*sizeof(char));
}