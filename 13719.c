void fun()
{
  int entity_1 = 66;
  entity_1 = 66;
  char entity_0[entity_1] = "";
  char* entity_3;
  char* entity_7;
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'r', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_0);
}