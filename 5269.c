void fun()
{
  int entity_7 = 40;
  int entity_2 = 25;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_9 = 'k';
  char entity_4[41] = "";
  entity_4 = NULL;
  memset(entity_6, 'u', entity_7-1);
  entity_6[entity_7-1]='';
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[89-1]='';
  memset(entity_4, 'B', 41-1);
  entity_4[41-1]='';
  memcpy(entity_5, entity_6, entity_7*sizeof(char));
}