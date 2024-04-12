void fun()
{
  int entity_0 = 22;
  entity_0 = 22;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_4;
  char entity_1 = 'k';
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[53-1]='';
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  memset(entity_5, 'u', entity_0-1);
  entity_5[entity_0-1]='';
  strcpy(entity_3, entity_5);
}