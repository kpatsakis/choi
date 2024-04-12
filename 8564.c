void fun()
{
  int entity_9 = 24;
  int entity_1 = 49;
  char entity_4 = 't';
  char* entity_0;
  char* entity_2;
  char entity_8[12] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  memset(entity_8, 'y', 12-1);
  entity_8[12-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memcpy(entity_0, entity_8, 12*sizeof(char));
}