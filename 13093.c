void fun()
{
  int entity_8 = 50;
  entity_8 = 50;
  char* entity_5;
  char entity_7[entity_8] = "";
  char* entity_0;
  char entity_2 = 'S';
  entity_0 = (char*)malloc(35*sizeof(char));
  entity_0[0]='0';
  entity_5 = (char*)malloc(0*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 's', entity_8-1);
  entity_7[entity_8-1]='0';
  strcpy(entity_0, entity_7);
}