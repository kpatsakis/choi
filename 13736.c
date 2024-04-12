void fun()
{
  int entity_7 = 87;
  entity_7 = 87;
  char* entity_8;
  char entity_6 = 'D';
  char entity_4[entity_7] = "";
  memset(entity_4, 'k', entity_7-1);
  entity_4[entity_7-1]='0';
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_4);
}