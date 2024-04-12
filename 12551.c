void fun()
{
  int entity_4 = 13;
  char entity_6[entity_4] = "";
  char* entity_3;
  memset(entity_6, 't', entity_4-1);
  entity_6[entity_4-1]='0';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_6);
}