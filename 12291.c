void fun()
{
  int entity_2 = 5;
  char* entity_0;
  char entity_6[62] = "";
  char* entity_7;
  char entity_9[entity_2] = "";
  entity_0 = (char*)malloc(54*sizeof(char));
  entity_0[0]='0';
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'c', entity_2-1);
  entity_9[entity_2-1]='0';
  memset(entity_6, 'V', 62-1);
  entity_6[62-1]='0';
  strcpy(entity_0, entity_9);
}