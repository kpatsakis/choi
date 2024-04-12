void fun()
{
  int entity_1 = 30;
  int entity_9 = 67;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_5[31] = "";
  entity_5 = NULL;
  memset(entity_2, 'd', entity_1-1);
  entity_2[entity_1-1]='';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  memset(entity_5, 'S', 31-1);
  entity_5[31-1]='';
  memcpy(entity_6, entity_2, entity_1*sizeof(char));
}