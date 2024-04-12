void fun()
{
  int entity_7 = 32;
  entity_7 = 32;
  char* entity_2;
  char entity_9[44] = "";
  entity_9 = NULL;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char entity_8[31] = "";
  entity_8 = NULL;
  memset(entity_9, 's', 44-1);
  entity_9[44-1]='';
  memset(entity_1, 'h', entity_7-1);
  entity_1[entity_7-1]='';
  entity_2 = (char*)malloc(65*sizeof(char));
  entity_2[65-1]='';
  memset(entity_8, 'r', 31-1);
  entity_8[31-1]='';
  strcpy(entity_2, entity_1);
}