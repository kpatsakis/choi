void fun()
{
  int entity_0 = 58;
  int entity_2 = 18;
  entity_2 = 80;
  char entity_1[96] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  memset(entity_1, 'B', 96-1);
  entity_1[96-1]='';
  entity_1[entity_2] = 'a';
}