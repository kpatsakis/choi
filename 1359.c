void fun()
{
  int entity_3 = 79;
  int entity_5 = 80;
  char entity_6 = 'W';
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_4;
  char* entity_9;
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[90-1]='';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[32-1]='';
  memset(entity_2, 'u', entity_5-1);
  entity_2[entity_5-1]='';
  memcpy(entity_4, entity_2, entity_5*sizeof(char));
}