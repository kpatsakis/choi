void fun()
{
  int entity_4 = 1;
  int entity_1 = 89;
  char entity_2[entity_1] = "";
  char* entity_5;
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'v', entity_1-1);
  entity_2[entity_1-1]='0';
  strcpy(entity_5, entity_2);
}