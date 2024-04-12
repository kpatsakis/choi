void fun()
{
  int entity_7 = 4;
  char entity_1 = 'r';
  char* entity_3;
  char entity_9[82] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_9, 'e', 82-1);
  entity_9[82-1]='';
  entity_7 = 41;
  strcpy(entity_3, entity_9);
}