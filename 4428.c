void fun()
{
  int entity_5 = 39;
  int entity_9 = 32;
  entity_9 = 37;
  char* entity_1;
  char* entity_8;
  char entity_3[12] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[69-1]='';
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[22-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_3, 'P', 12-1);
  entity_3[12-1]='';
  memcpy(entity_4, entity_3, 12*sizeof(char));
}