void fun()
{
  int entity_5 = 7;
  int entity_8 = 61;
  char* entity_3;
  char* entity_4;
  char entity_9[13] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  memset(entity_9, 'B', 13-1);
  entity_9[13-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memcpy(entity_3, entity_9, 13*sizeof(char));
}