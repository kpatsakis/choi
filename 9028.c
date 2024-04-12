void fun()
{
  int entity_1 = 39;
  int entity_9 = 73;
  char* entity_5;
  char entity_7[72] = "";
  entity_7 = NULL;
  char entity_2[3] = "";
  entity_2 = NULL;
  char entity_0 = 's';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_2, 'F', 3-1);
  entity_2[3-1]='';
  memset(entity_7, 'D', 72-1);
  entity_7[72-1]='';
  memcpy(entity_5, entity_2, 3*sizeof(char));
}