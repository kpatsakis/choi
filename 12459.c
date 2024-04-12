void fun()
{
  int entity_9 = 25;
  int entity_8 = 76;
  int entity_4 = 46;
  char* entity_0;
  char* entity_3;
  char entity_5[entity_9] = "";
  memset(entity_5, 't', entity_9-1);
  entity_5[entity_9-1]='0';
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_5);
}