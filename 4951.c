void fun()
{
  int entity_9 = 36;
  char entity_7[64] = "";
  entity_7 = NULL;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'r', entity_9-1);
  entity_1[entity_9-1]='';
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memset(entity_7, 'N', 64-1);
  entity_7[64-1]='';
  strcpy(entity_8, entity_1);
}