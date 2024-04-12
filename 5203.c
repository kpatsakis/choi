void fun()
{
  int entity_6 = 77;
  char entity_9 = 'z';
  char entity_4[28] = "";
  entity_4 = NULL;
  char entity_1[40] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_4, 'U', 28-1);
  entity_4[28-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_1, 'C', 40-1);
  entity_1[40-1]='';
  memcpy(entity_7, entity_4, 28*sizeof(char));
}