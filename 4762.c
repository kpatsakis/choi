void fun()
{
  char entity_2[87] = "";
  entity_2 = NULL;
  char entity_9[88] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_2, 'P', 87-1);
  entity_2[87-1]='';
  memset(entity_9, 'v', 88-1);
  entity_9[88-1]='';
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[5-1]='';
  memcpy(entity_1, entity_9, 88*sizeof(char));
}