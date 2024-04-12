void fun()
{
  int entity_6 = 22;
  char entity_5[entity_6] = "";
  char* entity_7;
  entity_7 = (char*)malloc(23*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'M', entity_6-1);
  entity_5[entity_6-1]='0';
  strcpy(entity_7, entity_5);
}