void fun()
{
  int entity_8 = 84;
  char* entity_7;
  char entity_6[42] = "";
  entity_6 = NULL;
  char* entity_2;
  char entity_9[11] = "";
  entity_9 = NULL;
  char entity_0 = 'V';
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[86-1]='';
  memset(entity_9, 'm', 11-1);
  entity_9[11-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_6, 'P', 42-1);
  entity_6[42-1]='';
  entity_8 = 62;
  memcpy(entity_2, entity_9, 11*sizeof(char));
}