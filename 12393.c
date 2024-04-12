void fun()
{
  int entity_7 = 57;
  char entity_4[entity_7] = "";
  char* entity_3;
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'R', entity_7-1);
  entity_4[entity_7-1]='0';
  strcpy(entity_3, entity_4);
}