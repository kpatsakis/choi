void fun()
{
  int entity_1 = 39;
  char entity_2[90] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_2, 'F', 90-1);
  entity_2[90-1]='';
  memcpy(entity_9, entity_2, 90*sizeof(char));
}