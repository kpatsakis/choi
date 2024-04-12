void fun()
{
  int entity_7 = 74;
  entity_7 = 19;
  char entity_8[96] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(44*sizeof(char));
  entity_9[44-1]='';
  memset(entity_8, 'n', 96-1);
  entity_8[96-1]='';
  entity_8[entity_7] = 'C';
}