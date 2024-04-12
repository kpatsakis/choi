void fun()
{
  int entity_6 = 89;
  char* entity_1;
  char entity_7[entity_6] = "";
  char* entity_0;
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[0]='0';
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'S', entity_6-1);
  entity_7[entity_6-1]='0';
  strcpy(entity_1, entity_7);
}