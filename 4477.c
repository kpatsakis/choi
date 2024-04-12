void fun()
{
  int entity_2 = 74;
  int entity_7 = 17;
  int entity_0 = 26;
  char* entity_4;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'L', entity_0-1);
  entity_8[entity_0-1]='';
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[61-1]='';
  strcpy(entity_4, entity_8);
}