void fun()
{
  int entity_5 = 87;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'i', entity_5-1);
  entity_1[entity_5-1]='';
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[73-1]='';
  entity_1[78] = 'Y';
}