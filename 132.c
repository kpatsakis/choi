void fun()
{
  int entity_6 = 50;
  entity_6 = 50;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char entity_7[21] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_4[28] = "";
  entity_4 = NULL;
  memset(entity_1, 't', entity_6-1);
  entity_1[entity_6-1]='';
  memset(entity_4, 'y', 28-1);
  entity_4[28-1]='';
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[96-1]='';
  memset(entity_7, 'r', 21-1);
  entity_7[21-1]='';
  strcpy(entity_5, entity_1);
}