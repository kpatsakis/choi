void fun()
{
  int entity_9 = 23;
  entity_9 = 89;
  char entity_4[47] = "";
  entity_4 = NULL;
  char* entity_2;
  char entity_1 = 'j';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_4, 'a', 47-1);
  entity_4[47-1]='';
  strcpy(entity_2, entity_4);
}