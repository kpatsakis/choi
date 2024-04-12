void fun()
{
  int entity_1 = 26;
  char entity_0[1] = "";
  entity_0 = NULL;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_2, 'x', entity_1-1);
  entity_2[entity_1-1]='';
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[98-1]='';
  memset(entity_0, 'r', 1-1);
  entity_0[1-1]='';
  entity_1 = 46;
  memcpy(entity_8, entity_2, entity_1*sizeof(char));
}