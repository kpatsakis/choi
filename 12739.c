void fun()
{
  int entity_8 = 61;
  char entity_6[entity_8] = "";
  char* entity_2;
  memset(entity_6, 'Y', entity_8-1);
  entity_6[entity_8-1]='0';
  entity_2 = (char*)malloc(8*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_6);
}