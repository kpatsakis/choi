void fun()
{
  int entity_6 = 57;
  entity_6 = 57;
  char entity_4[entity_6] = "";
  char* entity_9;
  char* entity_5;
  entity_5 = (char*)malloc(12*sizeof(char));
  entity_5[0]='0';
  entity_9 = (char*)malloc(48*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'n', entity_6-1);
  entity_4[entity_6-1]='0';
  strcpy(entity_5, entity_4);
}