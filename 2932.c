void fun()
{
  int entity_6 = 10;
  char* entity_9;
  char entity_5 = 'h';
  char entity_2[90] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_2, 'w', 90-1);
  entity_2[90-1]='';
  memcpy(entity_9, entity_2, 90*sizeof(char));
}