void fun()
{
  int entity_6 = 50;
  char entity_9 = 'T';
  char entity_5[64] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_5, 'm', 64-1);
  entity_5[64-1]='';
  entity_6 = 71;
  memcpy(entity_2, entity_5, 64*sizeof(char));
}