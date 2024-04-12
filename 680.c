void fun()
{
  int entity_4 = 61;
  char entity_9[8] = "";
  entity_9 = NULL;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_5;
  memset(entity_9, 'W', 8-1);
  entity_9[8-1]='';
  entity_2 = (char*)malloc(87*sizeof(char));
  entity_2[87-1]='';
  entity_5 = (char*)malloc(52*sizeof(char));
  entity_5[52-1]='';
  memset(entity_0, 'j', entity_4-1);
  entity_0[entity_4-1]='';
  memcpy(entity_2, entity_0, entity_4*sizeof(char));
}