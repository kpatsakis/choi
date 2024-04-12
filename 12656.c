void fun()
{
  int entity_6 = 19;
  char entity_8[entity_6] = "";
  char entity_5[38] = "";
  char* entity_7;
  memset(entity_8, 't', entity_6-1);
  entity_8[entity_6-1]='0';
  entity_7 = (char*)malloc(98*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'z', 38-1);
  entity_5[38-1]='0';
  strcpy(entity_7, entity_8);
}