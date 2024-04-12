void fun()
{
  int entity_7 = 34;
  char entity_9[22] = "";
  char* entity_3;
  char entity_4[69] = "";
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'w', 69-1);
  entity_4[69-1]='0';
  memset(entity_9, 'J', 22-1);
  entity_9[22-1]='0';
  strcpy(entity_3, entity_9);
}