void fun()
{
  int entity_9 = 75;
  entity_9 = 75;
  char entity_7[54] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memset(entity_2, 'o', entity_9-1);
  entity_2[entity_9-1]='';
  memset(entity_7, 'v', 54-1);
  entity_7[54-1]='';
  strcpy(entity_8, entity_2);
}