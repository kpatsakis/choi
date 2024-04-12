void fun()
{
  int entity_8 = 42;
  int entity_1 = 9;
  entity_1 = 68;
  char* entity_2;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_5 = 'f';
  memset(entity_9, 'g', entity_1-1);
  entity_9[entity_1-1]='';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  entity_9[85] = 'U';
}