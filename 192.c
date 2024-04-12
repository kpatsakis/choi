void fun()
{
  int entity_1 = 75;
  int entity_3 = 100;
  char entity_9[94] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_7[69] = "";
  entity_7 = NULL;
  memset(entity_9, 'K', 94-1);
  entity_9[94-1]='';
  memset(entity_7, 'R', 69-1);
  entity_7[69-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memcpy(entity_4, entity_7, 69*sizeof(char));
}