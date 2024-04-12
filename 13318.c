void fun()
{
  int entity_6 = 22;
  entity_6 = 22;
  char* entity_4;
  char entity_3[entity_6] = "";
  memset(entity_3, 'f', entity_6-1);
  entity_3[entity_6-1]='0';
  entity_4 = (char*)malloc(95*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_3);
}