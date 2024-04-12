void fun()
{
  int entity_9 = 39;
  int entity_5 = 65;
  char entity_7[69] = "";
  entity_7 = NULL;
  char entity_0[54] = "";
  entity_0 = NULL;
  char entity_6 = 'r';
  char* entity_2;
  memset(entity_7, 'G', 69-1);
  entity_7[69-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_0, 'c', 54-1);
  entity_0[54-1]='';
  memcpy(entity_2, entity_0, 54*sizeof(char));
}