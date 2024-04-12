void fun()
{
  int entity_2 = 55;
  int entity_8 = 69;
  entity_2 = 58;
  char entity_3[92] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_1[18] = "";
  entity_1 = NULL;
  memset(entity_1, 'T', 18-1);
  entity_1[18-1]='';
  memset(entity_3, 'v', 92-1);
  entity_3[92-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  strcpy(entity_9, entity_1);
}