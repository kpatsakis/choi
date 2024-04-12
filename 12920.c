void fun()
{
  int entity_1 = 12;
  char* entity_2;
  char entity_9[17] = "";
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 't', 17-1);
  entity_9[17-1]='0';
  strcpy(entity_2, entity_9);
}