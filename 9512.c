void fun()
{
  int entity_9 = 20;
  entity_9 = 99;
  char entity_8 = 'T';
  char* entity_3;
  char entity_2[64] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_0[65] = "";
  entity_0 = NULL;
  memset(entity_2, 'U', 64-1);
  entity_2[64-1]='';
  memset(entity_0, 'V', 65-1);
  entity_0[65-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[42-1]='';
  strcpy(entity_3, entity_0);
}