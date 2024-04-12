void fun()
{
  int entity_8 = 70;
  char entity_1[1] = "";
  entity_1 = NULL;
  char entity_5[88] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_1, 'n', 1-1);
  entity_1[1-1]='';
  memset(entity_5, 'o', 88-1);
  entity_5[88-1]='';
  memcpy(entity_9, entity_1, 1*sizeof(char));
}