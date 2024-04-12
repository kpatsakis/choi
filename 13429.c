void fun()
{
  int entity_9 = 45;
  int entity_7 = 22;
  char entity_8[entity_7] = "";
  char* entity_2;
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'q', entity_7-1);
  entity_8[entity_7-1]='0';
  entity_7 = 47;
  strcpy(entity_2, entity_8);
}