void fun()
{
  int entity_1 = 5;
  int entity_9 = 85;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'r', entity_1-1);
  entity_6[entity_1-1]='';
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[22-1]='';
  entity_1 = 92;
  strcpy(entity_4, entity_6);
}