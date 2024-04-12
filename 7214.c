void fun()
{
  int entity_6 = 22;
  char* entity_8;
  char entity_1[11] = "";
  entity_1 = NULL;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(78*sizeof(char));
  entity_8[78-1]='';
  memset(entity_4, 'x', entity_6-1);
  entity_4[entity_6-1]='';
  memset(entity_1, 'F', 11-1);
  entity_1[11-1]='';
  entity_4[36] = 'J';
}