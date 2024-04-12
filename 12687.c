void fun()
{
  int entity_5 = 15;
  char entity_7[entity_5] = "";
  char* entity_2;
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'M', entity_5-1);
  entity_7[entity_5-1]='0';
  strcpy(entity_2, entity_7);
}