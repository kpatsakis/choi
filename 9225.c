void fun()
{
  int entity_8 = 30;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char entity_9 = 'v';
  char* entity_1;
  char* entity_5;
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[94-1]='';
  memset(entity_6, 'B', entity_8-1);
  entity_6[entity_8-1]='';
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[17-1]='';
  memcpy(entity_1, entity_6, entity_8*sizeof(char));
}