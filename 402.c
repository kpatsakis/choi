void fun()
{
  int entity_0 = 17;
  entity_0 = 17;
  char* entity_8;
  char* entity_4;
  char* entity_6;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'J', entity_0-1);
  entity_1[entity_0-1]='';
  entity_6 = (char*)malloc(19*sizeof(char));
  entity_6[19-1]='';
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[98-1]='';
  entity_8 = (char*)malloc(1*sizeof(char));
  entity_8[1-1]='';
  strcpy(entity_8, entity_1);
}