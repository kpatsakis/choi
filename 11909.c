void fun()
{
  char entity_9[92] = "";
  char* entity_1;
  char* entity_0;
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[0]='0';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'm', 92-1);
  entity_9[92-1]='0';
  strcpy(entity_1, entity_9);
}