void fun()
{
  int entity_9 = 14;
  entity_9 = 40;
  char* entity_1;
  char entity_2[9] = "";
  entity_2 = NULL;
  char entity_5 = 'Y';
  memset(entity_2, 'N', 9-1);
  entity_2[9-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memcpy(entity_1, entity_2, 9*sizeof(char));
}