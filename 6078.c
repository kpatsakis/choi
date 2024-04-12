void fun()
{
  int entity_8 = 42;
  char* entity_5;
  char entity_9[85] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'p', 85-1);
  entity_9[85-1]='';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  entity_9[entity_8] = 'a';
}