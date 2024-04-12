void fun()
{
  int entity_9 = 44;
  entity_9 = 44;
  char entity_1[entity_9] = "";
  char entity_6[69] = "";
  char* entity_7;
  char entity_3 = 'N';
  memset(entity_1, 'O', entity_9-1);
  entity_1[entity_9-1]='0';
  memset(entity_6, 'M', 69-1);
  entity_6[69-1]='0';
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_1);
}