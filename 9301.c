void fun()
{
  int entity_9 = 84;
  char entity_1[10] = "";
  entity_1 = NULL;
  char entity_0[67] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_1, 'o', 10-1);
  entity_1[10-1]='';
  memset(entity_0, 'l', 67-1);
  entity_0[67-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  strcpy(entity_8, entity_0);
}