void fun()
{
  int entity_8 = 91;
  char* entity_2;
  char entity_0[100] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  memset(entity_0, 'J', 100-1);
  entity_0[100-1]='';
  strcpy(entity_2, entity_0);
}