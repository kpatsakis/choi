void fun()
{
  int entity_4 = 68;
  char* entity_6;
  char entity_2[entity_4] = "";
  entity_6 = (char*)malloc(20*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'P', entity_4-1);
  entity_2[entity_4-1]='0';
  entity_4 = 16;
  strcpy(entity_6, entity_2);
}