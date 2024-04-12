void fun()
{
  int entity_1 = 7;
  char entity_4[69] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_4, 'V', 69-1);
  entity_4[69-1]='';
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  memset(entity_7, 'n', entity_1-1);
  entity_7[entity_1-1]='';
  entity_1 = 97;
  memcpy(entity_6, entity_7, entity_1*sizeof(char));
}