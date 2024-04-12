void fun()
{
  int entity_8 = 12;
  int entity_3 = 13;
  entity_8 = 94;
  char* entity_1;
  char entity_5[57] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_0 = 'b';
  entity_1 = (char*)malloc(53*sizeof(char));
  entity_1[53-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_5, 'q', 57-1);
  entity_5[57-1]='';
  memcpy(entity_9, entity_5, 57*sizeof(char));
}