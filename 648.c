void fun()
{
  int entity_7 = 55;
  char entity_3[96] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_2[51] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_3, 'P', 96-1);
  entity_3[96-1]='';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memset(entity_2, 'O', 51-1);
  entity_2[51-1]='';
  memcpy(entity_9, entity_2, 51*sizeof(char));
}