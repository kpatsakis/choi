void fun()
{
  int entity_4 = 59;
  entity_4 = 59;
  char entity_1[41] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_3[50] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', 50-1);
  entity_3[50-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_1, 'i', 41-1);
  entity_1[41-1]='';
  memcpy(entity_9, entity_3, 50*sizeof(char));
}