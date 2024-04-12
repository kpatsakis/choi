void fun()
{
  int entity_9 = 50;
  entity_9 = 50;
  char* entity_7;
  char entity_3[entity_9] = "";
  entity_7 = (char*)malloc(100*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'u', entity_9-1);
  entity_3[entity_9-1]='0';
  strcpy(entity_7, entity_3);
}