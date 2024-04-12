void fun()
{
  int entity_1 = 12;
  int entity_9 = 50;
  char* entity_2;
  char entity_3 = 'P';
  char entity_6[22] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_6, 'X', 22-1);
  entity_6[22-1]='';
  strcpy(entity_2, entity_6);
}