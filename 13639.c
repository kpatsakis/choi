void fun()
{
  int entity_5 = 25;
  entity_5 = 12;
  char* entity_1;
  char entity_9[68] = "";
  memset(entity_9, 'e', 68-1);
  entity_9[68-1]='0';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_9);
}