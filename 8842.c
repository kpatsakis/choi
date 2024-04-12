void fun()
{
  int entity_4 = 20;
  int entity_3 = 13;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_7[90] = "";
  entity_7 = NULL;
  char entity_2[21] = "";
  entity_2 = NULL;
  memset(entity_1, 'F', entity_3-1);
  entity_1[entity_3-1]='';
  memset(entity_2, 'W', 21-1);
  entity_2[21-1]='';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[66-1]='';
  memset(entity_7, 'n', 90-1);
  entity_7[90-1]='';
  entity_3 = 31;
  memcpy(entity_5, entity_1, entity_3*sizeof(char));
}