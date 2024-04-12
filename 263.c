void fun()
{
  int entity_0 = 9;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_4;
  memset(entity_1, 'A', entity_0-1);
  entity_1[entity_0-1]='';
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[56-1]='';
  entity_1[26] = 'J';
}