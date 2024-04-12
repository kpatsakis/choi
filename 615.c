void fun()
{
  int entity_0 = 72;
  int entity_9 = 93;
  char* entity_4;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char entity_1 = 'v';
  char* entity_2;
  memset(entity_7, 'q', entity_0-1);
  entity_7[entity_0-1]='';
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[75-1]='';
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[69-1]='';
  memcpy(entity_2, entity_7, entity_0*sizeof(char));
}