void fun()
{
  int entity_3 = 22;
  char entity_6[entity_3] = "";
  char* entity_7;
  memset(entity_6, 'D', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[0]='0';
  entity_3 = 11;
  strcpy(entity_7, entity_6);
}