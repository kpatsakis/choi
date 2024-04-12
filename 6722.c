void fun()
{
  int entity_9 = 92;
  char* entity_8;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_1;
  char* entity_0;
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[69-1]='';
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[42-1]='';
  memset(entity_4, 'S', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 72;
  memcpy(entity_0, entity_4, entity_9*sizeof(char));
}