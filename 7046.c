void fun()
{
  int entity_4 = 56;
  char* entity_1;
  char entity_9[64] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  memset(entity_9, 'N', 64-1);
  entity_9[64-1]='';
  strcpy(entity_1, entity_9);
}