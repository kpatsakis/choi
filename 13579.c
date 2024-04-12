void fun()
{
  int entity_8 = 89;
  int entity_0 = 17;
  entity_0 = 17;
  char* entity_1;
  char entity_9[26] = "";
  char entity_2[entity_0] = "";
  memset(entity_9, 'J', 26-1);
  entity_9[26-1]='0';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'X', entity_0-1);
  entity_2[entity_0-1]='0';
  strcpy(entity_1, entity_2);
}