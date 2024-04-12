void fun()
{
  int entity_5 = 91;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'a', entity_5-1);
  entity_1[entity_5-1]='';
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[58-1]='';
  entity_1[62] = 'F';
}