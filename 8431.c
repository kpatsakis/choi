void fun()
{
  int entity_0 = 14;
  char entity_5[88] = "";
  entity_5 = NULL;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_5, 'a', 88-1);
  entity_5[88-1]='';
  memset(entity_2, 'H', entity_0-1);
  entity_2[entity_0-1]='';
  entity_8 = (char*)malloc(78*sizeof(char));
  entity_8[78-1]='';
  entity_2[89] = 'Y';
}