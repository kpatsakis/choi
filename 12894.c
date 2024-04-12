void fun()
{
  int entity_6 = 23;
  char entity_5[36] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'w', 36-1);
  entity_5[36-1]='0';
  strcpy(entity_9, entity_5);
}