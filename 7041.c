void fun()
{
  int entity_5 = 95;
  int entity_0 = 4;
  char* entity_4;
  char entity_7[4] = "";
  entity_7 = NULL;
  char entity_2[31] = "";
  entity_2 = NULL;
  char entity_1[21] = "";
  entity_1 = NULL;
  memset(entity_7, 'T', 4-1);
  entity_7[4-1]='';
  memset(entity_1, 'V', 21-1);
  entity_1[21-1]='';
  memset(entity_2, 'l', 31-1);
  entity_2[31-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memcpy(entity_4, entity_7, 4*sizeof(char));
}