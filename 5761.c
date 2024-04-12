void fun()
{
  int entity_1 = 35;
  char entity_5 = 'u';
  char* entity_6;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', entity_1-1);
  entity_7[entity_1-1]='';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[54-1]='';
  entity_1 = 79;
  entity_7[71] = 'x';
}