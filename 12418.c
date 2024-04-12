void fun()
{
  int entity_8 = 20;
  char entity_9 = 'u';
  char* entity_3;
  char* entity_4;
  char entity_7[entity_8] = "";
  memset(entity_7, 'Z', entity_8-1);
  entity_7[entity_8-1]='0';
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_7);
}