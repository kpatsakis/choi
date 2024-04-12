void fun()
{
  int entity_6 = 36;
  int entity_1 = 82;
  char* entity_9;
  char entity_2[59] = "";
  entity_2 = NULL;
  memset(entity_2, 'R', 59-1);
  entity_2[59-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  strcpy(entity_9, entity_2);
}