void fun()
{
  int entity_1 = 44;
  char* entity_3;
  char* entity_4;
  char entity_0[14] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[28-1]='';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  memset(entity_0, 'y', 14-1);
  entity_0[14-1]='';
  strcpy(entity_4, entity_0);
}