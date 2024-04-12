void fun()
{
  int entity_5 = 19;
  char* entity_4;
  char* entity_1;
  char entity_0[12] = "";
  entity_0 = NULL;
  memset(entity_0, 'd', 12-1);
  entity_0[12-1]='';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[71-1]='';
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[9-1]='';
  strcpy(entity_1, entity_0);
}