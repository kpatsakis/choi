void fun()
{
  int entity_9 = 60;
  int entity_4 = 32;
  int entity_7 = 39;
  char* entity_5;
  char entity_3 = 'a';
  char entity_2[entity_9] = "";
  memset(entity_2, 'U', entity_9-1);
  entity_2[entity_9-1]='0';
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_2);
}