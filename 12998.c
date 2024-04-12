void fun()
{
  int entity_3 = 98;
  char entity_2 = 'I';
  char* entity_6;
  char entity_8[entity_3] = "";
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'g', entity_3-1);
  entity_8[entity_3-1]='0';
  strcpy(entity_6, entity_8);
}