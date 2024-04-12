void fun()
{
  char entity_8[63] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_5 = 'Q';
  char* entity_9;
  memset(entity_8, 'n', 63-1);
  entity_8[63-1]='';
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  entity_9 = (char*)malloc(58*sizeof(char));
  entity_9[58-1]='';
  memcpy(entity_9, entity_8, 63*sizeof(char));
}