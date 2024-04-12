void fun()
{
  int entity_9 = 86;
  char* entity_2;
  char entity_6[entity_9] = "";
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'z', entity_9-1);
  entity_6[entity_9-1]='0';
  strcpy(entity_2, entity_6);
}