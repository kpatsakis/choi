void fun()
{
  int entity_9 = 39;
  int entity_1 = 57;
  char entity_4[91] = "";
  entity_4 = NULL;
  char entity_3[1] = "";
  entity_3 = NULL;
  char entity_5[37] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_5, 'e', 37-1);
  entity_5[37-1]='';
  memset(entity_3, 'X', 1-1);
  entity_3[1-1]='';
  memset(entity_4, 'M', 91-1);
  entity_4[91-1]='';
  entity_1 = 67;
  memcpy(entity_7, entity_3, 1*sizeof(char));
}