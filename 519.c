void fun()
{
  int entity_8 = 49;
  int entity_2 = 89;
  char* entity_4;
  char entity_9[30] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_9, 'E', 30-1);
  entity_9[30-1]='';
  entity_0 = (char*)malloc(90*sizeof(char));
  entity_0[90-1]='';
  memcpy(entity_4, entity_9, 30*sizeof(char));
}