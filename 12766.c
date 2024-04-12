void fun()
{
  int entity_0 = 46;
  char* entity_7;
  char* entity_2;
  char entity_1[entity_0] = "";
  memset(entity_1, 'b', entity_0-1);
  entity_1[entity_0-1]='0';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_2, entity_1);
}