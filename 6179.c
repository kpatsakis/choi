void fun()
{
  int entity_9 = 15;
  int entity_5 = 65;
  char* entity_4;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'h', entity_5-1);
  entity_1[entity_5-1]='';
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[98-1]='';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  strcpy(entity_4, entity_1);
}