void fun()
{
  int entity_1 = 4;
  char* entity_0;
  char* entity_3;
  char entity_6[entity_1] = "";
  char entity_9 = 'w';
  memset(entity_6, 'S', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_6);
}