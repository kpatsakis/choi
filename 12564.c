void fun()
{
  int entity_3 = 70;
  char* entity_5;
  char entity_6[entity_3] = "";
  char* entity_1;
  memset(entity_6, 'I', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}