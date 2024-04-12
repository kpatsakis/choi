void fun()
{
  int entity_8 = 51;
  int entity_7 = 99;
  int entity_5 = 23;
  char* entity_9;
  char entity_2[6] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_2, 'u', 6-1);
  entity_2[6-1]='';
  entity_7 = 88;
  memcpy(entity_9, entity_2, 6*sizeof(char));
}