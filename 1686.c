void fun()
{
  int entity_1 = 32;
  char* entity_0;
  char* entity_6;
  char entity_4[15] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_6 = (char*)malloc(69*sizeof(char));
  entity_6[69-1]='';
  memset(entity_4, 'q', 15-1);
  entity_4[15-1]='';
  strcpy(entity_0, entity_4);
}