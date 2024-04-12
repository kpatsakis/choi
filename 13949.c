void fun()
{
  int entity_3 = 36;
  entity_3 = 36;
  char* entity_1;
  char entity_6[entity_3] = "";
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'Y', entity_3-1);
  entity_6[entity_3-1]='0';
  strcpy(entity_1, entity_6);
}