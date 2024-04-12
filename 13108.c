void fun()
{
  int entity_0 = 76;
  int entity_6 = 97;
  entity_0 = 76;
  char* entity_5;
  char entity_2[entity_0] = "";
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'e', entity_0-1);
  entity_2[entity_0-1]='0';
  strcpy(entity_5, entity_2);
}