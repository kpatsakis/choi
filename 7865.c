void fun()
{
  int entity_9 = 49;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_8;
  char entity_1[92] = "";
  entity_1 = NULL;
  char entity_3 = 'y';
  memset(entity_1, 'G', 92-1);
  entity_1[92-1]='';
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[64-1]='';
  memset(entity_5, 'Q', entity_9-1);
  entity_5[entity_9-1]='';
  memcpy(entity_8, entity_5, entity_9*sizeof(char));
}