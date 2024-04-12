void fun()
{
  int entity_4 = 77;
  char entity_5[64] = "";
  entity_5 = NULL;
  char entity_0 = 'c';
  char* entity_3;
  char* entity_7;
  memset(entity_5, 'v', 64-1);
  entity_5[64-1]='';
  entity_3 = (char*)malloc(7*sizeof(char));
  entity_3[7-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_4 = 39;
  strcpy(entity_7, entity_5);
}