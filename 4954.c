void fun()
{
  int entity_8 = 3;
  entity_8 = 4;
  char* entity_7;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_0, 'b', entity_8-1);
  entity_0[entity_8-1]='';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  entity_0[51] = 'J';
}