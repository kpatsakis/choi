void fun()
{
  int entity_9 = 94;
  char entity_1[56] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_2[82] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', 82-1);
  entity_2[82-1]='';
  memset(entity_1, 'L', 56-1);
  entity_1[56-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  strcpy(entity_4, entity_1);
}