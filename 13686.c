void fun()
{
  int entity_6 = 45;
  entity_6 = 45;
  char entity_1[71] = "";
  char* entity_9;
  char entity_2[entity_6] = "";
  entity_9 = (char*)malloc(1*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'Y', 71-1);
  entity_1[71-1]='0';
  memset(entity_2, 'I', entity_6-1);
  entity_2[entity_6-1]='0';
  strcpy(entity_9, entity_2);
}