void fun()
{
  int entity_3 = 89;
  char* entity_6;
  char entity_9[entity_3] = "";
  char entity_8[26] = "";
  memset(entity_9, 'B', entity_3-1);
  entity_9[entity_3-1]='0';
  entity_6 = (char*)malloc(90*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'V', 26-1);
  entity_8[26-1]='0';
  entity_3 = 2;
  strcpy(entity_6, entity_9);
}