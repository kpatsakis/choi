void fun()
{
  int entity_4 = 81;
  int entity_9 = 36;
  entity_9 = 42;
  char* entity_2;
  char entity_7[64] = "";
  entity_7 = NULL;
  char entity_8[36] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_8, 'O', 36-1);
  entity_8[36-1]='';
  memset(entity_7, 'q', 64-1);
  entity_7[64-1]='';
  memcpy(entity_2, entity_8, 36*sizeof(char));
}