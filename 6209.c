void fun()
{
  int entity_7 = 25;
  char* entity_9;
  char* entity_2;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'g', entity_7-1);
  entity_1[entity_7-1]='';
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[94-1]='';
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[73-1]='';
  strcpy(entity_2, entity_1);
}