void fun()
{
  int entity_3 = 48;
  char* entity_6;
  char* entity_1;
  char entity_2[entity_3] = "";
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'S', entity_3-1);
  entity_2[entity_3-1]='0';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_2);
}