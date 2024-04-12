void fun()
{
  int entity_4 = 6;
  entity_4 = 25;
  char entity_3[75] = "";
  entity_3 = NULL;
  char entity_9[51] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_6 = 'e';
  char* entity_1;
  memset(entity_3, 'p', 75-1);
  entity_3[75-1]='';
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  memset(entity_9, 'P', 51-1);
  entity_9[51-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memcpy(entity_5, entity_9, 51*sizeof(char));
}