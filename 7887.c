void fun()
{
  int entity_9 = 10;
  int entity_6 = 56;
  char* entity_8;
  char entity_1[41] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  memset(entity_1, 'C', 41-1);
  entity_1[41-1]='';
  entity_5 = (char*)malloc(77*sizeof(char));
  entity_5[77-1]='';
  memset(entity_0, 'm', entity_6-1);
  entity_0[entity_6-1]='';
  entity_6 = 30;
  memcpy(entity_5, entity_0, entity_6*sizeof(char));
}