void fun()
{
  int entity_0 = 20;
  entity_0 = 69;
  char entity_2[60] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_1[28] = "";
  entity_1 = NULL;
  char entity_5[16] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_1, 't', 28-1);
  entity_1[28-1]='';
  memset(entity_2, 'Q', 60-1);
  entity_2[60-1]='';
  memset(entity_5, 'n', 16-1);
  entity_5[16-1]='';
  strcpy(entity_4, entity_5);
}