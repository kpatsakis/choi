void fun()
{
  int entity_9 = 91;
  char entity_3[15] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'G', entity_9-1);
  entity_6[entity_9-1]='';
  memset(entity_3, 'e', 15-1);
  entity_3[15-1]='';
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[23-1]='';
  memcpy(entity_5, entity_6, entity_9*sizeof(char));
}