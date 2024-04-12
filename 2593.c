void fun()
{
  int entity_9 = 93;
  char* entity_2;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_2 = (char*)malloc(80*sizeof(char));
  entity_2[80-1]='';
  memset(entity_8, 'y', entity_9-1);
  entity_8[entity_9-1]='';
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[4-1]='';
  memcpy(entity_2, entity_8, entity_9*sizeof(char));
}