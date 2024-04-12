void fun()
{
  int entity_9 = 63;
  char entity_4 = 'l';
  char entity_5[36] = "";
  entity_5 = NULL;
  char entity_2[10] = "";
  entity_2 = NULL;
  char entity_0 = 'O';
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_2, 'H', 10-1);
  entity_2[10-1]='';
  memset(entity_5, 'q', 36-1);
  entity_5[36-1]='';
  memcpy(entity_3, entity_2, 10*sizeof(char));
}