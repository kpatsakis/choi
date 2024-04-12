void fun()
{
  int entity_3 = 68;
  char* entity_4;
  char entity_5[entity_3] = "";
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'I', entity_3-1);
  entity_5[entity_3-1]='0';
  strcpy(entity_4, entity_5);
}