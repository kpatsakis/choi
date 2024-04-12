void fun()
{
  int entity_5 = 67;
  entity_5 = 60;
  char* entity_9;
  char entity_7[92] = "";
  memset(entity_7, 't', 92-1);
  entity_7[92-1]='0';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_7);
}