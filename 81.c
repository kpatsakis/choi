void fun()
{
  int entity_0 = 61;
  char entity_9 = 'c';
  char entity_1[27] = "";
  entity_1 = NULL;
  char* entity_7;
  char* entity_4;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  memset(entity_1, 'y', 27-1);
  entity_1[27-1]='';
  memcpy(entity_4, entity_1, 27*sizeof(char));
}