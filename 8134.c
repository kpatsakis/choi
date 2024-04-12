void fun()
{
  int entity_4 = 52;
  int entity_1 = 14;
  char* entity_9;
  char* entity_0;
  char entity_2[64] = "";
  entity_2 = NULL;
  memset(entity_2, 's', 64-1);
  entity_2[64-1]='';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[54-1]='';
  strcpy(entity_9, entity_2);
}