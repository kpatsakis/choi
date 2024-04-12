void fun()
{
  int entity_9 = 4;
  char entity_7[42] = "";
  entity_7 = NULL;
  char* entity_6;
  char* entity_1;
  char entity_0[31] = "";
  entity_0 = NULL;
  memset(entity_7, 'B', 42-1);
  entity_7[42-1]='';
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[66-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_0, 'u', 31-1);
  entity_0[31-1]='';
  memcpy(entity_1, entity_7, 42*sizeof(char));
}