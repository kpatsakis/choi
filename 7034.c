void fun()
{
  int entity_9 = 16;
  char* entity_4;
  char* entity_6;
  char* entity_1;
  char entity_8[15] = "";
  entity_8 = NULL;
  memset(entity_8, 'A', 15-1);
  entity_8[15-1]='';
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  entity_6 = (char*)malloc(79*sizeof(char));
  entity_6[79-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  strcpy(entity_1, entity_8);
}