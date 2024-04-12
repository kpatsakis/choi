void fun()
{
  int entity_7 = 53;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_5 = 'J';
  char* entity_1;
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[28-1]='';
  memset(entity_6, 'B', entity_7-1);
  entity_6[entity_7-1]='';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  entity_7 = 84;
  strcpy(entity_8, entity_6);
}