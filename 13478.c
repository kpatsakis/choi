void fun()
{
  int entity_4 = 39;
  entity_4 = 39;
  char* entity_2;
  char entity_7[entity_4] = "";
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'r', entity_4-1);
  entity_7[entity_4-1]='0';
  strcpy(entity_2, entity_7);
}